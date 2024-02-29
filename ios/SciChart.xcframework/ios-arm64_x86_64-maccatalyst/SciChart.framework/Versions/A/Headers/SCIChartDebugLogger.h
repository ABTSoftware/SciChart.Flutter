//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIChartDebugLogger.h is part of SCICHART®, High Performance Scientific Charts
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

#import "ISCIChartDebugLoggerFacade.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Provides a debug logger which can be used to pipe debug messages from SciChart to your own code,
 * by setting the `ISCIChartDebugLoggerFacade` via `-[SCIChartDebugLogger setLoggerFacade:]`.
 */
@interface SCIChartDebugLogger : NSObject

/**
 * Gets the shared `SCIChartDebugLogger` instance.
 */
+ (instancetype)sharedInstance;

/**
 * Sets the `ISCIChartDebugLoggerFacade` to write to. By default this is `nil`, but after being set, the `SCIChartDebugLogger` will write all output to this instance.
 * @param loggerFacade The `ISCIChartDebugLoggerFacade` instance.
 */
- (void)setLoggerFacade:(id<ISCIChartDebugLoggerFacade>)loggerFacade;

/**
 * Writes an info line to the `ISCIChartDebugLoggerFacade`.
 * By default, the facade instance is nil. In this case - nothing happens.
 * @param tag The tag string.
 * @param stringFormat The format string.
 */
- (void)writeLine:(NSString *)tag format:(NSString *)stringFormat, ...;
    
/**
 * Writes a warning line to the `ISCIChartDebugLoggerFacade`.
 * By default, the facade instance is nil. In this case - nothing happens.
 * @param tag The tag string.
 * @param stringFormat The format string.
 */
- (void)logWarning:(NSString *)tag format:(NSString *)stringFormat, ...;

/**
 * Writes an error line to the `ISCIChartDebugLoggerFacade`.
 * By default, the facade instance is nil. In this case - nothing happens.
 * @param tag The tag string.
 * @param stringFormat The format string.
 */
- (void)logError:(NSString *)tag format:(NSString *)stringFormat, ...;

/**
 * Handles caught exception by passing it to `ISCIChartDebugLoggerFacade`.
 * By default, the facade instance is nil. In this case exception will logged into console.
 * @param exception Exception to handle.
 * @param tag The string tag.
 */
- (void)handleException:(NSException *)exception withTag:(NSString *)tag;

/**
 * Handles caught exception by passing it to `ISCIChartDebugLoggerFacade`.
 * By default, the facade instance is nil. In this case exception will logged into console.
 * @param exception Exception to handle.
 */
- (void)handleException:(NSException *)exception;

@end

NS_ASSUME_NONNULL_END
