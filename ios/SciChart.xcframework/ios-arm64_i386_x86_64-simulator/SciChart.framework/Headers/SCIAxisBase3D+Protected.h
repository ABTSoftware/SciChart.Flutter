//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisBase3D+Protected.h is part of SCICHART®, High Performance Scientific Charts
// For full terms and conditions of the license, see http://www.scichart.com/scichart-eula/
//
// This source code is protected by international copyright law. Unauthorized
// reproduction, reverse-engineering, or distribution of all or any portion of
// this source code is strictly prohibited.
//
// This source code contains confidential and proprietary trade secrets of
// SciChart Ltd., and should at no time be copied, transferred, sold,
// distributed or made available without express written permission.
//******************************************************************************

#import "SCIAxisBase3D.h"
#import "SCIAxisCore+Protected.h"
#import "ISCIRangeCalculationHelper3D.h"

@protocol ISCIRangeCalculationHelper;
@protocol ISCICoordinateCalculator;

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIAxisBase3D`.
 */
@interface SCIAxisBase3D ()

@property (nonatomic, readonly) SCISmartProperty *textFontProperty;
@property (nonatomic, readonly) SCISmartPropertyInt *textColorProperty;
@property (nonatomic, readonly) SCISmartPropertyFloat *textSizeProperty;

@property (strong, nonatomic) id<ISCIRangeCalculationHelper3D> rangeCalculationHelper;

@property (nonatomic) BOOL isProvidersDirty;

- (id<ISCICoordinateCalculator>)createCoordinateCalculator:(SCIAxisParams *)params minRange:(double)visibleRangeMin maxRange:(double)visibleRangeMax;

- (void)updateAxisParams;

- (CGFloat)caclulateAxisViewportDimmension;

@end

NS_ASSUME_NONNULL_END
