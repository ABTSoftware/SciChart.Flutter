import 'package:flutter/foundation.dart';
import 'package:flutter/gestures.dart';
import 'package:flutter/rendering.dart';
import 'package:flutter/services.dart';
import 'package:flutter/widgets.dart';

typedef SciChartSurfaceCreatedCallback = void Function(
    SciChartSurfaceController controller);

class SciChart extends StatelessWidget{

  final SciChartSurfaceCreatedCallback onSciChartSurfaceCreated;
  final String viewType;

  const SciChart({Key? key, required this.viewType, required this.onSciChartSurfaceCreated}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    const Map<String, dynamic> creationParams = <String, dynamic>{};
    switch (defaultTargetPlatform) {
      case TargetPlatform.android:
        return PlatformViewLink(
          viewType: viewType,
          surfaceFactory: (context, controller) {
            return AndroidViewSurface(
                controller: controller as AndroidViewController,
                hitTestBehavior: PlatformViewHitTestBehavior.opaque,
                gestureRecognizers: const <Factory<OneSequenceGestureRecognizer>>{}
            );
          },
          onCreatePlatformView: (params){

            final AndroidViewController controller = PlatformViewsService.initExpensiveAndroidView(
              id: params.id,
              viewType: viewType,
              layoutDirection: TextDirection.ltr,
              creationParams:creationParams,
              creationParamsCodec: const StandardMessageCodec(),
            );

            controller.addOnPlatformViewCreatedListener(params.onPlatformViewCreated);
            controller.addOnPlatformViewCreatedListener(_onPlatformViewCreated);

            return controller;
          },
        );
      case TargetPlatform.iOS:
        return Text(
            '$defaultTargetPlatform is in development.');
      default:
        return Text(
            '$defaultTargetPlatform is not yet supported by the web_view plugin');
    }
  }

  void _onPlatformViewCreated(int id) =>
      onSciChartSurfaceCreated(SciChartSurfaceController._(viewType, id));
}


class SciChartSurfaceController {
  SciChartSurfaceController._(String viewType, int id)
      : _channel =
  MethodChannel('${viewType}_$id');

  final MethodChannel _channel;

  Future<void> setData({required List<String> data}) async {
    return _channel.invokeMethod('setData', data);
  }

  Future<dynamic> getData() async {
    return _channel.invokeMethod('getData', null);
  }
}