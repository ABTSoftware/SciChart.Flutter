//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// NSObject+ExceptionUtil.h is part of SCICHART®, High Performance Scientific Charts
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

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSExceptionName const SCIInitializerNotAllowedException;
FOUNDATION_EXPORT NSExceptionName const SCINotImplementedMethodException;
FOUNDATION_EXPORT NSExceptionName const SCIUnsupportedOperationException;
FOUNDATION_EXPORT NSExceptionName const SCIUnsortedDataException;
FOUNDATION_EXPORT NSExceptionName const SCILicenseException;
FOUNDATION_EXPORT NSExceptionName const SCIThemeParsingException;

/**
 * :nodoc:
 */
@interface NSObject (ExceptionUtil)

- (NSException *)notImplementedExceptionFor:(SEL)selector;

- (NSException *)unsupportedOperationExceptionFor:(SEL)selector;

@end

/**
 * :nodoc:
 */
@interface NSException (Extensions)

+ (NSException *)unsortedDataException;

+ (NSException *)unsupportedOperationExceptionWithReason:(NSString *)reason;

+ (NSException *)themeParsingExceptionWithReason:(NSString *)reason, ... NS_FORMAT_FUNCTION(1,2);

@end

NS_ASSUME_NONNULL_END
