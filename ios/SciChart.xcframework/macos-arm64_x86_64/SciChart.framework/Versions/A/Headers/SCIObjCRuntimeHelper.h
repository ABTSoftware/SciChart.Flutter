//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIObjCRuntimeHelper.h is part of SCICHART®, High Performance Scientific Charts
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

/**
 * Defines helper class which encapsulates some `Obj-C Runtime` "swizzling" functionality.
 * @note You should always understand what’s going on.
 *
 * Read through the Objective-C Runtime Reference and browse <objc/runtime.h> to get a good sense of how and why things happen.
 * Always endeavor to replace magical thinking with understanding.
 * @warning Functionality of this helper class should be used very carefully and if possible - omitted.
 */
@interface SCIObjCRuntimeHelper : NSObject

/**
 * Switches original selector with new "swizzled" one.
 * @param originalSelector The selector that should be replaced.
 * @param swizzledSelector The new selector which will be used insted of the original one.
 * @param targetType The Class type of the object to "swizzle" selectors for.
 * @note Always invoke the original implementation of a method (unless you have a good reason not to)
 *
 * APIs provide a contract for input and output, but the implementation "in-between" - is a black box.
 * Swizzling a method and not calling the original implementation may cause underlying assumptions
 * about private state to break, along with the rest of your application.
 * @warning This functionality should be used very carefully and if possible - omitted.
 
 * Simply copy-pasting swizzling code without understanding how it works is not only dangerous,
 * but is a wasted opportunity to learn a lot about the Objective-C runtime.
 * Read through the Objective-C Runtime Reference and browse <objc/runtime.h> to get a good sense of how and why things happen.
 * Always endeavor to replace magical thinking with understanding.
 */
+ (void)swizzleSelector:(SEL)originalSelector withSelector:(SEL)swizzledSelector forClass:(Class)targetType;

@end

NS_ASSUME_NONNULL_END
