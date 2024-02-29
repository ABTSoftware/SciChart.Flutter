# SciChart.Flutter
A Flutter Plugin for SciChart

# Installation Steps
1. Download this repository to your local maching and extract files.
2. Create a folder inside you Flutter root folder named "package" and inside package create another folder named "sci_chart".
3. Move contents of this repository to the above "sci_chart" folder.
4. Inside your Flutter App `pubspec.yamml` file add dependency as below.
```
dependencies:
  flutter:
    sdk: flutter
  sci_chart:
    path: ./package/sci_chart
```
5. Run `flutter pub get` from terminal inside this folder.
6. Install pods for iOS project
```
cd ios/
pod install
```
7. You have successfully installed SciChart

# Using SciChart
1. Inside `lib/main.dart` file import sci_chart
```
import 'package:sci_chart/sci_chart.dart';
```
2. Inside Widget add SciChart as below
```
class _MyHomePageState extends State<MyHomePage> {

  late final SciChartSurfaceController _sciChartController;

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        backgroundColor: Theme.of(context).colorScheme.inversePrimary,
        title: Text(widget.title),
      ),
      body: Center(
        child: SciChart(
            viewType: "com.scichart/scichart_base_band_chart",
            onSciChartSurfaceCreated: _onSciChartViewCreated
        )
      ), // This trailing comma makes auto-formatting nicer for build methods.
    );
  }

  void _onSciChartViewCreated(SciChartSurfaceController controller) {
    _sciChartController = controller;
  }
}
```

Here `viewType` will be the Native View Id that we will discuss later.  

`SciChartSurfaceController` is used to pass data between flutter and native view. It has `setData` and `getData` method which is used to pass data.  

3. Open iOS project in Xcode. Add your license key into `Appdelegate.h`
```
import SciChart

@UIApplicationMain
@objc class AppDelegate: FlutterAppDelegate {
    override func application(
        _ application: UIApplication,
        didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?
    ) -> Bool {
        GeneratedPluginRegistrant.register(with: self)

        let licenseKey = "YOUR_LICENSE_KEY"
        SCIChartSurface.setRuntimeLicenseKey(licenseKey)

        return super.application(application, didFinishLaunchingWithOptions: launchOptions)
    }
}
```

# Configuring Android View
Inside `package/sci_chart/android/src/main/kotlin/com/scichart/sci_chart/base_band` path you will find a demo example that included base band example.

Inside `package/sci_chart/android/src/main/kotlin/com/scichart/sci_chart/SciChartPlugin.kt` file you can add additional views to Android Native views.  

In `SciChartPlugin.kt` file `com.scichart/scichart_base_band_chart` will be the viewType that we added in `main.dart` file

- **Note:** When working with kotlin file please open `package/sci_chart/android` folder in Android Studio so you can import respective class automatically.

## Steps to add new view
1. In `SciChartPlugin.kt` file add new view as below, where `com.scichart/scichart_my_new_chart` will be your new viewType.
```
binding.platformViewRegistry.registerViewFactory(
      "com.scichart/scichart_my_new_chart",
      FlutterMyViewViewFactory(binding.binaryMessenger)
)
```
2. Create `FlutterMyViewFactory.kt` at same location as `SciChartPlugin.kt` file, here take not of `FlutterMyView` which will be created next.
```
class FlutterMyViewFactory(private val messenger: BinaryMessenger) :
    PlatformViewFactory(StandardMessageCodec.INSTANCE) {
    override fun create(context: Context, id: Int, o: Any?): PlatformView {
        return FlutterMyView(context, messenger, id)
    }
}
```
3. Create `FlutterMyView.kt` at same location as below. Don't forget to include license key.
```
class FlutterBaseBandChartView internal constructor(
    private val context: Context,
    messenger: BinaryMessenger,
    id: Int,
) : PlatformView, MethodChannel.MethodCallHandler {

    private val sciChartSurface: SciChartSurface

    private val dataSeries =
        XyyDataSeries(Double::class.javaObjectType, Double::class.javaObjectType)

    override fun getView(): View {
        return sciChartSurface
    }

    init {
        SciChartSurface.setRuntimeLicenseKey("add licence key here");

        sciChartSurface = SciChartSurface(context)

        val xAxis = NumericAxis(context)
        xAxis.visibleRange = DoubleRange(1.1, 2.7)
        val yAxis = NumericAxis(context)
        yAxis.growBy = DoubleRange(0.1, 0.1)

        val data: DoubleSeries = DataManager.getInstance().getDampedSinewave(1.0, 0.01, 1000, 10)
        val moreData: DoubleSeries =
            DataManager.getInstance().getDampedSinewave(1.0, 0.005, 1000, 12)

        dataSeries.append(data.xValues, data.yValues, moreData.yValues)

        val rSeries = FastBandRenderableSeries()
        rSeries.dataSeries = dataSeries
        rSeries.fillBrushStyle = SolidBrushStyle(0x33F48420)
        rSeries.fillY1BrushStyle = SolidBrushStyle(0x3350C7E0)
        rSeries.strokeStyle = SolidPenStyle(-0xb7be0, true, 1f, null)
        rSeries.strokeY1Style = SolidPenStyle(-0xaf3820, true, 1f, null)

        UpdateSuspender.using(sciChartSurface) {
            Collections.addAll<IAxis>(sciChartSurface.xAxes, xAxis)
            Collections.addAll<IAxis>(sciChartSurface.yAxes, yAxis)
            Collections.addAll<FastBandRenderableSeries>(sciChartSurface.renderableSeries, rSeries)
            Collections.addAll(
                sciChartSurface.chartModifiers,
                ZoomPanModifier(), ZoomExtentsModifier()
            )

            AnimationsHelper.createAnimator(
                rSeries,
                SweepXyyTransformation(XyyRenderPassData::class.java),
                1000L, 0,
                AccelerateDecelerateInterpolator(),
                FloatEvaluator(),
                0f, 1f
            ).start()
        }

    }

    override fun onMethodCall(methodCall: MethodCall, result: MethodChannel.Result) {
        when (methodCall.method) {
            "setData" -> setData(methodCall, result)
            "getData" -> getData(methodCall, result)
            else -> result.notImplemented()
        }
    }

    private fun setData(methodCall: MethodCall, result: MethodChannel.Result) {
        result.success(null)
    }

    private fun getData(methodCall: MethodCall, result: MethodChannel.Result) {
        val data = dataSeries.yValues.toList()
        result.success(data.mapNotNull { it.toString() })
    }


    override fun dispose() {
    }
}
```

