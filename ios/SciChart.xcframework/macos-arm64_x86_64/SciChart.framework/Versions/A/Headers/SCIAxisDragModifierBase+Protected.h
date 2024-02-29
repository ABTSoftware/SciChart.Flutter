//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisDragModifierBase+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIAxisDragModifierBase.h"
#import "SCIGestureModifierBase+Protected.h"
#import "ISCIRange.h"
#import "ISCIAxis.h"

NS_ASSUME_NONNULL_BEGIN

/*
 * The extensions in this header are to be used only by subclasses of `SCIAxisDragModifierBase`.
 */
@interface SCIAxisDragModifierBase (Protected)

/**
 * Gets the collection of the `ISCIAxis` to which this modifier may be applicable on.
 */
@property (strong, nonatomic, readonly) SCIAxisCollection *applicableAxes;

/**
 * Performs a pan on the associated ISCIAxis` which is given in the input parameters.
 * @param axis The `ISCIAxis` instance being operated on.
 * @param xDelta The x delta value.
 * @param yDelta The y delta value.
 * @param isSecondHalf BOOL flag to determine which side of the axis is panned.
 
 */
- (void)performPanOnAxis:(id<ISCIAxis>)axis byXDelta:(CGFloat)xDelta yDelta:(CGFloat)yDelta withIsSecondHalf:(BOOL)isSecondHalf;

/**
 * Performs a Scale on the associated `ISCIAxis` which is given in the input parameters.
 * @param axis The `ISCIAxis` instance on which the scale operation will be performed.
 * @param xDelta The x delta value.
 * @param yDelta The y delta value.
 * @param isSecondHalf BOOL flag to determine which side of the axis is scaled.
 */
- (void)performScaleOnAxis:(id<ISCIAxis>)axis byXDelta:(CGFloat)xDelta yDelta:(CGFloat)yDelta withIsSecondHalf:(BOOL)isSecondHalf;

/**
 * When overridden in a derived class, calculates an output `ISCIRange` to apply to the associated `ISCIAxis` which is given in the input parameters.
 * @param applyTo The `ISCIRange` instance which will be scaled.
 * @param xDelta The x delta value.
 * @param yDelta The y delta value.
 * @param isSecondHalf Boolean flag to determine which side of the axis is scaled.
 * @param axis The `ISCIAxis` instance being operated on.
 */
- (void)applyScaleToRange:(id<ISCIRange>)applyTo xDelta:(CGFloat)xDelta yDelta:(CGFloat)yDelta isSecondHalf:(BOOL)isSecondHalf axis:(id<ISCIAxis>)axis;

/**
 * When overridden in a derived class, applies relative scale to the associated `ISCIRange` which is given in the input parameters.
 * A relative range is defined as one that affects the `SCIAxisCore.growBy`, not the `AxisCore.visibleRange`.
 * This is used in cases where the XAxis or YAxis has `SCIAxisCore.autoRange` value set to `SCIAutoRange_Always`,
 * and you still want to be able to drag the axis and to set a constant, relative margin of spacing around the upper and lower bounds of the data.
 * @param applyTo The `ISCIRange` instance which will be scaled.
 * @param fromRange The input range, expecting a VisibleRange.
 * @param axis The `ISCIAxis` instance being operated on.
 */
- (void)applyRelativeScaleToRange:(id<ISCIRange>)applyTo from:(id<ISCIRange>)fromRange axis:(id<ISCIAxis>)axis;

/**
 * Gets whether the specified mouse point is within the second (right-most or top-most) half of the Axis bounds.
 * @param point The location of touch point in view provided by the `UIGestureRecognizer`.
 * @param axisBounds The axis bounds.
 * @param isHorizontalAxis Value, which indicates whether current axis is horizontal or not.
 * @return True if the point is within the second (right-most or top-most) half of the axis bounds, else false.
 */
- (BOOL)getIsSecondHalfPoint:(CGPoint)point inAxisBounds:(CGRect)axisBounds isHorizontal:(BOOL)isHorizontalAxis;

@end

NS_ASSUME_NONNULL_END
