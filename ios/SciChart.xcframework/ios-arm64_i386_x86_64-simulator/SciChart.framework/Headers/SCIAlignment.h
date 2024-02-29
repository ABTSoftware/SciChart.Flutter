//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAlignment.h is part of SCICHART®, High Performance Scientific Charts
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

/**
 * Constant indicating that no alignment has been set.
 */
static const int NoAlignment = 0x0000;

/**
 * Raw bit indicating that alignment for an axis has been specified.
 */
static const int AxisSpecified = 0x0001;

/**
 * Raw bit controlling how the `left/top` edge is placed.
 */
static const int AxisStart = 0x0002;

/**
 * Raw bit controlling how the right/bottom edge is placed.
 */
static const int AxisEnd = 0x0004;

/**
 * Bits defining the horizontal axis.
 */
static const int XAxisShift = 0;

/**
 * Bits defining the vertical axis.
 */
static const int YAxisShift = 4;

/**
 * Binary mask to get the absolute horizontal alignment of a `SCIAlignment`.
 */
static const int SCIHorizontalAlignmentMask = (AxisSpecified | AxisStart | AxisEnd) << XAxisShift;

/**
 * Binary mask to get the vertical alignment of a `SCIAlignment`.
 */
static const int SCIVerticalAlignmentMask = (AxisSpecified | AxisStart | AxisEnd) << YAxisShift;

/**
 * Constants used for placing an object within a potentially larger container.
 * @note Approach is based on Android's Gravity constants.
 */
typedef NS_OPTIONS(NSUInteger, SCIAlignment) {
    /**
     * Place the object to the left of it's container, not changing its size.
     */
    SCIAlignment_Left = (AxisStart | AxisSpecified) << XAxisShift,
    
    /**
     * Place the object to the right of it's container, not changing its size.
     */
    SCIAlignment_Right = (AxisEnd | AxisSpecified) << XAxisShift,
    
    /**
     * Place the object to the top of it's container, not changing its size.
     */
    SCIAlignment_Top = (AxisStart | AxisSpecified) << YAxisShift,

    /**
     * Place the object to the bottom of it's container, not changing its size.
     */
    SCIAlignment_Bottom = (AxisEnd | AxisSpecified) << YAxisShift,
    
    /**
     * Place the object in the horizontal center of it's container, not changing its size.
     */
    SCIAlignment_CenterHorizontal = AxisSpecified << XAxisShift,
    
    /**
     * Grow the horizontal size of the object if needed so it completely fills it's container.
     */
    SCIAlignment_FillHorizontal = SCIAlignment_Left | SCIAlignment_Right,
    
    /**
     * Place the object in the vertical center of it's container, not changing its size.
     */
    SCIAlignment_CenterVertical = AxisSpecified << YAxisShift,
    
    /**
     * Grow the vertical size of the object if needed so it completely fills it's container.
     */
    SCIAlignment_FillVertical = SCIAlignment_Top | SCIAlignment_Bottom,
    
    /**
     * Place the object in the center of its container in both the vertical and horizontal axis, not changing its size.
     */
    SCIAlignment_Center = SCIAlignment_CenterVertical | SCIAlignment_CenterHorizontal,
    
    /**
     * Grow the horizontal and vertical size of the object if needed so it completely fills it's container.
     */
    SCIAlignment_Fill = SCIAlignment_FillVertical | SCIAlignment_FillHorizontal
};

/**
 * Apply a SCIAlighnment constant to an object.
 * @warning This function is desined for initernal use only.
 * @param alignment The desired placement of the object, as defined by the SCIAlignment constants.
 * @param w The horizontal size of the object.
 * @param h The vertical size of the object.
 * @param container The frame of the containing space, in which the object will be placed. Should be large enough to contain the width and height of the object.
 * @param xAdj Offset to apply to the X axis.
 * @param yAdj Offset to apply to the Y axis.
 * @return The computed frame of the object in its container.
 */
static inline CGRect SCIApplyAlignmentInternal(SCIAlignment alignment, CGFloat w, CGFloat h, CGFloat xAdj, CGFloat yAdj, CGRect container) {
    float x, y, width, height;
    
    switch (alignment & ((AxisStart | AxisEnd) << XAxisShift)) {
        case 0:
            x = container.origin.x + ((container.size.width - w) / 2) + xAdj;
            width = w;
            break;
        case AxisStart << XAxisShift:
            x = container.origin.x + xAdj;
            width = w;
            break;
        case AxisEnd << XAxisShift:
            x = container.origin.x + container.size.width - w - xAdj;
            width = w;
            break;
        default:
            x = container.origin.x + xAdj;
            width = container.size.width + xAdj;
            break;
    }
    
    switch (alignment & ((AxisStart | AxisEnd) << YAxisShift)) {
        case 0:
            y = container.origin.y + ((container.size.height - h) / 2) + yAdj;
            height = h;
            break;
        case AxisStart << YAxisShift:
            y = container.origin.y + yAdj;
            height = h;
            break;
        case AxisEnd << YAxisShift:
            y = container.origin.y + container.size.height - h - yAdj;
            height = h;
            break;
        default:
            y = container.origin.y + yAdj;
            height = container.size.height + yAdj;
            break;
    }
    
    return CGRectMake(x, y, width, height);
}

/**
 * Apply a SCIAlighnment constant to an object.
 * @warning This function is desined for initernal use only.
 * @param alignment The desired placement of the object, as defined by the SCIAlignment constants.
 * @param w The horizontal size of the object.
 * @param h The vertical size of the object.
 * @param container The frame of the containing space, in which the object will be placed. Should be large enough to contain the width and height of the object.
 * @return The computed frame of the object in its container.
 */
