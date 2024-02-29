//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIModifierBehavior.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIAttachable.h"
#import "ISCIThemeable.h"
#import "ISCIChartModifierCore.h"
#import "SCIGestureModifierEventArgs.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a base class with behavior for `ISCIChartModifierCore` implementors.
 * @note `T` is the type of modifier to which this behavior will be attached.
 * @warning Designed to be an abstract class, hence should be used for inheritance only. No direct initializations.
 */
@interface SCIModifierBehavior<__covariant T : id<ISCIChartModifierCore>> : NSObject<ISCIAttachable, ISCIThemeable>

/**
 * Gets a value indicating whether the current `SCIModifierBehavior` instance is enabled on the related `ISCIChartModifier` instance.
 */
@property (nonatomic) BOOL isEnabled;

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/**
 * Creates a new instance of `SCIModifierBehavior` class.
 * @param modifierType Type of the modifier to which this modifier will be attached.
 */
- (instancetype)initWithModifierType:(Class)modifierType NS_DESIGNATED_INITIALIZER;

/**
 * Called when associated `ISCIChartModifier` instance handle touches began event.
 * @param args The gesture modifier event argumens.
 */
- (void)onBeginUpdateWithArgs:(SCIGestureModifierEventArgs *)args;

/**
 * Called when associated `ISCIChartModifier` instance handle touches moved event.
 * @param args The gesture modifier event argumens.
 */
- (void)onUpdateWithArgs:(SCIGestureModifierEventArgs *)args;

/**
 * Called when associated `ISCIChartModifier` instance handle touches ended event.
 * @param args The gesture modifier event argumens.
 */
- (void)onEndUpdateWithArgs:(SCIGestureModifierEventArgs *)args;

/**
 * Clears `SCIModifierBehavior.lastUpdatePoint` x and y to `NaN` values.
 */
- (void)clear;

/**
 * Attaches the `SCIModifierBehavior` instance to the `ISCIChartModifierCore` instance with isEnabled value passed in.
 * @param behavior  The `SCIModifierBehavior` instance which will be attached to the passed in `ISCIChartModifierCore` instance.
 * @param modifier  The `ISCIChartModifierCore` instance to which the passed in `SCIModifierBehavior` instance will be attached.
 * @param isEnabled Value which identifies whether the `SCIModifierBehavior` instance is enabled or not.
 */
+ (void)attachBehavior:(SCIModifierBehavior<T> *)behavior toModifier:(id<ISCIChartModifierCore>)modifier withIsEnabled:(BOOL)isEnabled;

@end

NS_ASSUME_NONNULL_END
