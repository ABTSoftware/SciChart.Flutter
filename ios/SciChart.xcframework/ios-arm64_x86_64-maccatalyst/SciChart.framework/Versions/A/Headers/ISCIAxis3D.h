//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIAxis3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIAxisCore.h"
#import "ISCIAttachable.h"
#import "ISCIServiceProvider.h"
#import "ISCIPropertyHolder.h"
#import "SCITextAlignment3D.h"
#import "SCIAxisDirection.h"
#import "SCIAxisSideClipping.h"
#import "ISCIUpdatable3D.h"
#import "SCIVector3.h"

/**
 * Defines the base interface to `SCIAxisBase3D` used by SciChart 3D.
 * @see `SCIAxisBase3D`.
 * @see `SCINumericAxis3D`.
 * @see `SCILogarithmicNumericAxis3D`.
 * @see `SCIDateAxis3D`.
 */
@protocol ISCIAxis3D <ISCIPropertyHolder, ISCIAxisCore, ISCIUpdatable3D>

/**
 * Gets or sets the Direction of the Axis.
 * @note This property defines which direction (X, Y or Z) axis belongs to.
 */
@property (nonatomic) SCIAxisDirection3D axisDirection;

/**
 * Gets or sets the alignment of the tick labels on the  Axis.
 */
@property (nonatomic) SCITextAlignment3D tickLabelAlignment;

/**
 * Gets or sets the cliping of the positive side of the Axis.
 * @note This property defines how the positive side of the axis is clipped
 */
@property (nonatomic) SCIAxisSideClipping positiveSideClipping;

/**
 * Gets or sets the cliping of the negative side of the Axis.
 * @note This property defines how the negative side of the axis is clipped
 */
@property (nonatomic) SCIAxisSideClipping negativeSideClipping;

/**
 * Gets or sets the thickness of the axis plane border.
 */
@property (nonatomic) float planeBorderThickness;

/**
 * Gets or sets the color of the axis plane border.
 */
@property (nonatomic) unsigned int planeBorderColor;

/**
 * Gets or sets the offset of the axis title.
 */
@property (nonatomic) float axisTitleOffset;

/**
 * Gets or sets the offset of the axis tick labels.
 */
@property (nonatomic) float tickLabelOffset;

/**
 * Gets or sets the color for the axis tick labels.
 */
@property (nonatomic) unsigned int textColor;

/**
 * Gets or sets the size for axis tick labels.
 */
@property (nonatomic) float textSize;

/**
 * Gets or sets the font name for the axis tick labels.
 */
@property (strong, nonatomic, nonnull) NSString *textFont;

/**
 * Performs core update of axis.
 * @note e.g. updates `ISCILabelProvider`, `ISCITickProvider`, `ISCITickCoordinatesProvider` and other providers which are used by axis.
 */
- (void)updateCore;

/**
 * This method is called when parent `ISCIChartSurface3D.worldDimensions` has changed.
 * @param worldDimentions The new worldDimentions.
 */
- (void)onWorldDimentionsChanged:(nonnull SCIVector3 *)worldDimentions;

@end
