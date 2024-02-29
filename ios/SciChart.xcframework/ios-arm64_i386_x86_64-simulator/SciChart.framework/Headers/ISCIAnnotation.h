//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIAnnotation.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIServiceProvider.h"
#import "ISCIAttachable.h"
#import "ISCIInvalidatableElement.h"
#import "ISCIThemeable.h"
#import "ISCISuspendable.h"
#import "ISCIReceiveGestureEvents.h"
#import "ISCIAdornerProvider.h"
#import "ISCIAxesChangeListener.h"
#import "SCIAnnotationSurfaceEnum.h"
#import "SCIAnnotationPointIndex.h"
#import "SCIDirection2D.h"
#import "SCIAnnotationCoordinates.h"
#import "SCIAxisAlignmentChangedListener.h"
#import "ISCIAnnotationDragListener.h"
#import "SCIAnnotationSelectionChangedListener.h"
#import "SCIAnnotationIsHiddenChangedListener.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface to an annotation, a custom drawable element over or under the `SCIChartSurface`.
 */
@protocol ISCIAnnotation <ISCIAttachable, ISCIInvalidatableElement, ISCIThemeable, ISCISuspendable, ISCIReceiveGestureEvents, ISCIAdornerProvider, ISCIServiceProvider, ISCIAxesChangeListener>

/**
 * Defines the ID of the `X-Axis` which this `Annotation` is measured against.
 * @see `ISCIAxisCore.axisId`.
 */
@property (copy, nonatomic) NSString *xAxisId;

/**
 * Defines the ID of the `Y-Axis` which this `Annotation` is measured against.
 * @see `ISCIAxisCore.axisId`.
 */
@property (copy, nonatomic) NSString *yAxisId;

/**
 * Gets the `X-Axis` instance associated with this annotation.
 */
@property (weak, nonatomic, readonly, nullable) id<ISCIAxis> xAxis;

/**
 * Gets the `Y-Axis` instance associated with this annotation.
 */
@property (weak, nonatomic, readonly, nullable) id<ISCIAxis> yAxis;

#pragma mark - Coordinates

/**
 * Defines the `X1 Coordinate` of the Annotation.
 * @note For `SCIAnnotationCoordinateMode.SCIAnnotationCoordinateMode_Absolute`, this must be a `data-value` on the X-Axis such as a double for `SCINumericAxis`.
 * @note For `SCIAnnotationCoordinateMode.SCIAnnotationCoordinateMode_Relative`, this must be a double value `between 0.0 and 1.0`, where 0.0 is the far left of the X-Axis and 1.0 is the far right.
 */
@property (strong, nonatomic) id<ISCIComparable> x1 NS_REFINED_FOR_SWIFT;

/**
 * Defines the `Y1 Coordinate` of the Annotation.
 * @note For `SCIAnnotationCoordinateMode.SCIAnnotationCoordinateMode_Absolute`, this must be a `data-value` on the Y-Axis such as a double for `SCINumericAxis`.
 * @note For `SCIAnnotationCoordinateMode.SCIAnnotationCoordinateMode_Relative`, this must be a double value `between 0.0 and 1.0`, where 0.0 is the far top of the X-Axis and 1.0 is the far bottom.
 */
@property (strong, nonatomic) id<ISCIComparable> y1 NS_REFINED_FOR_SWIFT;

/**
 * Defines the `X2 Coordinate` of the Annotation.
 * @note For `SCIAnnotationCoordinateMode.SCIAnnotationCoordinateMode_Absolute`, this must be a `data-value` on the X-Axis such as a double for `SCINumericAxis`.
 * @note For `SCIAnnotationCoordinateMode.SCIAnnotationCoordinateMode_Relative`, this must be a double value `between 0.0 and 1.0`, where 0.0 is the far left of the X-Axis and 1.0 is the far right.
 */
@property (strong, nonatomic) id<ISCIComparable> x2 NS_REFINED_FOR_SWIFT;

/**
 * Defines the `Y2 Coordinate` of the Annotation.
 * @note For `SCIAnnotationCoordinateMode.SCIAnnotationCoordinateMode_Absolute`, this must be a `data-value` on the Y-Axis such as a double for `SCINumericAxis`.
 * @note For `SCIAnnotationCoordinateMode.SCIAnnotationCoordinateMode_Relative`, this must be a double value `between 0.0 and 1.0`, where 0.0 is the far top of the X-Axis and 1.0 is the far bottom.
 */
@property (strong, nonatomic) id<ISCIComparable> y2 NS_REFINED_FOR_SWIFT;

#pragma mark - Properties

/**
 * Get whether this `ISCIAnnotation` instance is enabled for interaction.
 */
