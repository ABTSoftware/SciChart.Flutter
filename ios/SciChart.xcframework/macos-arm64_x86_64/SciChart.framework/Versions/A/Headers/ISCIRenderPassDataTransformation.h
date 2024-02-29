//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIRenderPassDataTransformation.h is part of SCICHART®, High Performance Scientific Charts
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

/**
 * Defines the protocol for render pass data transformations.
 * @note This protocol and classes that conforms to it are used for animations purposes.
 * You can use it to just transform render pass data, it's not recommended though.
 * @see `SCIBaseRenderPassDataTransformation`.
 * @see `SCIScaleTransformationBase`.
 * @see `SCISweepXyTransformation`.
 * @see `SCITranslateXTransformation`.
 * @see `SCITranslateXyTransformationBase`.
 * @see `SCIWaveTransformationBase`.
 */
@protocol ISCIRenderPassDataTransformation <ISCIAttachable>

/**
 * Set's current value, according to which, associated render pass data will be transformed.
 * Note: This is used for animations purposes.
 * @param currentProgress The new value.
 */
- (void)setCurrentProgress:(float)currentProgress;

/**
 * Notifies the start of the associated animation.
 * @param initialValue The initial value of the associated animation.
 */
- (void)onAnimationStartWithInitialValue:(float)initialValue;

/**
 * Notifies the end of the associated animation.
 */
- (void)onAnimationEnd;

/**
 * Performs transformation of the associated render pass data.
 * This called during render pass if this transformations is attached to associated `ISCIRenderableSeries`.
 */
- (void)transform;

/**
 * Called after success update of the current `ISCISeriesRenderPassData`.
 */
- (void)onRenderPassDataChanged;

@end
