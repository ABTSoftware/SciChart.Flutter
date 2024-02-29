//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIIndexCalculator.h is part of SCICHART®, High Performance Scientific Charts
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

/**
 * Helper class which helps to map 2D index to 1D array and vice versa.
 */
@interface SCIIndexCalculator : NSObject

/**
 * Gets the V/Y size whis is used for mapping.
 */
@property (nonatomic, readonly) NSInteger vSize;

/**
 * Gets the U/X size whis is used for mapping.
 */
@property (nonatomic, readonly) NSInteger uSize;

/**
 * Gets the Size of the underlying array.
 */
@property (nonatomic, readonly) NSInteger size;

/**
 * Creates new instance of `SCIIndexCalculator` class.
 * @param uSize The U/X size to use for mapping.
 * @param vSize The V/Y size to use for mapping.
 */
- (nonnull instancetype)initWithUSize:(NSInteger)uSize andVSize:(NSInteger)vSize;

/**
 * Maps 1D index to V/Y index in 2D.
 * @param index The index to map.
 * @return The V/Y index.
 */
- (NSInteger)getVIndex:(NSInteger)index NS_SWIFT_NAME(getVIndex(at:));

/**
 * Maps 1D index to U/X index in 2D.
 * @param index The index to map.
 * @return The U/X index.
 */
- (NSInteger)getUIndex:(NSInteger)index NS_SWIFT_NAME(getUIndex(at:));

/**
 * Maps 2D index to 1D index.
 * @param uIndex The U/X index to map.
 * @param vIndex The V/Y index to map.
 * @return The mapped 1D index.
 */
- (NSInteger)getIndexAtUIndex:(NSInteger)uIndex andVIndex:(NSInteger)vIndex NS_SWIFT_NAME(getIndex(atU:v:));

@end
