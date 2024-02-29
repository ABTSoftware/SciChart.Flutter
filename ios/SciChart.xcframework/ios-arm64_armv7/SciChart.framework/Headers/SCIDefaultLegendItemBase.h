//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIDefaultLegendItemBase.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCICollectionView.h"
#import "SCISelectableButton.h"
#import "SCIView.h"
#import "SCILabel.h"
#import "ISCILegendItem.h"

/// Provides a block which is used when checkBox checked/unchecked changes.
typedef void(^SCILegendCheckboxAction)(BOOL checked);

/**
 * Defines a default legend items which contains:
 * - `Label` with name.
 * - `Button` checkbox for selection of series.
 * - `View` which draws series icon.
 */
@interface SCIDefaultLegendItemBase : SCICollectionViewCell<ISCILegendItem, ISCIThemeable>

/**
 * Provides the `Checkbox Button` for selection of series.
 */
@property (strong, nonatomic) SCISelectableButton *checkBoxButton;

/**
 * Provides the `View` which draws series icon.
 */
@property (strong, nonatomic) SCIView *markerView;

/**
 * Provides the `Label` which shows item name.
 */
@property (strong, nonatomic) SCILabel *seriesNameLabel;

/// :nodoc:
@property (strong, nonatomic) NSLayoutConstraint *checkBoxWidthConstraint;
/// :nodoc:
@property (strong, nonatomic) NSLayoutConstraint *markerWidthConstraint;

/**
 * Defines the action which is used by chechbox button.
 */
@property (nonatomic) SCILegendCheckboxAction checkBoxTouchUpInsideAction;

/**
 * Defines a method which allows to update `checkBoxButton` visibility.
 * @param visibility The new `visibility` value.
 */
- (void)setCheckBoxVisibility:(BOOL)visibility;

/**
 * Defines a method which allows to update `markerView` visibility.
 * @param visibility The new `visibility` value.
 */
- (void)setSeriesMarkerVisibility:(BOOL)visibility;

@end

