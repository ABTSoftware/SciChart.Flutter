package com.scichart.sci_chart.base_band

import android.animation.FloatEvaluator
import android.content.Context
import android.view.View
import android.view.animation.AccelerateDecelerateInterpolator
import com.scichart.charting.model.dataSeries.XyyDataSeries
import com.scichart.charting.modifiers.ZoomExtentsModifier
import com.scichart.charting.modifiers.ZoomPanModifier
import com.scichart.charting.visuals.SciChartSurface
import com.scichart.charting.visuals.animations.AnimationsHelper
import com.scichart.charting.visuals.animations.SweepXyyTransformation
import com.scichart.charting.visuals.axes.IAxis
import com.scichart.charting.visuals.axes.NumericAxis
import com.scichart.charting.visuals.renderableSeries.FastBandRenderableSeries
import com.scichart.charting.visuals.renderableSeries.data.XyyRenderPassData
import com.scichart.core.framework.UpdateSuspender
import com.scichart.data.model.DoubleRange
import com.scichart.drawing.common.SolidBrushStyle
import com.scichart.drawing.common.SolidPenStyle
import com.scichart.sci_chart.data.DataManager
import com.scichart.sci_chart.data.DoubleSeries
import io.flutter.plugin.common.BinaryMessenger
import io.flutter.plugin.common.MethodCall
import io.flutter.plugin.common.MethodChannel
import io.flutter.plugin.platform.PlatformView
import java.util.Collections

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
        SciChartSurface.setRuntimeLicenseKey("add key here");

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