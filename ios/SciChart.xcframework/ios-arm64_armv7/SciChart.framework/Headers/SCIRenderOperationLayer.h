//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIRenderOperationLayer.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCIDrawable.h"
#import "SCIAction2.h"

/**
 * A helper class which stores a queue of action operations to perform, intended to be used to queue rendering operations and re-arrange `Z-order`.
 */
@interface SCIRenderOperationLayer : SCIDisposableBase<ISCIDrawable>

/**
 * Enqueues an operation to the layer.
 * @param operation Operation to queue.
 */
- (void)enqueue:(nonnull SCIAction2)operation;

@end
