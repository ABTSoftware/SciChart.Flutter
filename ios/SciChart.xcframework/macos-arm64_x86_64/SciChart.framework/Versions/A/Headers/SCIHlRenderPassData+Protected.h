//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIHlRenderPassData+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCICoordinateCalculator.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIHlRenderPassData`.
 */
@interface SCIHlRenderPassData (SCIHlRenderPassDataProtected)

/**
 * Updates pixels coordinates for high, low values stored in this render pass data.
 * @param count The amount of points to update.
 * @param coordCalc Coordinate calculator used for conversion.
 */
- (void)updateHighLowCoords:(NSInteger)count coordCalc:(id<ISCICoordinateCalculator>)coordCalc;

@end

NS_ASSUME_NONNULL_END
