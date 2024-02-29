//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIAnnotationSelectionDrawable.h is part of SCICHART®, High Performance Scientific Charts
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
#import <CoreGraphics/CoreGraphics.h>

/**
 * Defines the interface which draws overlay for selected annotation.
 */
@protocol ISCIAnnotationSelectionDrawable <NSObject>

/**
 * Draws overlay for selected annotation.
 * @param annotationSelection The path which contents the annotation selection overlay to draw.
 * @param context The `CGContext` to draw on.
 */
- (void)onDrawAnnotationSelection:(nonnull CGPathRef)annotationSelection inCGContext:(nonnull CGContextRef)context;

@end
