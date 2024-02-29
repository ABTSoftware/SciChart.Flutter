//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAnnotationLabel.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCITextLabelContainer.h"
#import "ISCIDrawable.h"
#import "SCILabelPlacement.h"

/**
 * Defines an AnnotationLabel which may be used in `SCIHorizontalLineAnnotation` and `SCIVerticalLineAnnotation` instances.
 */
@interface SCIAnnotationLabel : SCITextLabelContainer<ISCIDrawable>

/**
 * Pen with which outline of box annotation is drawn on `chart surface`.
 */
@property (strong, nonatomic, nonnull) SCIPenStyle *borderPen;

/**
 * Brush with which box annotation is drawn on `chart surface`.
 */
@property (strong, nonatomic, nonnull) SCIBrushStyle *backgroundBrush;

/**
 * Defines the `SCILabelPlacement` for this AnnotationLabel instance.
 */
@property (nonatomic) SCILabelPlacement labelPlacement;

@end
