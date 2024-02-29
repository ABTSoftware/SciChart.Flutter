//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIMeshIndexCalculator.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIIndexCalculator.h"

/**
 * Helper class which helps to map 2D mesh.
 */
@interface SCIMeshIndexCalculator : SCIIndexCalculator

/**
 * Creates new instance of `SCIMeshIndexCalculator` class.
 * @param uSize The U size of mesh to use for mapping.
 * @param vSize The V size of mesh to use for mapping.
 * @param uMin The min U value used by mesh.
 * @param uMax The max U value used by mesh.
 * @param vMin The min V value used by mesh.
 * @param vMax The max V value used by mesh.
 */
- (nonnull instancetype)initWithUSize:(NSInteger)uSize andVSize:(NSInteger)vSize uMin:(double)uMin uMax:(double)uMax vMin:(double)vMin vMax:(double)vMax;

/**
 * Gets mesh value for specified U index.
 * @param index The U index to use.
 * @return The mesh value.
 */
- (double)getUAt:(NSInteger)index NS_SWIFT_NAME(getU(at:));

/**
 * Gets mesh value for specified V index.
 * @param index The V index to use.
 * @return The mesh value.
 */
- (double)getVAt:(NSInteger)index NS_SWIFT_NAME(getV(at:));

@end
