//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIAnnotationBase+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIAnnotationBase.h"
#import "SCIAttachableServiceContainer.h"
#import "SCIObservableSmartProperty.h"
#import "SCINotifiableSmartProperty.h"
#import "SCIObservableSmartPropertyBool.h"
#import "SCINotifiableSmartPropertyInt.h"
#import "SCINotifiableSmartPropertyFloat.h"
#import "ISCIAnnotationAdornerAction.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIAnnotationBase`.
 */
@interface SCIAnnotationBase ()

@property (nonatomic, readonly) SCIAction invalidateElementListener;

@property (strong, nonatomic) SCISmartPropertyBool *isEditableProperty;
@property (strong, nonatomic) SCISmartPropertyBool *isSelectedProperty;
@property (strong, nonatomic) SCISmartPropertyBool *isHiddenProperty;

@property (strong, nonatomic) SCISmartProperty *xAxisIdProperty;
@property (strong, nonatomic) SCISmartProperty *yAxisIdProperty;

@property (strong, nonatomic) SCISmartProperty *x1Property;
@property (strong, nonatomic) SCISmartProperty *y1Property;
@property (strong, nonatomic) SCISmartProperty *x2Property;
@property (strong, nonatomic) SCISmartProperty *y2Property;

@property (strong, nonatomic) SCISmartPropertyInt *annotationSurfaceProperty;
@property (strong, nonatomic) SCISmartPropertyInt *coordinateModeProperty;
@property (strong, nonatomic) SCISmartPropertyInt *dragDirectionsProperty;
@property (strong, nonatomic) SCISmartPropertyInt *resizeDirectionsProperty;

@property (strong, nonatomic) SCISmartProperty *resizingGripProperty;
@property (strong, nonatomic) SCISmartProperty *selectionDrawableProperty;
@property (strong, nonatomic) SCISmartPropertyInt *zIndexProperty;

@end

@interface SCIAnnotationBase ()

- (void)initializeProperties;

@property (strong, nonatomic, readonly) SCIAnnotationCoordinates *annotationCoordinates;

/**
 * Gets the annotation surface bounds for this annotation.
 */
@property (nonatomic) CGRect parentSurfaceFrame;

/**
 * Gets the Adorner Layer to place annotation adorners.
 */
@property (weak, nonatomic, nullable) id<ISCIAdornerLayer> adornerLayer;

/**
 * Gets the XAxis instance by string with Axis Id.
 * @param axisId The axis id.
 * @return The XAxis instance.
 */
- (nullable id<ISCIAxis>)getXAxisById:(NSString *)axisId;

/**
 * Gets the YAxis instance by string with Axis Id.
 * @param axisId The axis id.
 * @return The YAxis instance.
 */
- (nullable id<ISCIAxis>)getYAxisById:(NSString *)axisId;

/**
 * Called when XAxis Id changes.
 */
- (void)onXAxisIdChanged;

/**
 * Called when YAxis Id changes.
 */
- (void)onYAxisIdChanged;

/**
 * Updates the coordinate calculators and refreshes the annotation position on the parent `ISCIChartSurface`.
 * @param xCalc The current `ISCICoordinateCalculator` for XAxis.
 * @param yCalc The current `ISCICoordinateCalculator` for YAxis.
 */
- (void)updateWithXCoordinateCalculator:(nullable id<ISCICoordinateCalculator>)xCalc andYCoordinateCalculator:(nullable id<ISCICoordinateCalculator>)yCalc;

/**
 * Updates the `SCIAnnotationCoordinates` instance associated with this annotation.
 * @param annotationCoordinates The `SCIAnnotationCoordinates` to update.
 * @param frame The parent annotation surface frame.
 * @param xCalc The current `ISCICoordinateCalculator` for XAxis.
 * @param yCalc The current `ISCICoordinateCalculator` for YAxis.
 */
- (void)updateAnnotationCoordinates:(SCIAnnotationCoordinates *)annotationCoordinates insideFrame:(CGRect)frame xCoordinateCalculator:(nullable id<ISCICoordinateCalculator>)xCalc andYCoordinateCalculator:(nullable id<ISCICoordinateCalculator>)yCalc;

/**
 * Attaches associated `ISCIAdornerProvider` to the parent `ISCIAdornerLayer`.
 * @param adornerLayer The parent `ISCIAdornerLayer`.
 */
- (void)attachAdorners:(id<ISCIAdornerLayer>)adornerLayer;

/**
 * Detaches associated `ISCIAdornerProvider` from the parent `ISCIAdornerLayer`.
 * @param adornerLayer The parent `ISCIAdornerLayer`.
 */
