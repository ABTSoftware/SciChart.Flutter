import 'package:flutter_test/flutter_test.dart';
import 'package:sci_chart/sci_chart.dart';
import 'package:sci_chart/sci_chart_platform_interface.dart';
import 'package:sci_chart/sci_chart_method_channel.dart';
import 'package:plugin_platform_interface/plugin_platform_interface.dart';

class MockSciChartPlatform
    with MockPlatformInterfaceMixin
    implements SciChartPlatform {

  @override
  Future<String?> getPlatformVersion() => Future.value('42');
}

void main() {
  final SciChartPlatform initialPlatform = SciChartPlatform.instance;

  test('$MethodChannelSciChart is the default instance', () {
    expect(initialPlatform, isInstanceOf<MethodChannelSciChart>());
  });

}
