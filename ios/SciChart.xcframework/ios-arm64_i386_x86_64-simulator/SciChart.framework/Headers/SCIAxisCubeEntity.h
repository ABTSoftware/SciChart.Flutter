//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisCubeEntity.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIBaseSceneEntity.h"
#import "SCIAxisPlaneDrawLabelsMode.h"
#import "SCIAxisPlaneVisibility.h"

@protocol ISCIAxis3D;

/**
 * Defines an entity which renders an Axis Cube in the 3D scene.
 */
@interface SCIAxisCubeEntity : SCIBaseSceneEntity

/**
 * Defines whether axis cube is visible or no.
 */
@property (nonatomic) BOOL isVisible;

/**
 * Defines the `SCIAxisPlaneVisibility` used to render axis cube.
 */
@property (nonatomic) SCIAxisPlaneVisibility axisPlaneVisibilityMode;

/**
 * Defines the `SCIAxisPlaneDrawLabelsMode` for the `XY` axis plane.
 */
@property (nonatomic) SCIAxisPlaneDrawLabelsMode xyAxisPlaneDrawLabelsMode;

/**
 * Defines the `SCIAxisPlaneDrawLabelsMode` for the `ZY` axis plane.
 */
@property (nonatomic) SCIAxisPlaneDrawLabelsMode zyAxisPlaneDrawLabelsMode;

/**
 * Defines the `SCIAxisPlaneDrawLabelsMode` for the `ZX` axis plane.
 */
@property (nonatomic) SCIAxisPlaneDrawLabelsMode zxAxisPlaneDrawLabelsMode;

/**
 * Updates entity with data provided by `xAxis`, `yAxis` and `zAxis`.
 * @param xAxis The xAxis to use for update.
 * @param yAxis The yAxis to use for update.
 * @param zAxis The zAxis to use for update.
 */
- (void)updateXAxis:(nonnull id<ISCIAxis3D>)xAxis yAxis:(nonnull id<ISCIAxis3D>)yAxis zAxis:(nonnull id<ISCIAxis3D>)zAxis;

@end
