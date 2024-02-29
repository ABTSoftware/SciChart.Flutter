//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// CoreGraphicsExtensions.h is part of SCICHART®, High Performance Scientific Charts
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
#import <CoreGraphics/CoreGraphics.h>
#import <CoreText/CoreText.h>
#import "SCIFont.h"

/**
 * :nodoc:
 */
static inline CGSize CGSizeMakeScaled(CGSize size, CGFloat scale) {
    CGSize result = {
        .width = size.width * scale,
        .height = size.height * scale
    };
    
    return result;
}

/**
 * :nodoc:
 */
static inline CGSize MeasureAttributedString(NSAttributedString * _Nonnull string) {
    CTFramesetterRef frameSetter = CTFramesetterCreateWithAttributedString((CFAttributedStringRef)string);
    
    CGSize size = CTFramesetterSuggestFrameSizeWithConstraints(frameSetter, CFRangeMake(0, 0),  nil, CGSizeMake(CGFLOAT_MAX, CGFLOAT_MAX), nil);
    
    CFRelease(frameSetter);
    
    return CGSizeMake(ceil(size.width), ceil(size.height));
}

/**
 * :nodoc:
 */
static inline void DrawAttributedString(CGContextRef _Nonnull context, NSAttributedString * _Nonnull string, CGRect rect) {
    CGMutablePathRef path = CGPathCreateMutable();
    CGPathAddRect(path, nil, rect);
    CTFramesetterRef frameSetter = CTFramesetterCreateWithAttributedString((CFAttributedStringRef)string);
    CTFrameRef frame = CTFramesetterCreateFrame(frameSetter, CFRangeMake(0, string.length), path, nil);
    
    CTFrameDraw(frame, context);
    
    CGPathRelease(path);
    CFRelease(frameSetter);
    CFRelease(frame);
}

/**
 * :nodoc:
 */
static inline CGPoint ToPointRelativeToBounds(CGPoint point, CGRect bounds) {
    CGPoint result = {
        .x = point.x - bounds.origin.x,
        .y = point.y - bounds.origin.y
    };
    
    return result;
}

/**
 * :nodoc:
 */
static inline CGPoint FromPointRelaviveToBounds(CGPoint point, CGRect bounds) {
    CGPoint result = {
        .x = point.x + bounds.origin.x,
        .y = point.y + bounds.origin.y
    };
    
    return result;
}
