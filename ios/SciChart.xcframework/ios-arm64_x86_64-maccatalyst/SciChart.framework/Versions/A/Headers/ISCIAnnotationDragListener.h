//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIAnnotationDragListener.h is part of SCICHART®, High Performance Scientific Charts
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

#import <Foundation/Foundation.h>

@protocol ISCIAnnotation;

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the listener interface for drag events in the `ISCIAnnotation` instance.
 */
@protocol ISCIAnnotationDragListener

/**
 * Called when a Drag or move operation starts.
 * @param annotation The target annotation.
 */
- (void)onDragStarted:(id<ISCIAnnotation>)annotation;

/**
 * Called when annotation is dragged or moved.
 * @param annotation The target annotation.
 * @param xDelta The horizontal offset in pixels since last drag event.
 * @param yDelta The horizontal offset in pixels since last drag event.
 */
- (void)onDragAnnotation:(id<ISCIAnnotation>)annotation byXDelta:(CGFloat)xDelta yDelta:(CGFloat)yDelta;

/**
 * Called when a Drag or Move operation ends.
 * @param annotation The target annotation.
 */
- (void)onDragEnded:(id<ISCIAnnotation>)annotation;

@end

NS_ASSUME_NONNULL_END
