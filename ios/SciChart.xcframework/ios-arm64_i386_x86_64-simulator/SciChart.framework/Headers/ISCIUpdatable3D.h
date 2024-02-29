//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIUpdatable3D.h is part of SCICHART®, High Performance Scientific Charts
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

@class SCIRenderPassState3D;

/**
 * Defines the protocol with methods for updating elements during render pass.
 */
@protocol ISCIUpdatable3D <NSObject>

/**
 * Updates the state of this `ISCIUpdatable3D` before rendering.
 * @param renderPassState The `SCIRenderPassState3D` used in current render pass.
 */
- (void)update:(nonnull SCIRenderPassState3D *)renderPassState;

@end
