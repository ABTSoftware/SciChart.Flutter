//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCILineArrowAnnotation.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCILineAnnotationBase.h"

/**
 * The `SCILineArrowAnnotation` provides a Line with `X1, Y1, X2, Y2` coordinates and an arrow head at the tip.
 */
@interface SCILineArrowAnnotation : SCILineAnnotationBase

/**
 * Defines the length of arrow head in points.
 */
@property (nonatomic) float headLength;

/**
 * Defines the width of arrow head in points.
 */
@property (nonatomic) float headWidth;

@end
