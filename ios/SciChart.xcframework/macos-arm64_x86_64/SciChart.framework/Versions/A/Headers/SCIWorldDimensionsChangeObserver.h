//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIWorldDimensionsChangeObserver.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIVector3.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the block for listening changes of `SCIWorldDimensions` and it's inheritors.
 * Called when observed world dimensions instance has changed.
 * @param worldDimensions The new world dimensions.
 */
typedef void (^SCIWorldDimensionsChangeObserver) (SCIVector3 *worldDimensions);

NS_ASSUME_NONNULL_END
