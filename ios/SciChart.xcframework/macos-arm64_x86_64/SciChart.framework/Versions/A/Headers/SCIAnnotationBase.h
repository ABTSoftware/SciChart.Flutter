//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAnnotationBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIAnnotation.h"
#import "ISCIChartSurfaceProvider.h"
#import "SCIAnnotationCoordinateMode.h"
#import "ISCIResizingGrip.h"
#import "ISCIAnnotationSelectionDrawable.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Provides a base class for annotations to be rendered over the chart.
 */
@interface SCIAnnotationBase : NSObject<ISCIAnnotation, ISCIChartSurfaceProvider>

/**
 * Defines the `SCIAnnotationCoordinateMode` to use when placing the annotation.
 * @note E.g. the default Absolute requires that `X1, Y1, X2, Y2` are data-values.
 * The Relative requires that  `X1, Y1, X2, Y2` are double values from 0.0 to 1.0.
 */
@property (nonatomic) SCIAnnotationCoordinateMode coordinateMode;

/**
 * Defines the `z-index` position for this annotation.
 */
@property (nonatomic) int zIndex;

/**
 * Defines the `ISCIResizingGrip` instance for this annotation.
 */
@property (strong, nonatomic) id<ISCIResizingGrip> resizingGrip;

/**
 * Defines the `ISCIAnnotationSelectionDrawable` instance for this annotation.
 */
@property (strong, nonatomic) id<ISCIAnnotationSelectionDrawable> annotationSelectionDrawable;

/**
 * Defines if a annotation should be clipped to it's parrent `annotation surface`.
 */
@property (nonatomic) BOOL clipAdornerToAnnotationSurface;

/**
 * Determines whether the coordinate is valid for placing on the canvas, e.g. is greater than zero and less than `canvasMeasurement`.
 * @param coord the coordinate.
 * @param size The canvas dimension in this axis.
 * @return YES - if coordinate is valid, otherwise - NO.
 */
- (BOOL)isCoordinateValid:(CGFloat)coord withSize:(CGFloat)size;

/**
 * Gets the position of resizing grip with specified index
 * @param resizingGripIndex Index of resizing grip
 * @return Position of resizing grip
 */
- (CGPoint)getResizingGripPositionFor:(SCIAnnotationPointIndex)resizingGripIndex;

@end

NS_ASSUME_NONNULL_END
