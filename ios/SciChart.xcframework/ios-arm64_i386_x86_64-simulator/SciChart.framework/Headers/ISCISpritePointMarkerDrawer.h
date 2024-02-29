//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCISpritePointMarkerDrawer.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIBitmap.h"
#import "SCIPenStyle.h"
#import "SCIBrushStyle.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Interface which provides callback for drawing content of `SCISpritePointMarker`.
 */
@protocol ISCISpritePointMarkerDrawer 

/**
 * Renders `ISCIPointMarker` instance on bitmap which will be converted to `ISCITexture2D`.
 * @param bitmap The bitmap where content of sprite should be drawn.
 * @param penStyle The pen style which will be used to draw stroke on bitmap.
 * @param brushStyle The brush style which will be used to fill bitmap.
 */
- (void)onDrawBitmap:(SCIBitmap *)bitmap withPenStyle:(SCIPenStyle *)penStyle andBrushStyle:(SCIBrushStyle *)brushStyle;

@end

NS_ASSUME_NONNULL_END