4. In dart file you can use chart silimar to the above `main.dart` file.
```
SciChart(
    viewType: "com.scichart/scichart_my_new_chart",
    onSciChartSurfaceCreated: _onSciChartViewCreated
)
```

# Configuring iOS View
Inside `package/sci_chart/ios/Classes/BaseBand` path you will find a demo example that included base band example.

Inside `/package/sci_chart/ios/Classes/SciChartPlugin.swift` file you can add additional views to iOS Native views.  

In `SciChartPlugin.swift` file `com.scichart/scichart_base_band_chart` will be the viewType that we have added in `main.dart` file

- **Note:** When working with swift file please open iOS folder in Xcode so you can import respective class automatically.
- In Xcode you can find `/package/sci_chart/ios` folder at `Pods/Development Pods/sci_chart/../../../../ios/.symlinks/plugins/sci_chart/ios` path

## Steps to add new view
1. In `SciChartPlugin.swift` file add new view as below, where `com.scichart/scichart_my_new_chart` will be your new viewType.
```
let myViewFactory = FlutterMyViewFactory(messenger: registrar.messenger())
registrar.register(myViewFactory, withId: "com.scichart/scichart_my_new_chart")
```
2. Create `FlutterMyViewFactory.swift` at same location as `SciChartPlugin.swift` file, here take not of `FlutterMyView` which will be created next.
```
import Flutter
import UIKit

class FlutterMyViewFactory: NSObject, FlutterPlatformViewFactory {
    private var messenger: FlutterBinaryMessenger

    init(messenger: FlutterBinaryMessenger) {
        self.messenger = messenger
        super.init()
    }

    func create(
        withFrame frame: CGRect,
        viewIdentifier viewId: Int64,
        arguments args: Any?
    ) -> FlutterPlatformView {
        return FlutterMyView(
            frame: frame,
            viewIdentifier: viewId,
            arguments: args,
            binaryMessenger: messenger)
    }
}
```
3. Create `FlutterMyView.swift` at same location as below.
```
import Flutter
import UIKit
import SciChart

class FlutterMyView: NSObject, FlutterPlatformView {
    private var _view: UIView
    let surface = SCIChartSurface()

    init(
        frame: CGRect,
        viewIdentifier viewId: Int64,
        arguments args: Any?,
        binaryMessenger messenger: FlutterBinaryMessenger?
    ) {
        _view = UIView()
        super.init()
        // iOS views can be created here
        
        createNativeView(view: _view)
    }

    func view() -> UIView {
        return _view
    }

    func createNativeView(view _view: UIView){
        
        let xAxis = SCINumericAxis()
        xAxis.visibleRange = SCIDoubleRange(min: 1.1, max: 2.7)
        
        let yAxis = SCINumericAxis()
        yAxis.growBy = SCIDoubleRange(min: 0.1, max: 0.1)
        
        let data = SCDDataManager.getDampedSinewave(withAmplitude: 1.0, dampingFactor: 0.01, pointCount: 1000, freq: 10)
        let moreData = SCDDataManager.getDampedSinewave(withAmplitude: 1.0, dampingFactor: 0.005, pointCount: 1000, freq: 12)
        
        let dataSeries = SCIXyyDataSeries(xType: .double, yType: .double)
        dataSeries.append(x: data.xValues, y: data.yValues, y1: moreData.yValues)
        
        let rSeries = SCIFastBandRenderableSeries()
        rSeries.dataSeries = dataSeries
        rSeries.fillBrushStyle = SCISolidBrushStyle(color: 0x3350C7E0)
        rSeries.fillY1BrushStyle = SCISolidBrushStyle(color: 0x33F48420)
        rSeries.strokeStyle =  SCISolidPenStyle(color: 0xFF50C7E0, thickness: 2.0)
        rSeries.strokeY1Style = SCISolidPenStyle(color: 0xFFF48420, thickness: 2.0)
        
        let easingFunction = SCIElasticEase()
        easingFunction.oscillations = 1
        easingFunction.springiness = 5
        
        SCIUpdateSuspender.usingWith(surface) {
            self.surface.xAxes.add(xAxis)
            self.surface.yAxes.add(yAxis)
            self.surface.renderableSeries.add(rSeries)
            self.surface.chartModifiers.add(SCDExampleBaseViewController.createDefaultModifiers())
            
            SCIAnimations.scale(rSeries, duration: 1.0, andEasingFunction: easingFunction)
        }
        
        _view.addSubview(surface)
    }
}
```

4. In dart file you can use chart silimar to the above `main.dart` file.
```
SciChart(
    viewType: "com.scichart/scichart_my_new_chart",
    onSciChartSurfaceCreated: _onSciChartViewCreated
)
```

