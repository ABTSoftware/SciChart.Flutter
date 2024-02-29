//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIButton.h is part of SCICHART®, High Performance Scientific Charts
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

#import <TargetConditionals.h>
#import "SCIAction.h"
#import "SCIImage.h"

// -------------------- Imports ----------------------
#if TARGET_OS_OSX
    #import <AppKit/NSButton.h>
    #import "NSButton+UIButton.h"
#elif TARGET_OS_IOS
    #import <UIKit/UIButton.h>
    #import "UIButton+NSButton.h"
#endif

NS_ASSUME_NONNULL_BEGIN

/// :nodoc:
@interface SCIButton :
#if TARGET_OS_OSX
    NSButton
#elif TARGET_OS_IOS
    UIButton
#endif

- (instancetype)initWithTitle:(NSString *)title action:(SCIAction)action;
- (instancetype)initWithImage:(SCIImage *)image action:(SCIAction)action;
- (instancetype)initWithTitle:(NSString *)title target:(id)target selector:(SEL)selector;

@end

NS_ASSUME_NONNULL_END
