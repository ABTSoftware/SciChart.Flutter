//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAnchorPointAnnotation+Protected.h is part of SCICHART®, High Performance Scientific Charts
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
#import "SCIAnnotationBase+Protected.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIAnchorPointAnnotation`.
 */
@interface SCIAnchorPointAnnotation ()

@property (nonatomic) SCISmartPropertyInt *horizontalAnchorPointProperty;
@property (nonatomic) SCISmartPropertyInt *verticalAnchorPointProperty;

@property (nonatomic, readonly) CGSize size;
@property (nonatomic) CGRect frame;

- (CGRect)calculateAnnotationFrameWithCoordinates:(SCIAnnotationCoordinates *)coordinates horizontalAlignment:(SCIAlignment)horizontalAlignment andVerticalAlignment:(SCIAlignment)verticalAlignment;

@end

NS_ASSUME_NONNULL_END
