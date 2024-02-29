//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIBitmap+UIImage.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIImage.h"
#import "SCIBitmap.h"
#import "ISCITexture2D.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Extension which provides shortcut to create `SCIBitmap` from `UIImage`.
 */
@interface SCIBitmap (SCIImage)

/**
 * Creates and returns a bitmap object that uses the specified image data.
 */
+ (SCIBitmap *)bitmapWithImage:(SCIImage *)image;

@end

/**
 * Extension which provides shortcut to create `SCIBitmap` from `UIImage`.
 */
@interface SCIImage (SCIBitmap)

/**
 * Creates and returns a bitmap object that uses the underlying image data.
 */
- (SCIBitmap *)sciBitmap;

@end

/**
 * Extension which provides a way to to create `ISCITexture2D` from `SCIBitmap`.
 */
@interface SCIBitmap (ISCITexture2D)

/**
 * Creates a texture from this `SCIBitmap` instance.
 * @return New `ISCITexture2D` instance.
 */
- (id<ISCITexture2D>)createTexture;

@end

NS_ASSUME_NONNULL_END
