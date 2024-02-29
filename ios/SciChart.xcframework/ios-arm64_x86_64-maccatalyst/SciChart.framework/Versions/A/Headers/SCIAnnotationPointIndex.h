//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2021. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAnnotationPointIndex.h is part of SCICHART®, High Performance Scientific Charts
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

/// Defines an extensible enum for index of Annotation points
typedef NSInteger SCIAnnotationPointIndex NS_TYPED_EXTENSIBLE_ENUM;

/**
 * Defines index for resizing grip placed at (x1, y1) coordinate
 */
static SCIAnnotationPointIndex const SCIAnnotationPointIndexX1Y1Index = 0b00;

/**
 * Defines index for resizing grip placed at (x1, y2) coordinate
 */
static SCIAnnotationPointIndex const SCIAnnotationPointIndexX1Y2Index = 0b01;

/**
 * Defines index for resizing grip placed at (x2, y1) coordinate
 */
static SCIAnnotationPointIndex const SCIAnnotationPointIndexX2Y1Index = 0b10;

/**
 * Defines index for resizing grip placed at (x2, y2) coordinate
 */
static SCIAnnotationPointIndex const SCIAnnotationPointIndexX2Y2Index = 0b11;
