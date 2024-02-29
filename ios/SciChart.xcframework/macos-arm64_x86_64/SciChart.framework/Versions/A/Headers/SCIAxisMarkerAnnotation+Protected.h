//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisMarkerAnnotation+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIAxisMarkerAnnotation.h"
#import "SCIAnchorPointAnnotation+Protected.h"
#import "SCISmartPropertyFloat.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIAxisMarkerAnnotation`.
 */
@interface SCIAxisMarkerAnnotation ()

@property (strong, nonatomic) SCISmartProperty *formattedLabelValueProviderProperty;
@property (strong, nonatomic) SCISmartPropertyFloat *markerPointSizeProperty;

@property (strong, nonatomic) SCISmartProperty *borderPenProperty;
@property (strong, nonatomic) SCISmartProperty *backgroundBrushProperty;

/**
 * Draws this annotation marker shape.
 * @param renderContext The render context. This is a graphics object which has methods to draw lines, quads and polygons to the screen.
 * @param assetManager The asset manager. This is manager for graphic assets which has method for creation pens, brushes and textures.
 * @param frame The frame in which marker shape be drawn.
 */
- (void)internalDrawMarkerWithContext:(id<ISCIRenderContext2D>)renderContext assetManager:(id<ISCIAssetManager2D>)assetManager inFrame:(CGRect)frame;

@end

NS_ASSUME_NONNULL_END
