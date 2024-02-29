//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCILineAnnotationWithLabelsBase+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCILineAnnotationWithLabelsBase.h"
#import "SCILineAnnotationBase+Protected.h"
#import "SCILabelPlacement.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCILineAnnotationWithLabelsBase`.
 */
@interface SCILineAnnotationWithLabelsBase ()

@property (strong, nonatomic) SCISmartProperty *formattedLabelValueProviderProperty;
@property (strong, nonatomic) SCISmartProperty *labelValueProperty;

@end

@interface SCILineAnnotationWithLabelsBase ()

/**
 * Gets axis, which current annotation shows data value for.
 */
@property (weak, nonatomic, readonly, nullable) id<ISCIAxis> usedAxis;

/**
 * Returns SCILabelPlacement for children annotation labels according to current alignment of this annotation.
 * @return SCILabelPlacement for children annotation labels according to current alignment of this annotation.
 */
- (SCILabelPlacement)resolveLabelPlacementWith:(SCILabelPlacement)labelPlacement;

/**
 * Returns SCILabelPlacement for children annotation labels according to current alignment of this annotation.
 * @return SCILabelPlacement for children annotation labels according to current alignment of this annotation.
 */
- (SCILabelPlacement)resolveAutoPlacement;

/**
 * Creates a `ISCIAnnotationAdornerAction` for specified annotation label.
 * @param label The `SCIAnnotationLabel` to create `ISCIAnnotationAdornerAction` for.
 * @return The `ISCIAnnotationAdornerAction` to use for specified annotation label.
 */
- (id<ISCIAnnotationAdornerAction>)createAdornerActionForAnnotationLabel:(SCIAnnotationLabel *)label;

/**
 * Tries to update passed in child AnnotationLabel with latest values provided by this annotation.
 */
- (void)tryUpdateTextOfLabel:(SCIAnnotationLabel *)annotationLabel;

/**
 * Tries to update passed in child AnnotationLabel with latest style provided by this annotation.
 */
- (void)tryApplyStyleToLabel:(SCIAnnotationLabel *)annotationLabel;

@end

NS_ASSUME_NONNULL_END
