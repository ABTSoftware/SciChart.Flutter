import 'package:plugin_platform_interface/plugin_platform_interface.dart';

import 'sci_chart_method_channel.dart';

abstract class SciChartPlatform extends PlatformInterface {
  /// Constructs a SciChartPlatform.
  SciChartPlatform() : super(token: _token);

  static final Object _token = Object();

  static SciChartPlatform _instance = MethodChannelSciChart();

  /// The default instance of [SciChartPlatform] to use.
  ///
  /// Defaults to [MethodChannelSciChart].
  static SciChartPlatform get instance => _instance;

  /// Platform-specific implementations should set this with their own
  /// platform-specific class that extends [SciChartPlatform] when
  /// they register themselves.
  static set instance(SciChartPlatform instance) {
    PlatformInterface.verifyToken(instance, _token);
    _instance = instance;
  }

  Future<String?> getPlatformVersion() {
    throw UnimplementedError('platformVersion() has not been implemented.');
  }
}
