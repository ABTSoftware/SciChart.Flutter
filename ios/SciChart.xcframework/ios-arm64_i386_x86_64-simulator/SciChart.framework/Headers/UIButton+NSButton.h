//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// UIButton+NSButton.h is part of SCICHART®, High Performance Scientific Charts
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

#if TARGET_OS_IOS

#import <UIKit/UIButton.h>

/// :nodoc:
@interface UIButton (SCIButton)

+ (instancetype)buttonWithTitle:(NSString *)title target:(id)target action:(SEL)action;

- (void)addTarget:(id)target action:(SEL)action;

- (void)setTitleCommon:(NSString *)title;

- (void)setTitleColor:(UIColor *)color;

- (void)setImageForNormalState:(UIImage *)image;

@end

#endif
