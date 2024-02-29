//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIEllipseResizingGrip.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIResizingGrip.h"

/**
 * Defines the default `ISCIResizingGrip` implementation which is used by `SCIAnnotationBase` which draws ellipse.
 */
@interface SCIEllipseResizingGrip : NSObject<ISCIResizingGrip>

/**
 * Creates a new istance of `SCIEllipseResizingGrip` class.
 * @param strokeColor The stroke color which is used to draw ellipse border.
 * @param strokeThickness The stroke thickness which is used to draw ellipse border.
 * @param backgroundColor The background color which is used to draw ellipse background.
 * @param radius The radius of resizing grip in pixels.
 */
- (nonnull instancetype)initWithStokeColor:(unsigned int)strokeColor strokeThickness:(float)strokeThickness backgroundColor:(unsigned int)backgroundColor andRadius:(float)radius;

@end
