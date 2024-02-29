//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisDragModifierBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIGestureModifierBase.h"

/**
 * Defines enumeration constants for mode of the `SCIAxisDragModifierBase`.
 */
typedef NS_ENUM(NSUInteger, SCIAxisDragMode) {
    /**
     * Scale mode: the dragging scales the `ISCIAxisCore.visibleRange` property directly, or indirectly, via `ISCIAxisCore.growBy` property - if Axis.AutoRange mode `SCIAutoRange.SCIAutoRange_Always`.
     */
    SCIAxisDragMode_Scale,
    
    /**
     * Pan mode: the dragging pans the `ISCIAxisCore.visibleRange`, allowing a vertical or horizontal scroll.
     * @warning This may only be used when Axis.AutoRange mode is not `SCIAutoRange.SCIAutoRange_Always`.
     */
    SCIAxisDragMode_Pan
};

/**
 * Provides base class for dragging operations on axes.
 * @see `SCIXAxisDragModifier`.
 * @see `SCIYAxisDragModifier`.
 */
@interface SCIAxisDragModifierBase : SCIGestureModifierBase

/**
 * Defines `UIPanGestureRecognizer` which is used to detect pan gestures.
 */
@property (nonatomic, readonly, nullable) SCIPanGestureRecognizer *gestureRecognizer;

/**
 * Defines the `SCIAxisDragMode` of the `SCIAxisDragModifierBase`.
 * This modifier may be used to scale or pan the `ISCIAxisCore.visibleRange` creating a scrolling or panning effect.
 */
@property (nonatomic) SCIAxisDragMode dragMode;

/**
 * Defines minimal area of recognition (min height for horizontal axis or min width for vertical), where user click or touch triggers zoom behavior.
 */
@property (nonatomic) CGFloat minTouchArea;

/**
 * Creates a new instance of the `SCIAxisDragModifierBase` class.
 * @param numberOfTouches The default number of touches which will be used by underlying gestureRecognizer.
 */
- (nonnull instancetype)initWithDefaultNumberOfTouches:(NSUInteger)numberOfTouches NS_DESIGNATED_INITIALIZER;

@end
