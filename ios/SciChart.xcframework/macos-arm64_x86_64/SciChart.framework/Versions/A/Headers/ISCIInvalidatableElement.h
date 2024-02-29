//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIInvalidatableElement.h is part of SCICHART®, High Performance Scientific Charts
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
 * Classes which implement `ISCIInvalidatableElement` can be invalidated (redrawn).
 */
@protocol ISCIInvalidatableElement <NSObject>

/**
 * Asynchronously requests that the element redraws itself plus children.
 * Will be ignored if the element is `ISCISuspendable` and currently is suspended.
 */
- (void)invalidateElement;

@end
