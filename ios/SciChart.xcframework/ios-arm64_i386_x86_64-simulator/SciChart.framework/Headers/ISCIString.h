//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIString.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIFontStyle.h"
#import "SCILabel.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Definies the common protocol for `NSString` and `NSAttributedString` to be used throughout SciChart.
 */
@protocol ISCIString

/**
 * Gets the character contents of this `ISCIString`
 */
@property (nonatomic, readonly) NSString *rawString;

/**
 * Returns attributed string, and applies fontStyle to it if needed.
 * @param fontStyle The fontStyle instance.
 * @return AttributedString with applied fontStyle if needed.
 */
- (NSAttributedString *)attributedStringWithStyle:(SCIFontStyle *)fontStyle;

/**
 * Update a `UILabel` text
 * @param label The UILabel to update.
 */
- (void)updateUILabelText:(SCILabel *)label;

/**
 * Needed to be able to cast implementors to `ISCIString` on `Xamarin.iOS` side, since it's impossible there.
 */
- (id<ISCIString>)toSciString;

@end

NS_ASSUME_NONNULL_END
