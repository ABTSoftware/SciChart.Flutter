//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// NSCollectionViewItem+UICollectionViewCell.h is part of SCICHART®, High Performance Scientific Charts
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

#if TARGET_OS_OSX

#import <AppKit/NSCollectionView.h>

NS_ASSUME_NONNULL_BEGIN

/// :nodoc:
@interface NSCollectionViewItem (UICollectionViewCell)

@property (readonly) NSView *cellView;
@property (nullable, readonly) NSView *superview;
@property (readonly) NSSize fittingSize;
@property (readonly, nullable) NSString *reuseIdentifier;

@end

NS_ASSUME_NONNULL_END

#endif
