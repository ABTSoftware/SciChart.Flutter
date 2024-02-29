//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPieHitTestInfo.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIHitTestInfo.h"
#import <CoreGraphics/CGGeometry.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a hit test info class which provides information on a series `hit-test` operation for pie series.
 */
@interface SCIPieHitTestInfo : NSObject<ISCIHitTestInfo>

/**
 * The point where hit test is performed.
 */
@property (nonatomic) CGPoint hitTestPoint;

/**
 * The value indicating whether the HitTest operation was a hit or not
 */
@property (nonatomic) BOOL isHit;

/**
 * The index of hit test point in associated `SCIPieSegmentCollection`.
 */
 @property (nonatomic) NSInteger segmentIndex;

/**
 * Sets the hit test info values.
 * @param point The coordinate of hit test point.
 * @param segmentIndex The index of hit test point in associated  `SCIPieSegmentCollection`
 */
- (void)setPoint:(CGPoint)point segmentIndex:(NSInteger)segmentIndex;

@end

NS_ASSUME_NONNULL_END
