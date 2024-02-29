//
//  FLNativeView.swift
//  Runner
//
//  Created by CN10 on 01/02/24.
//

import Flutter
import UIKit
import SciChart

class FlutterBaseBandChartView: NSObject, FlutterPlatformView {
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
