//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisLabelAnnotation.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCITextAnnotationBase.h"

/**
 * The `SCIAxisLabelAnnotation` provides an axis label which is data-bound to its data X or Y value.
 */
@interface SCIAxisLabelAnnotation : SCITextAnnotationBase

/**
 * Gets axis instance where current `SCIAxisLabelAnnotation` is placed.
 */
@property (strong, nonatomic, readonly, nullable) id<ISCIAxis> axis;

@end