@property (nonatomic, readonly) BOOL isEnabled;

/**
 * Detines the value indicating whether this annotation is selected or not
 */
@property (nonatomic) BOOL isSelected;

/**
 * Defines the value indicating whether this annotation is editable or not.
 */
@property (nonatomic) BOOL isEditable;

/**
 * Defines the value indicating whether this annotation is hidden or not.
 */
@property (nonatomic) BOOL isHidden;

/**
 * Defines the `Surface` to place the annotation on. The default is `SCIAnnotationSurfaceEnum.SCIAnnotationSurface_AboveChart`.
 */
@property (nonatomic) SCIAnnotationSurfaceEnum annotationSurface;

/**
 * Defines the `SCIDirection2D` with the Drag direction for this annotation.
 */
@property (nonatomic) SCIDirection2D dragDirections;

/**
 * Defines the `SCIDirection2D` with the Resize direction for this annotation.
 */
@property (nonatomic) SCIDirection2D resizeDirections;

#pragma mark - Updates

/**
 * Updates the coordinate calculators and refreshes the annotation position on the parent `ISCIChartSurface`.
 * @param xAxis The `X-Axis` instance.
 * @param yAxis The `Y-Axis` instance.
 */
- (void)updateWithXAxis:(id<ISCIAxis>)xAxis yAxis:(id<ISCIAxis>)yAxis;

/**
 * Shows annotation which being hidden by `-hide` method.
 */
- (void)show;

/**
 * Hides the Annotation by removing it and its adorner markers from the parent `ISCIChartSurface`.
 */
- (void)hide;

/**
 * Checks whether coordinates are within canvas bounds.
 * @param coordinates The annotation coordinates.
 * @param bounds The parent annotation surface bounds.
 * @return YES - if annotation is in bounds.
 */
- (BOOL)isCoordinates:(SCIAnnotationCoordinates *)coordinates inBounds:(CGRect)bounds;

/**
 * This method is used in internally to set an adorner point position.
 * @param point The new x-y coordinate of base point in pixels.
 * @param index The index of base point to move.
 */
- (void)moveBasePointTo:(CGPoint)point atIndex:(SCIAnnotationPointIndex)index;

/**
 * This method is used in internally to move annotation in X and Y direction.
 * @param xDelta The horizontal offset in pixels.
 * @param yDelta The vertical offset in pixels.
 */
- (void)moveAnnotationByXDelta:(CGFloat)xDelta yDelta:(CGFloat)yDelta;

#pragma mark - Drawing

/**
 * Draws this `ISCIAnnotation` instance below chart series.
 * @param renderContext The render context instance to draw on.
 * @param assetManager The asset manager associated with render context.
 */
- (void)onDrawBelowSurfaceWithContext:(id<ISCIRenderContext2D>)renderContext assetManager:(id<ISCIAssetManager2D>)assetManager;

/**
 * Draws this `ISCIAnnotation` instance above chart series.
 * @param renderContext The render context instance to draw on.
 * @param assetManager The asset manager associated with render context.
 */
- (void)onDrawAboveSurfaceWithContext:(id<ISCIRenderContext2D>)renderContext assetManager:(id<ISCIAssetManager2D>)assetManager;

/**
 * Draws this `ISCIAnnotation` instance on one appropriate axis.
 * @param renderContext The render context instance to draw on.
 * @param assetManager The asset manager associated with render context.
 */
- (void)onDrawOnAxisWithContext:(id<ISCIRenderContext2D>)renderContext assetManager:(id<ISCIAssetManager2D>)assetManager;

#pragma mark - Selections

/**
 * Tries to select this `ISCIAnnotation` instance.
 * @return YES - if selection is successful.
 */
- (BOOL)onTrySelectAnnotation;

#pragma mark - Listeners

/**
 * Defines the `ISCIAnnotationDragListener` which is called when drag event occurs on this annotation.
 */
@property (strong, nonatomic, nullable) id<ISCIAnnotationDragListener> annotationDragListener;

/**
 * Sets the listener which is called when `isSelected` property changes.
 */
@property (strong, nonatomic, nullable) SCIAnnotationSelectionChangedListener annotationSelectionChangedListener;

/**
 * Sets the listener which is called when `isHidden` property changes.
 */
@property (strong, nonatomic, nullable) SCIAnnotationIsHiddenChangedListener annotationIsHiddenChangedListener;

/**
 * Defines the block to get notification about changes in LayoutManager.
 */
@property (strong, nonatomic, nullable) SCIAxisAlignmentChangedListener axisAlignmentChangedListener;

@end

NS_ASSUME_NONNULL_END
