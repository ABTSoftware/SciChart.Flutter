//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIPointMetadata3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a class which hold metadata for single point.
 */
@interface SCIPointMetadata3D : NSObject

/**
 * Gets the vertex color to use for rendering of point.
 */
@property (nonatomic, readonly) unsigned int vertexColor;

/**
 * Gets the scale to use for rendering of point.
 */
@property (nonatomic, readonly) unsigned int scale;

/**
 * Creates a new instance of `SCIPointMetadata3D` class.
 * @param color The vertex color to use for rendering of point.
 */
- (instancetype)initWithVertexColor:(unsigned int)color;

/**
 * Creates a new instance of `SCIPointMetadata3D` class.
 * @param color The vertex color to use for rendering of point.
 * @param scale The scale to use for rendering of point.
 */
- (instancetype)initWithVertexColor:(unsigned int)color andScale:(float)scale;

@end

NS_ASSUME_NONNULL_END
