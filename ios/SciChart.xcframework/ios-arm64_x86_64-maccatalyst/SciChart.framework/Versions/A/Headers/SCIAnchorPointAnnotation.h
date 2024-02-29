//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAnchorPointAnnotation.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIAnnotationBase.h"
#import "SCIVerticalAnchorPoint.h"
#import "SCIHorizontalAnchorPoint.h"

/**
 * An Anchor-Point annotation is an annotation which only has one `X1` and `Y1` point.
 * This annotation may be anchored around the coordinate using various `SCIHorizontalAnchorPoint` and `SCIVerticalAnchorPoint` values.
 */
@interface SCIAnchorPointAnnotation : SCIAnnotationBase

/**
 * Defines the `SCIHorizontalAnchorPoint` value which indicates how annotation should be placed in horizontal direction.
 */
@property (nonatomic) SCIHorizontalAnchorPoint horizontalAnchorPoint;

/**
 * Defines the `SCIVerticalAnchorPoint` value which indicates how annotation should be placed in vertical direction.
 */
@property (nonatomic) SCIVerticalAnchorPoint verticalAnchorPoint;

@end
