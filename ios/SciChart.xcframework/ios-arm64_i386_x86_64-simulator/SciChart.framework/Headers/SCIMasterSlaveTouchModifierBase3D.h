//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIMasterSlaveTouchModifierBase3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIGestureModifierBase3D.h"

/**
 * Provides a base class for Linked 3D Chart Modifiers.
 * @note Classes that inherit this allow touch events and interaction to occur across Chart Panes
 */
@interface SCIMasterSlaveTouchModifierBase3D : SCIGestureModifierBase3D

/**
 * Defines the count of finigers to use with this modifier (e.g. 1, 2 or more fingers).
 */
@property (nonatomic) NSUInteger executeOnPointerCount;

@end
