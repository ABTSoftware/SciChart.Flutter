//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIDrawingContextFactoryBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIDrawingContext.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Base Factory which provides static constants with default `ISCIDrawingContext` implementations.
 */
@interface SCIDrawingContextFactoryBase : NSObject

/**
 * Provides the `ISCIDrawingContext` which could be used for drawing `lines`.
 */
@property (class, strong, nonatomic, readonly) id<ISCIDrawingContext> linesDrawingContext;

/**
 * Provides the `ISCIDrawingContext` which could be used for drawing `lines strips`.
 */
@property (class, strong, nonatomic, readonly) id<ISCIDrawingContext> linesStripDrawingContext;

/**
 * Provides the `ISCIDrawingContext` which could be used for drawing `triangles strips`.
 */
@property (class, strong, nonatomic, readonly) id<ISCIDrawingContext> trianglesStripDrawingContext;

/**
 * Provides the `ISCIDrawingContext` which could be used for drawing `rectangle fills`.
 */
@property (class, strong, nonatomic, readonly) id<ISCIDrawingContext> fillRectsDrawingContext;

/**
 * Provides the `ISCIDrawingContext` which could be used for drawing `rectangle strokes (outlines)`.
 */
@property (class, strong, nonatomic, readonly) id<ISCIDrawingContext> drawRectsDrawingContext;

/**
 * Provides the `ISCIDrawingContext` which could be used for drawing `ellipces`.
 */
@property (class, strong, nonatomic, readonly) id<ISCIDrawingContext> ellipsesDrawingContext;

@end

NS_ASSUME_NONNULL_END
