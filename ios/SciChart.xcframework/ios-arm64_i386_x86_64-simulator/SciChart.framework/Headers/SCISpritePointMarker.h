//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCISpritePointMarker.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIPointMarkerBase.h"
#import "ISCISpritePointMarkerDrawer.h"

/**
 * Allows any custom drawing to be rendered as a Sprite (bitmap) at each data point location.
 * @note Derived classes should provide `ISCISpritePointMarkerDrawer` implementation to specify desired drawing.
 * @see `SCIPointMarkerBase`.
 * @see `SCISpritePointMarker`.
 * @see `SCIEllipsePointMarker`.
 * @see `SCITrianglePointMarker`.
 * @see `SCISquarePointMarker`.
 * @see `SCICrossPointMarker`.
 */
@interface SCISpritePointMarker : SCIPointMarkerBase

/// :nodoc:
- (nonnull instancetype)init NS_UNAVAILABLE;

/**
 * Creates new instance of `SCISpritePointMarker`.
 * @param drawer The `ISCISpritePointMarkerDrawer` instance which will performe actual drawinigs
 */
- (nonnull instancetype)initWithDrawer:(nonnull id<ISCISpritePointMarkerDrawer>)drawer NS_DESIGNATED_INITIALIZER;

@end
