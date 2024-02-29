//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIRenderPassStateCore.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIDisposableBase.h"
#import "ISCIAxisCore.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines an abstract implementation of a class which stores some data for current render pass.
 */
@interface SCIRenderPassStateCore : SCIDisposableBase

/**
 * Gets the list of warnings messages for current render pass.
 */
@property (strong, nonatomic, readonly) NSArray<NSString *> *errors;

/**
 * Gets the list of warnings messages for current render pass.
 */
@property (strong, nonatomic, readonly) NSArray<NSString *> *warnings;

/**
 * Schedules notification of `ISCIAxisCore` about data range changed event in the end of current render pass.
 * @param axis The axis to notify.
 */
- (void)notifyDataRangeChanged:(id<ISCIAxisCore>)axis;

/**
 * Adds warning message to publish in the end of current render pass.
 * @param warningMessage The message to publish.
 */
- (void)addWarning:(NSString *)warningMessage;

/**
 * Adds error message to publish in the end of current render pass.
 * @param errorMessage The error to publish.
 */
- (void)addError:(NSString *)errorMessage;

@end

NS_ASSUME_NONNULL_END
