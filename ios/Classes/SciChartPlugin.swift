import Flutter
import UIKit

public class SciChartPlugin: NSObject, FlutterPlugin {
  public static func register(with registrar: FlutterPluginRegistrar) {
      
      let baseBandFactory = FlutterBaseBandChartViewFactory(messenger: registrar.messenger())
      registrar.register(baseBandFactory, withId: "com.scichart/scichart_base_band_chart")
  }

  public func handle(_ call: FlutterMethodCall, result: @escaping FlutterResult) {
    switch call.method {
    case "getPlatformVersion":
      result("iOS " + UIDevice.current.systemVersion)
    default:
      result(FlutterMethodNotImplemented)
    }
  }
}
