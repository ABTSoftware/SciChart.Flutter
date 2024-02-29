//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// NSCollectionView+UICollectionView.h is part of SCICHART®, High Performance Scientific Charts
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
#import "SCIColor.h"

#if TARGET_OS_OSX

#import <AppKit/NSCollectionView.h>

NS_ASSUME_NONNULL_BEGIN

/// :nodoc:
@interface NSCollectionView (UICollectionView)

#pragma mark - Properties

@property (nonatomic) BOOL showsVerticalScrollIndicator;
@property (nonatomic) BOOL showsHorizontalScrollIndicator;

@property (nonatomic) NSColor *backgroundColor;
@property CGFloat borderWidth;
@property (nullable) SCIColor *borderColor;
@property (weak, nonatomic, readonly) NSView *container;

#pragma mark - Registering

- (void)registerClass:(nullable Class)cellClass forCellWithReuseIdentifier:(NSString *)identifier;

- (void)registerNib:(nullable NSNib *)nib forCellWithReuseIdentifier:(NSString *)identifier;

#pragma mark - Update dataSource

- (void)reloadItemsArrayAtIndexPaths:(NSArray<NSIndexPath *> *)indexPaths;

@end

NS_ASSUME_NONNULL_END

#endif
