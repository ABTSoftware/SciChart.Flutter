//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCILineAnnotationWithLabelsBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCILineAnnotation.h"
#import "ISCIPropertyHolder.h"
#import "SCIAnnotationLabelCollection.h"
#import "ISCIFormattedValueProvider.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Provides a base class for `SCIHorizontalLineAnnotation`, `SCIVerticalLineAnnotation`.
 */
@interface SCILineAnnotationWithLabelsBase : SCILineAnnotation<ISCIPropertyHolder>

/**
 * Contains collection of child annotation labels.
 */
@property (strong, nonatomic, readonly) SCIAnnotationLabelCollection *annotationLabels;

/**
 * Gets or sets the `ISCIFormattedValueProvider` which formats data value for this annotation.
 */
@property (strong, nonatomic) id<ISCIFormattedValueProvider> formattedLabelValueProvider;

/**
 * Defines the `NSString` with label value for this annotation.
 */
@property (copy, nonatomic, nullable) NSString *labelValue;

/**
 * Defines the attributed string with label value for this annotation.
 * @warning If set - current annotation instance will ignore the `labelValue` property.
 */
@property (copy, nonatomic, nullable) NSAttributedString *attributedLabelValue;

@end

NS_ASSUME_NONNULL_END
