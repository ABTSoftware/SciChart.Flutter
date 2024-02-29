//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCICameraController.h is part of SCICHART®, High Performance Scientific Charts
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
#import "ISCIInvalidatableElement.h"
#import "ISCISuspendable.h"
#import "ISCIAttachable.h"
#import "ISCIServiceProvider.h"
#import "SCICameraProjectionMode.h"
#import "ISCICameraUpdateListener.h"
#import "ISCIUpdatable3D.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface to a Camera in the `SCIChartSurface3D` scene.
 */
@protocol ISCICameraController <ISCIInvalidatableElement, ISCISuspendable, ISCIAttachable, ISCIServiceProvider, ISCIUpdatable3D>

/**
 * Defines the Position of the Camera as an XYZ vector in World Coordinates.
 */
@property (strong, nonatomic) SCIVector3 *position;

/**
 * Defines the Target of the Camera as an XYZ vector in World Coordinates.
 */
@property (strong, nonatomic) SCIVector3 *target;

/**
 * Gets the Normalized Up Vector of the Camera as an XYZ vector in World Coordinates.
 * @note This property is `Computed`.
 */
@property (nonatomic, readonly) SCIVector3 *up;

/**
 * Gets the Normalized Forward (direction) Vector of the Camera as an XYZ vector in World Coordinates.
 * @note This property is `Computed`.
 */
@property (nonatomic, readonly) SCIVector3 *forward;

/**
 * Gets the Normalized Side Vector of the Camera as an XYZ vector in World Coordinates.
 * @note This property is `Computed`.
 */
@property (nonatomic, readonly) SCIVector3 *side;

/**
 * Defines the Field of View Angle of the Camera in `Degrees`.
 */
@property (nonatomic) float fieldOfView;

/**
 * Defines the Near Clipping distance of the camera.
 * @warning Objects closer than this distance will be invisible to the camera.
 */
@property (nonatomic) float nearClip;

/**
 * Defines the Far Clipping distance of the camera.
 * @note Objects farther than this distance will be invisible to the camera.
 */
@property (nonatomic) float farClip;

/**
 * Defines the Yaw angle of the camera position relative to the target in `DEGREES`.
 * @note This property may be manipulated to change the camera position.
 */
@property (nonatomic) float orbitalYaw;

/**
 * Defines the Pitch angle of the camera position relative to the target in `DEGREES`.
 * @note This property may be manipulated to change the camera position.
 */
@property (nonatomic) float orbitalPitch;

/**
 * Defines the Radius distance of the camera to target in World Units.
 * @note This property may be manipulated to change the camera position.
 */
@property (nonatomic) float radius;

/**
 * Defines the Aspect Ratio of the viewport, e.g. 1.333f suggests width is 1.333 * height
 */
@property (nonatomic) float aspectRatio;

/**
 * Defines the Camera projection mode.
 *
 * Possible Values;
 * - `SCICameraProjectionMode.SCICameraProjectionMode_Perspective`.
 * - `SCICameraProjectionMode.SCICameraProjectionMode_Orthogonal`.
 */
@property (nonatomic) SCICameraProjectionMode projectionMode;

/**
 * Defines the Camera Orthogonal Viewport width, used when ProjectionMode is Orthogonal.
 */
@property (nonatomic) float orthoWidth;

/**
 * Defines the Camera Orthogonal Viewport height, used when ProjectionMode is Orthogonal.
 */
@property (nonatomic) float orthoHeight;

/**
 * Defines whether or not the Camera should be zoomed to fit the parent scene bounds when it's attached.
 */
@property (nonatomic) BOOL zoomToFitOnAttach;

/**
 * Defines the scale factor which is applied during calculation when Camera should be zoomed to fit the parent scene bounds.
 */
@property (nonatomic) float zoomToFitScaleFactor;

/**
 * Sets the Position and the Target of the Camera as XYZ `SCIVector3` in World Coordinates.
 * @param position The new position.
 * @param target The new target.
 */
- (void)setPostion:(SCIVector3 *)position andTarget:(SCIVector3 *)target;

/**
 * Switches the camera to Perspective mode.
 */
- (void)toPerspective;

/**
 * Switches the camera to Orthogonal mode.
 */
- (void)toOrhtogonal;

/**
 * Calculates a Camera target and radius that will fit the bounding box completely inside the viewport.
 * @param targetToFit The camera target to fit the bounding box completely inside the viewport.
 * @return The radius to fit the bounding box completely inside the viewport.
 */
- (float)calculateRadiusAndTargetToFit:(SCIVector3 *)targetToFit;

#pragma mark - Zoom Operations

/**
 * Zooms camera to fit bounding box of parent surface inside the viewport using current camera position as reset position.
 */
- (void)zoomToFit;

/**
 * Zooms camera to fit bounding box of parent surface inside the viewport using current camera position as reset position.
 * @param duration The duration of animation when zooming to fit bounding box.
 */
- (void)animateZoomToFitWithDuration:(NSTimeInterval)duration;

/**
 * Zooms camera to fit bounding box of parent surface inside the viewport using specified reset position.
 * @param resetPosition The reset position to use.
 */
- (void)zoomToFitWithResetPosition:(SCIVector3 *)resetPosition;

/**
 * Zooms camera to fit bounding box of parent surface inside the viewport using current camera position as reset position.
 * @param resetPosition The reset position to use.
 * @param duration The duration of animation when zooming to fit bounding box.
 */
- (void)animateZoomToFitWithResetPosition:(SCIVector3 *)resetPosition andDuration:(NSTimeInterval)duration;

/**
 * Animates camera to specified `position` and `target` position with specified duration.
 * @param position The final position of camera.
 * @param target  The final target of camera.
 * @param duration The animation duration.
 */
- (void)animatePosition:(SCIVector3 *)position andTarget:(SCIVector3 *)target withDuration:(NSTimeInterval)duration;

#pragma mark - Update Listener

/**
 * Sets the `ISCICameraUpdateListener` which is called when this `ISCICameraController` is updated.
 * @param cameraUpdateListener The listener to set.
 */
- (void)setCameraUpdateListener:(nullable id<ISCICameraUpdateListener>)cameraUpdateListener;

@end

NS_ASSUME_NONNULL_END
