//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAnnotationCoordinates.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCICleanable.h"
#import <CoreGraphics/CoreGraphics.h>

/**
 * Used internally by the `Annotation API`. Class to hold transformed coordinates for placement of an annotation on the chart.
 */
@interface SCIAnnotationCoordinates : NSObject<ISCICleanable>

/**
 * Defines the coordinates for `X1, Y1` values.
 */
@property (nonatomic) CGPoint pt1;

/**
 * Defines the coordinates for `X2, Y2` values.
 */
@property (nonatomic) CGPoint pt2;

/**
 * Offsets provided by `ISCICoordinateCalculator` for X-Axis and Y-Axis.
 */
@property (nonatomic) CGPoint offset;
  
/**
 * Rect with bounds for parent `annotation surface`.
 */
@property (nonatomic) CGRect annotationsSurfaceBounds;

/**
 * Checks if the point is within the bound of the current `SCIAnnotationCoordinates`
 * @param point The point to test.
 * @return YES -  if the point is within bounds.
 */
- (BOOL)containsPoint:(CGPoint)point;

@end
