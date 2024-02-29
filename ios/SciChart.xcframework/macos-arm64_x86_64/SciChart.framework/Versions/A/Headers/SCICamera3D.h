//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCICamera3D.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIVector3.h"
#import "ISCICameraController.h"

/**
 * Defines the implementation of `ISCICameraController`. Cameras may be attached to the `ISCIChart3DSurface.camera` property.
 * @note You can set Position, Target as Vectors in world coordinates, Field of View, Aspect ratio etc...
 * @note A camera can be switched from prespective to orthogonal, or rotated around it's target.
 */
@interface SCICamera3D : NSObject<ISCICameraController>

@end
