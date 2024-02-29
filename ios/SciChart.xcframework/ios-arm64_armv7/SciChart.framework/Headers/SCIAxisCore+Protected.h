//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisCore+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIAxisCore.h"
#import "ISCIRange.h"
#import "SCINotifiableSmartProperty.h"
#import "SCINotifiableSmartPropertyInt.h"
#import "SCINotifiableSmartPropertyBool.h"
#import "SCINotifiableSmartPropertyFloat.h"
#import "SCINotifiableSmartPropertyDouble.h"
#import "ISCIVisibleRangeAnimator.h"
#import "SCIChartDebugLogger.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIAxisCore`.
 */
@interface SCIAxisCore ()

@property (nonatomic, readonly) SCIAction redrawElementListener;
@property (nonatomic, readonly) SCIAction invalidateElementListener;

@property (strong, nonatomic) SCISmartProperty *axisTitleProperty;
@property (strong, nonatomic) SCISmartProperty *textFormattingProperty;
@property (strong, nonatomic) SCISmartProperty *cursorTextFormattingProperty;

@property (strong, nonatomic) SCISmartPropertyBool *drawMajorTicksProperty;
@property (strong, nonatomic) SCISmartPropertyBool *drawMajorGridLinesProperty;
@property (strong, nonatomic) SCISmartPropertyBool *drawMajorBandsProperty;
@property (strong, nonatomic) SCISmartPropertyBool *drawMinorTicksProperty;
@property (strong, nonatomic) SCISmartPropertyBool *drawMinorGridLinesProperty;

@property (strong, nonatomic) SCISmartPropertyBool *drawLabelsProperty;

@property (strong, nonatomic) SCISmartProperty *majorGridLineStyleProperty;
@property (strong, nonatomic) SCISmartProperty *minorGridLineStyleProperty;
@property (strong, nonatomic) SCISmartProperty *majorTickLineStyleProperty;
@property (strong, nonatomic) SCISmartProperty *minorTickLineStyleProperty;
@property (strong, nonatomic) SCISmartProperty *axisBandsStyleProperty;

@property (strong, nonatomic) SCISmartPropertyBool *flipCoordinatesProperty;

@property (strong, nonatomic) SCISmartProperty *tickLabelStyleProperty;
@property (strong, nonatomic) SCISmartProperty *titleStyleProperty;

@property (strong, nonatomic) SCISmartPropertyFloat *minorTickLineLengthProperty;
@property (strong, nonatomic) SCISmartPropertyFloat *majorTickLineLengthProperty;

@property (strong, nonatomic) SCISmartProperty *minorDeltaProperty;
@property (strong, nonatomic) SCISmartProperty *majorDeltaProperty;

@property (strong, nonatomic) SCISmartPropertyBool *autoTicksProperty;
@property (strong, nonatomic) SCISmartPropertyInt *maxAutoTicksProperty;
@property (strong, nonatomic) SCISmartPropertyInt *minorsPerMajorProperty;

@property (strong, nonatomic) SCISmartPropertyInt *autoRangeProperty;

@end

/**
 * The extensions in this header are to be used only by subclasses of `SCIAxisCore`.
 */
@interface SCIAxisCore (Protected)

/**
 * Gets or sets a `ISCIVisibleRangeAnimator` instance used to animate the VisibleRange on this axis.
 */
@property (strong, nonatomic, nonnull) id<ISCIVisibleRangeAnimator> visibleRangeAnimator;

/**
 * Gets the type of visible range which is supported by current axis.
 */
@property (strong, nonatomic, readonly) Class visibleRangeType;

/**
 * Gets the type of zoom constrain value which is supported by current axis.
 */
@property (strong, nonatomic, readonly) Class zoomConstrainType;

/**
 * Gets base value type for current axis.
 */
@property (strong, nonatomic, readonly) Class type;

/**
 * Initializes smart properties.
 */
- (void)initializeProperties;

/**
 * Tries to apply the visible range limit to the axis visible range.
 * @param range The new visible range limit.
 */
- (void)tryApplyVisibleRangeLimitTo:(id<ISCIRange>)range;

/**
 * Called when VisibleRange changes.
 * @param oldRange The old VisibleRange.
 * @param newRange The new VisibleRange.
 * @param isAnimating Flag indicating whether the VisibleRange is animating.
 */
- (void)onVisibleRangeChanged:(id<ISCIRange>)oldRange newRange:(id<ISCIRange>)newRange isAnimating:(BOOL)isAnimating;

/**
 * Sets a `ISCIVisibleRangeAnimator` instance used to animate the VisibleRange on this axis.
 * @param visibleRangeAnimator a new instance of `ISCIVisibleRangeAnimator` instance.
 */
- (void)setVisibleRangeAnimator:(id<ISCIVisibleRangeAnimator>)visibleRangeAnimator; 

/**
 * Checks if specified range satisfies zoom constrain for this axis.
 * @param range The range to check.
 * @return If true range satisfies zoom constrain for this axis.
 */
- (BOOL)isZoomConstrainSatisfied:(id<ISCIRange>)range;

/**
 * When overridden in derived classes, changes value of the VisibleRange according to axis requirements.
 * @param visibleRange Visible range to change.
 */
- (void)coerceVisibleRange:(id<ISCIRange>)visibleRange;

/**
 * Called when visibility of axis changes.
 * @param isVisible The new axis visibility.
 */
- (void)onVisibilityChanged:(BOOL)isVisible;

/**
 * Recreates coordinate calculator for current axis.
 */
- (void)recreateCalculator;

@end

NS_ASSUME_NONNULL_END
