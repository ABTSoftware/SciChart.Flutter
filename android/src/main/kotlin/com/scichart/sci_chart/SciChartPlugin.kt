package com.scichart.sci_chart

import com.scichart.sci_chart.base_band.FlutterBaseBandChartViewFactory
import com.scichart.sci_chart.stock_chart.FlutterStockChartViewFactory

import io.flutter.embedding.engine.plugins.FlutterPlugin

/** SciChartPlugin */
class SciChartPlugin: FlutterPlugin {
  override fun onAttachedToEngine(binding: FlutterPlugin.FlutterPluginBinding) {
    binding.platformViewRegistry.registerViewFactory(
      "com.scichart/scichart_stock_chart", FlutterStockChartViewFactory(binding.binaryMessenger)
    )
    binding.platformViewRegistry.registerViewFactory(
      "com.scichart/scichart_base_band_chart", FlutterBaseBandChartViewFactory(binding.binaryMessenger)
    )
  }

  /*
  * onDetachedFromEngine: should release all resources in this method
  * https://api.flutter.dev/javadoc/io/flutter/embedding/engine/plugins/FlutterPlugin.html
  * */
  override fun onDetachedFromEngine(binding: FlutterPlugin.FlutterPluginBinding) {

  }
}
