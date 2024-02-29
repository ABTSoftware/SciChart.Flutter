//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCITextAnnotationBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIAnchorPointAnnotation.h"
#import "SCIEdgeInsets.h"

/**
 * Defines a abstarct base class for annotation which contains text.
 */
@interface SCITextAnnotationBase : SCIAnchorPointAnnotation

/**
 * Defines the string text.
 */
@property (copy, nonatomic, nullable) NSString *text;

/**
 * Defines the attributed text.
 * @warning If set - current annotation instance will ignore the `text` property.
 */
@property (copy, nonatomic, nullable) NSAttributedString *attributedText;

/**
 * Defines the font style for text.
 */
@property (strong, nonatomic, nonnull) SCIFontStyle *fontStyle;

/**
 * Defines the text alignment.
 */
@property (nonatomic) SCIAlignment alignment;

/**
 * The default spacing used when laying out internal text.
 * @note Sizes are in `Points`.
 */
@property (nonatomic) SCIEdgeInsets padding;

/**
 * Defines the value indicating whether text can be edited on this container.
 */
@property (nonatomic) BOOL canEditText;

/**
 * Gets or sets the rotation angle for this text in degrees.
 */
@property (nonatomic) float rotationAngle;

@end