- (void)detachAdorners:(id<ISCIAdornerLayer>)adornerLayer;

/**
 * Checks whether specified point is within annotation's bounds.
 * @param point The x-y coordinates to check.
 * @return YES - if point is within annotation's bounds.
 */
- (BOOL)isPointWithinBounds:(CGPoint)point;

/**
 * Draws the annotation using the `ISCIRenderContext2D` and the `ISCIAssetManager2D`.
 * @param renderContext The render context. This is a graphics object which has methods to draw lines, quads and polygons to the screen.
 * @param assetManager The asset manager. This is manager for graphic assets which has method for creation pens, brushes and textures.
 * @param coordinates The annotation coordinates.
 */
- (void)internalDrawWithContext:(id<ISCIRenderContext2D>)renderContext assetManager:(id<ISCIAssetManager2D>)assetManager atCoordinates:(SCIAnnotationCoordinates *)coordinates;

/**
 * Draws this annotation on apporpriate axis (depends on annotationSurface) using the `ISCIRenderContext2D` and the `ISCIAssetManager2D`.
 * @param renderContext The render context. This is a graphics object which has methods to draw lines, quads and polygons to the screen.
 * @param assetManager The asset manager. This is manager for graphic assets which has method for creation pens, brushes and textures.
 * @param coordinates The annotation coordinates.
 */
- (void)internalDrawOnAxisWithContext:(id<ISCIRenderContext2D>)renderContext assetManager:(id<ISCIAssetManager2D>)assetManager atCoordinates:(SCIAnnotationCoordinates *)coordinates;

/**
 * Draws adorner for annotation within the passed-in rectangle.
 * @param rect The portion of the view’s bounds to draw adorner in.
 * @param coordinates The annotation coordinates.
 */
- (void)internalDrawAdornerOnCGContext:(CGContextRef)context inRect:(CGRect)rect atCoordinates:(SCIAnnotationCoordinates *)coordinates;

/**
 * Draws selection overlay for this annotation.
 * @param rect The portion of the view’s bounds to draw selection overlay grips in.
 * @param coordinates The annotation coordinates..
 */
- (void)internalDrawSelectionOverlayOnCGContext:(CGContextRef)context inRect:(CGRect)rect atCoordinates:(SCIAnnotationCoordinates *)coordinates;
   
/**
 * Draws resizing grips for this annotation.
 * @param context The `CGContext` to draw resizing grip on.
 * @param rect The portion of the view’s bounds to draw resizing grips in.
 * @param coordinates The annotation coordinates.
 */
- (void)internalDrawResizingGripsOnCGContext:(CGContextRef)context inRect:(CGRect)rect atCoordinates:(SCIAnnotationCoordinates *)coordinates;

/**
 * Updates the shape of selection overlay.
 * @param selectionPath The `CGMutablePath` instance to update.
 * @param coordinates The annotation coordinates.
 */
- (void)updateSelectionOverlayPath:(CGMutablePathRef)selectionPath atCoordinates:(SCIAnnotationCoordinates *)coordinates;

/**
 * Notifies `ISCIAnnotationDragListener` about start of drag operation,
 */
- (void)notifyOnDragStarted;

/**
 * Notifies `ISCIAnnotationDragListener` about drag operation.
 * @param xDelta The horizontal offset in pixels.
 * @param yDelta The vertical offset in pixels.
 */
- (void)notifyOnDragByXDelta:(CGFloat)xDelta yDelta:(CGFloat)yDelta;

/**
 * Notifies `ISCIAnnotationDragListener` about end of drag operation,
 */
- (void)notifyOnDragEnded;

/**
 * Creates `ISCIAnnotationAdornerAction` which is used in case of hit on annotation's resizing grip.
 * @param index The index of resizing grip which was hit.
 * @param offset The initial offset for resizing grip.
 * @return The `ISCIAnnotationAdornerAction` instance to handle resizing grip hit with specified index.
 */
- (nullable id<ISCIAnnotationAdornerAction>)createAdornerActionForResizingGripWithIndex:(SCIAnnotationPointIndex)index offset:(CGPoint)offset;

/**
 * Creates `ISCIAnnotationAdornerAction` which is used in case of hit on annotation.
 * @return The `ISCIAnnotationAdornerAction` instance to handle annotation hit.
 */
- (nullable id<ISCIAnnotationAdornerAction>)createAdornerActionForAnnotationHit;
   
