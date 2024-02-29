//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIDataSeries3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIDataSeries.h"
#import "ISCIDataSeries3D.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines a base class for 3D Data Series used by various `ISCIRenderableSeries3D`.
 */
@interface SCIDataSeries3D : SCIDataSeriesCore<ISCIDataSeries3D> {
@protected
    /// Defines the type of the X-Data.
	SCIDataType _xType;
    /// Defines the type of the Y-Data.
	SCIDataType _yType;
    /// Defines the type of the X-Data.
	SCIDataType _zType;
	
    /// Provides the `ISCIMath` instance for operations with X-Data.
	id<ISCIMath> _xMath;
    /// Provides the `ISCIMath` instance for operations with Y-Data.
	id<ISCIMath> _yMath;
    /// Provides the `ISCIMath` instance for operations with Z-Data.
	id<ISCIMath> _zMath;
}

/// :nodoc:
- (instancetype)init NS_UNAVAILABLE;

/**
 * Creates a new `SCIDataSeries3D` instance.
 * @param xType The type of `X-Data`.
 * @param yType The type of `Y-Data`.
 * @param zType The type of `Z-Data`.
 */
- (instancetype)initWithXType:(SCIDataType)xType yType:(SCIDataType)yType zType:(SCIDataType)zType NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
