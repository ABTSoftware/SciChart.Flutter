//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIChartDebugLoggerFacade.h is part of SCICHART®, High Performance Scientific Charts
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
#import <CoreGraphics/CGGeometry.h>

NS_ASSUME_NONNULL_BEGIN

/// :nodoc:
static inline NSString * LogPoint(CGPoint point) {
    return [NSString stringWithFormat:@"{.x = %.2f, .y = %.2f}", point.x, point.y];
}

/// :nodoc:
static inline NSString * LogSize(CGSize size) {
    return [NSString stringWithFormat:@"{.width = %.2f, .height = %.2f}", size.width, size.height];
}

/// :nodoc:
static inline NSString * LogRect(CGRect rect) {
    return [NSString stringWithFormat:@"{.origin = %@, .size = %@}", LogPoint(rect.origin), LogSize(rect.size)];
}

/**
 * Defines the protocol to a logger facade. If you wish to receive debug log messages from SciChart, then set a logger instance via `-[SCIChartDebugLogger setLoggerFacade:]`.
 * @warning Please note, that logging will dramatically decrease performance, especially in a real-time scenario.
 */
@protocol ISCIChartDebugLoggerFacade <NSObject>

/**
 * Logs info message with the string format message with optional arguments.
 * @param tag The string tag.
 * @param stringFormat The string format.
 * @param args Thar optional args.
 */
- (void)logInfoWithTag:(NSString *)tag format:(NSString *)stringFormat args:(va_list)args;
    
/**
 * Logs warning message with the string format message with optional arguments.
 * @param tag The string tag.
 * @param stringFormat The string format.
 * @param args Thar optional args.
 */
- (void)logWarningWithTag:(NSString *)tag format:(NSString *)stringFormat args:(va_list)args;

/**
 * Logs error message with the string format message with optional arguments.
 * @param tag The string tag.
 * @param stringFormat The string format.
 * @param args Thar optional args.
 */
- (void)logErrorWithTag:(NSString *)tag format:(NSString *)stringFormat args:(va_list)args;

/**
 * Handle caught exception with specified error message.
 * @param exception The thrown exception.
 */
- (void)handleException:(NSException *)exception;

/**
 * Handle caught exception with specified error message.
 * @param tag The string tag.
 * @param exception The thrown exception.
 */
- (void)handleException:(NSException *)exception withTag:(NSString *)tag;

@end

NS_ASSUME_NONNULL_END
