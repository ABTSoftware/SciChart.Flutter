//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCICollectionView.h is part of SCICHART®, High Performance Scientific Charts
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

// -------------------- Imports ----------------------
#if TARGET_OS_OSX
    #import <AppKit/NSCollectionView.h>
    #import "AppKit/NSCollectionViewFlowLayout.h"
    #import "NSCollectionView+UICollectionView.h"
    #import "NSCollectionViewItem+UICollectionViewCell.h"
    #import "NSCollectionViewLayoutAttributes+UICollectionViewLayoutAttributes.h"
    #import "NSNib+UINib.h"
#elif TARGET_OS_IOS
    #import <UIKit/UICollectionView.h>
    #import "UIKit/UICollectionViewFlowLayout.h"
    #import "UICollectionView+NSCollectionView.h"
    #import "UICollectionViewCell+NSCollectionViewItem.h"
#endif

// -------------------- SCICollectionView ----------------------
#if TARGET_OS_OSX
    #define SCICollectionView NSCollectionView
    #define SCICollectionViewLayout NSCollectionViewLayout
    #define SCICollectionViewFlowLayout NSCollectionViewFlowLayout
    #define SCICollectionViewScrollDirectionVertical NSCollectionViewScrollDirectionVertical
    #define SCICollectionViewScrollDirectionHorizontal NSCollectionViewScrollDirectionHorizontal
    #define SCICollectionViewDelegateFlowLayout NSCollectionViewDelegateFlowLayout
    #define SCICollectionViewCell NSCollectionViewItem
    #define SCICollectionViewLayoutAttributes NSCollectionViewLayoutAttributes
    #define SCILayoutPriority NSLayoutPriority
    #define SCINib NSNib
#elif TARGET_OS_IOS
    #define SCICollectionView UICollectionView
    #define SCICollectionViewLayout UICollectionViewLayout
    #define SCICollectionViewFlowLayout UICollectionViewFlowLayout
    #define SCICollectionViewScrollDirectionVertical UICollectionViewScrollDirectionVertical
    #define SCICollectionViewScrollDirectionHorizontal UICollectionViewScrollDirectionHorizontal
    #define SCICollectionViewDelegateFlowLayout UICollectionViewDelegateFlowLayout
    #define SCICollectionViewCell UICollectionViewCell
    #define SCICollectionViewLayoutAttributes UICollectionViewLayoutAttributes
    #define SCILayoutPriority UILayoutPriority
    #define SCINib UINib
#endif
