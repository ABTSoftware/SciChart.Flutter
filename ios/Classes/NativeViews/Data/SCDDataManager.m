//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCDDataManager.m is part of the SCICHART® Examples. Permission is hereby granted
// to modify, create derivative works, distribute and publish any part of this source
// code whether for commercial, private or personal use.
//
// The SCICHART® examples are distributed in the hope that they will be useful, but
// without any warranty. It is provided "AS IS" without warranty of any kind, either
// expressed or implied.
//******************************************************************************

#import "SCDDataManager.h"
//#import "SCDConstants.h"
//
//NSString *const SCIPriceInduDailyDataPath = @"INDU_Daily.csv";
//NSString *const SCIPriceEURUSDDailyDataPath = @"EURUSD_Daily.csv";
//NSString *const SCITradeticksDataPath = @"TradeTicks.csv";
//NSString *const SCITradeTicksIndexDatePath = @"AAPL_Daily.csv";
//NSString *const SCIWaveformDataPath = @"WaveformData.txt";
//NSString *const SCIFFTDataPath = @"FourierTransform.txt";


@implementation SCDDataManager

+ (SCDDoubleSeries *)getDampedSinewaveWithAmplitude:(double)amplitude DampingFactor:(double)dampingFactor PointCount:(NSInteger)pointCount Freq:(NSInteger)freq {
    return [self getDampedSinewaveWithPad:0 Amplitude:amplitude Phase:0.0 DampingFactor:dampingFactor PointCount:pointCount Freq:freq];
}

+ (SCDDoubleSeries *)getDampedSinewaveWithPad:(NSInteger)pad Amplitude:(double)amplitude Phase:(double)phase DampingFactor:(double)dampingFactor PointCount:(NSInteger)pointCount Freq:(NSInteger)freq {
    SCDDoubleSeries *doubleSeries = [[SCDDoubleSeries alloc] initWithCapacity:pointCount];

    for (NSInteger i = 0; i < pad; i++) {
        double time = 10 * i / (double) pointCount;
        [doubleSeries addX:time y:0];
    }

    for (NSInteger i = pad, j = 0; i < pointCount; i++, j++) {
        double time = 10 * i / (double) pointCount;
        double wn = 2 * M_PI / (pointCount / (double) freq);

        const double d = amplitude * sin(j * wn + phase);
        [doubleSeries addX:time y:d];

        amplitude *= (1.0 - dampingFactor);
    }

    return doubleSeries;
}
@end
