//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCISelectionPassManager.h is part of SCICHART®, High Performance Scientific Charts
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

/**
 * Defines some common methods for work with selection pass.
 */
@protocol ISCISelectionPassManager <NSObject>

/**
 * Tries to enable selection pass for specified target.
 * @note If it's already enabled does nothing
 * @param target Target object
 */
- (void)tryEnableSelectionPassFor:(nonnull id)target;

/**
 * Tries to disable selection pass for specified target.
 * @note If it's already disabled does nothing
 * @param target Target object
 */
- (void)tryDisableSelectionPassFor:(nonnull id)target;

@end
