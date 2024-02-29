//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAxisAlignmentChangedListener.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIAxisAlignment.h"

@protocol ISCIAxis;

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the block to get notification about changes in LayoutManager.
 * Notifies about changing of axis alignment in one of axes.
 * @param axis axis which has been changed.
 * @param oldValue old axis alignment.
 * @param newValue new axis alignment.
 */
typedef BOOL (^SCIAxisAlignmentChangedListener) (id<ISCIAxis> axis, SCIAxisAlignment oldValue, SCIAxisAlignment newValue);

NS_ASSUME_NONNULL_END