static inline CGRect SCIApplyAlignmentWH(SCIAlignment alignment, CGFloat w, CGFloat h, CGRect container) {
    return SCIApplyAlignmentInternal(alignment, w, h, 0, 0, container);
}

/**
 * Apply a `SCIAlighnment` constant to an object.
 * @warning This function is desined for initernal use only.
 * @param alignment The desired placement of the object, as defined by the `SCIAlignment` constants.
 * @param size The size of the object.
 * @param container The frame of the containing space, in which the object will be placed. Should be large enough to contain the width and height of the object.
 * @return The computed frame of the object in its container.
 */
static inline CGRect SCIApplyAlignment(SCIAlignment alignment, CGSize size, CGRect container) {
    return SCIApplyAlignmentWH(alignment, size.width, size.height, container);
}

/**
 * :nodoc:
 */
static inline CGRect SCICalculateLeftFrameWithAlignment(SCIAlignment alignment, CGPoint point, CGSize size, CGRect container) {
    CGFloat x, width;

    SCIAlignment horizontalAlignment = (SCIAlignment)(alignment & SCIHorizontalAlignmentMask);
    switch (horizontalAlignment) {
        default:
        case SCIAlignment_Left:
            x = point.x;
            width = size.width;
            break;
        case SCIAlignment_CenterHorizontal:
            x = point.x - size.width / 2;
            width = size.width;
            break;
        case SCIAlignment_Right:
            x = point.x - size.width;
            width = size.width;
            break;
        case SCIAlignment_FillHorizontal:
            x = container.origin.x;
            width = container.size.width;
            break;
    }
    
    return CGRectMake(x, NAN, width, NAN);
}

/**
 * :nodoc:
 */
static inline CGRect SCICalculateTopFrameWithAlignment(SCIAlignment alignment, CGPoint point, CGSize size, CGRect container) {
    CGFloat y, height;
    
    SCIAlignment verticalAlignment = (SCIAlignment)(alignment & SCIVerticalAlignmentMask);
    switch (verticalAlignment) {
        default:
        case SCIAlignment_Top:
            y = point.y;
            height = size.height;
            break;
        case SCIAlignment_CenterVertical:
            y = point.y - size.height / 2;
            height = size.height;
            break;
        
        case SCIAlignment_Bottom:
            y = point.y - size.height;
            height = size.height;
            break;
        case SCIAlignment_FillVertical:
            y = container.origin.y;
            height = container.size.height;
            break;
    }
    
    return CGRectMake(NAN, y, NAN, height);
}

/**
 * :nodoc:
 */
static inline CGRect SCICalculateRightFrameWithAlignment(SCIAlignment alignment, CGPoint point, CGSize size, CGRect container) {
    CGFloat x, width;
    CGFloat offset;
    
    SCIAlignment horizontalAlignment = (SCIAlignment)(alignment & SCIHorizontalAlignmentMask);
    switch (horizontalAlignment) {
        default:
        case SCIAlignment_Left:
            offset = 0;
            width = size.width;
            break;
        case SCIAlignment_CenterHorizontal:
            offset = size.width / 2;
            width = size.width;
            break;
        case SCIAlignment_Right:
            offset = size.width;
            width = size.width;
            break;
        case SCIAlignment_FillHorizontal:
            offset = container.size.width;
            width = container.size.width;
            break;
    }
    x = container.size.width - point.x - offset;

    return CGRectMake(x, NAN, width, NAN);
}

/**
 * :nodoc:
 */
static inline CGRect SCICalculateBottomFrameWithAlignment(SCIAlignment alignment, CGPoint point, CGSize size, CGRect container) {
    CGFloat y, height;
    CGFloat offset;
    
    SCIAlignment verticalAlignment = (SCIAlignment)(alignment & SCIVerticalAlignmentMask);
    switch (verticalAlignment) {
        default:
        case SCIAlignment_Top:
            offset = 0;
            height = size.height;
            break;
        case SCIAlignment_CenterVertical:
            offset = size.height / 2;
            height = size.height;
            break;
        case SCIAlignment_Bottom:
            offset = size.height;
            height = size.height;
            break;
        case SCIAlignment_FillVertical:
            offset = container.size.height;
            height = container.size.height;
            break;
    }
    y = container.size.height - point.y - offset;
    
    return CGRectMake(NAN, y, NAN, height);
}

/**
 * Calculates the frame of the object in its container.
 * @warning This function is desined for initernal use only.
 * @param alignment The desired placement of the object, relative to `point`, as defined by the SCIAlignment constants.
 * @param point The point relative to which object will be placed.
 * @param size The size of the object.
 * @param container The frame of the containing space, in which the object will be placed. Should be large enough to contain the width and height of the object.
 * @return The computed frame of the object in its container.
 */
static inline CGRect SCICalculateFrameWithAlignment(SCIAlignment alignment, CGPoint point, CGSize size, CGRect container, bool isLeft, bool isTop) {
    CGRect horizontal = isLeft
        ? SCICalculateLeftFrameWithAlignment(alignment, point, size, container)
        : SCICalculateRightFrameWithAlignment(alignment, point, size, container);
    
    CGRect vertical = isTop
        ? SCICalculateTopFrameWithAlignment(alignment, point, size, container)
        : SCICalculateBottomFrameWithAlignment(alignment, point, size, container);;
    
    return CGRectMake(horizontal.origin.x, vertical.origin.y, horizontal.size.width, vertical.size.height);
}
