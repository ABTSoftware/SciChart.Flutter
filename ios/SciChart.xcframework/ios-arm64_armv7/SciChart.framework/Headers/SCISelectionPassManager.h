//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISelectionPassManager.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCISelectionPassManager.h"

@protocol ISCIChartSurface3D;

NS_ASSUME_NONNULL_BEGIN

/**
 * Default implementation of `ISCISelectionPassManager`.
 */
@interface SCISelectionPassManager : NSObject<ISCISelectionPassManager>

/**
 * Creates an instance of `SCISelectionPassManager`.
 * @param parentSurface The parent surface.
 */
- (instancetype)initWithParentSurface:(id<ISCIChartSurface3D>)parentSurface;

/**
 * Gets the Selection ID using a screen coordinates.
 * @param x The `x coordinate`.
 * @param y The `y coordinate`.
 * @return The Selection ID.
 */
+ (unsigned long long)getSelectionIdForX:(float)x y:(float)y;

/**
 * Gets the `Entity Id` from selection Id passed in.
 * @param selectionId The selection Id.
 * @return The Entity ID.
 */
+ (unsigned int)getEntityIDFrom:(unsigned long long)selectionId;

/**
 * Gets the `Vertex Id` from selection Id passed in.
 * @param selectionId The selection Id.
 * @return The Vertex ID.
 */
+ (unsigned int)getVertexIDFrom:(unsigned long long)selectionId;

@end

NS_ASSUME_NONNULL_END