/**
 * Selects the `ISCIAnnotationAdornerAction` for specified point on `ISCIAdornerLayer`.
 * @param point The point on the adorner layer.
 * @param adornerLayer The adorner layer.
 * @return The `ISCIAnnotationAdornerAction` if it is required for specified point, otherwise nil.
 */
- (nullable id<ISCIAnnotationAdornerAction>)selectAdornerActionForPoint:(CGPoint)point relativeTo:(id<ISCIAdornerLayer>)adornerLayer;

/**
 * Gets the index of `ISCIResizingGrip` for parent annotation at specified point on screen.
 * @param hitPoint The coordinates of hit-test point in pixels.
 * @param annotationCoordinates The `SCIAnnotationCoordinates` instance associated with parent annotation.
 * @return The index of `ISCIResizingGrip` which lies below hit test point, otherwise returns -1 which indicates that there is not `ISCIResizingGrip` at specified hit test point.
 */
- (SCIAnnotationPointIndex)getResizingGripHitIndexAt:(CGPoint)hitPoint andAnnotationCoordinates:(SCIAnnotationCoordinates *)annotationCoordinates;

/**
 * Moves parent annotation in X, Y direction with specified offset in pixels.
 * @param xDelta The horizontal offset in pixels.
 * @param yDelta The vertical offset in pixels.
 * @param coordinates The annotation coordinates.
 * @param frame The parent annotation surface frame.
 */
- (void)internalMoveByXDelta:(CGFloat)xDelta yDelta:(CGFloat)yDelta withCoordinates:(SCIAnnotationCoordinates *)coordinates insideFrame:(CGRect)frame;
    
/**
 * This method is used in internally to set an adorner point position.
 * @param point The new coordinates of base point in pixels.
 * @param index  The index of base point to move.
 * @param xAxis  The current XAxis instance.
 * @param yAxis  The current YAxis instance.
 */
- (void)moveBasePointTo:(CGPoint)point atIndex:(SCIAnnotationPointIndex)index xAxis:(id<ISCIAxis>)xAxis andYAxis:(id<ISCIAxis>)yAxis;

/**
 * Updates coordinate point based on provided values.
 * @param xValue The X Data-value.
 * @param yValue The Y Data-value.
 * @param frame The parent annotation surface frame.
 * @param xCalc The current `ISCICoordinateCalculator` for XAxis.
 * @param yCalc The current `ISCICoordinateCalculator` for YAxis.
 * @return The calculated annotation coordinate point.
 */
- (CGPoint)getPointCoordinatesFromXValue:(id<ISCIComparable>)xValue yValue:(id<ISCIComparable>)yValue insideFrame:(CGRect)frame withXCoordinateCalculator:(nullable id<ISCICoordinateCalculator>)xCalc andYCoordinateCalculator:(nullable id<ISCICoordinateCalculator>)yCalc;

/**
 * Converts a data value to pixel coordinate.
 * @param dataValue The data value to convert.
 * @param canvasMeasurement The size of `ISCIAnnotationSurface`.
 * @param coordCalc The current `ISCICoordinateCalculator`.
 * @param direction The X or Y direction for the transformation.
 * @return The converted pixel coordinates.
 */
- (CGFloat)toCoordinateFrom:(id<ISCIComparable>)dataValue canvasMeasurement:(int)canvasMeasurement coordinateCalculator:(nullable id<ISCICoordinateCalculator>)coordCalc andDirection:(SCIDirection2D)direction;

/**
 * Converts a pixel coordinate to data-value.
 * @param coord The pixel coordinate.
 * @param axis  The axis for which the data value is calculated.
 * @return The converted data-value.
 */
- (id<ISCIComparable>)fromCoordinate:(CGFloat)coord withAxis:(id<ISCIAxis>)axis;

/**
 * Converts a relative coordinate (e.g. 0.0 to 1.0) to data-value.
 * @param coord The relative coordinate, in the range of 0.0 to 1.0 for extremes of the viewport.
 * @param axis  The axis for which the data value is calculated.
 * @return The converted data-value.
 */
- (id<ISCIComparable>)fromRelativeCoordinate:(CGFloat)coord withAxis:(id<ISCIAxis>)axis;

/**
 * Sets X and Y Value for base point with specified index.
 * @param xValue The X Value to set.
 * @param yValue The Y Value to set.
 * @param index  The index of base point to set.
 */
- (void)setXValue:(id<ISCIComparable>)xValue yValue:(id<ISCIComparable>)yValue fromIndex:(SCIAnnotationPointIndex)index;

@end

NS_ASSUME_NONNULL_END
