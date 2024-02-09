import 'package:flutter/foundation.dart';
import 'package:flutter/services.dart';

import 'sci_chart_platform_interface.dart';

/// An implementation of [SciChartPlatform] that uses method channels.
class MethodChannelSciChart extends SciChartPlatform {
  /// The method channel used to interact with the native platform.
  @visibleForTesting
  final methodChannel = const MethodChannel('sci_chart');

  @override
  Future<String?> getPlatformVersion() async {
    final version = await methodChannel.invokeMethod<String>('getPlatformVersion');
    return version;
  }
}
