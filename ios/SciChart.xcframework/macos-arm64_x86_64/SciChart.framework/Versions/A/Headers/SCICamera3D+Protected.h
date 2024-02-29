//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCICamera3D+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCICamera3D.h"
#import "SCINotifiableSmartPropertyFloat.h"
#import "SCINotifiableSmartPropertyInt.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCICamera3D`.
 */
@interface SCICamera3D ()

@property (nonatomic, readonly) SCIAction invalidateElementListener;

@property (nonatomic, readonly) SCISmartPropertyFloat *orthoHeightProperty;
@property (nonatomic, readonly) SCISmartPropertyFloat *orthoWidthProperty;
@property (nonatomic, readonly) SCISmartPropertyFloat *aspectRatioProperty;
@property (nonatomic, readonly) SCISmartPropertyFloat *farClipProperty;
@property (nonatomic, readonly) SCISmartPropertyFloat *nearClipProperty;
@property (nonatomic, readonly) SCISmartPropertyFloat *fieldOfViewProperty;

@property (nonatomic, readonly) SCISmartPropertyInt *projectionModeProperty;

- (void)initializeProperties;

@end

NS_ASSUME_NONNULL_END
