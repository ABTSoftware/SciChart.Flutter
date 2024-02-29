//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIBaseRenderableSeries3D+Protected.h is part of SCICHART®, High Performance Scientific Charts
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

#import "SCIBaseRenderableSeries3D.h"
#import "SCIRenderableSeriesCore+Protected.h"
#import "SCINotifiableSmartProperty.h"
#import "SCINotifiableSmartPropertyInt.h"
#import "SCINotifiableSmartPropertyFloat.h"
#import "SCINotifiableSmartPropertyDouble.h"
#import "SCINotifiableSmartPropertyBool.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * The extensions in this header are to be used only by subclasses of `SCIBaseRenderableSeries3D`.
 */
@interface SCIBaseRenderableSeries3D ()

@property (nonatomic, readonly) SCIAction invalidateMeshCallback;
@property (nonatomic, readonly) SCIAction invalidateMetadataCallback;

@property (class, nonatomic, readonly) NSString *Tag;

@property (nonatomic, readonly) SCISmartPropertyFloat *shininessProperty;
@property (nonatomic, readonly) SCISmartPropertyFloat *specularStrengthProperty;
@property (nonatomic, readonly) SCISmartPropertyInt *specularColorProperty;
@property (nonatomic, readonly) SCISmartPropertyInt *diffuseColorProperty;
@property (nonatomic, readonly) SCISmartPropertyInt *selectedVertexColorProperty;

/**
 * Creates a new instance of `SCIBaseRenderableSeries3D` class.
 * @param currentRenderPassData The render pass data instance
 * @param sceneEntity The scene entity associated with this series
 */
- (instancetype)initWithRenderPathData:(id<ISCISeriesRenderPassData3D>)currentRenderPassData scene:(SCIBaseRenderableSeriesSceneEntity3D *)sceneEntity NS_DESIGNATED_INITIALIZER;

- (BOOL)isValidType:(id<ISCIDataSeries3D>)dataSeries;

- (void)internalUpdate:(SCIRenderPassState3D *)renderPassState;

- (void)internalUpdateRenderPassData:(id<ISCISeriesRenderPassData3D>)renderPassData dataSeries:(id<ISCIDataSeries3D>)dataSeries;

- (void)internalUpdateRenderPassMetadata:(id<ISCISeriesRenderPassData3D>)renderPassData provider:(id<ISCIMetadataProvider3D>)metadataProvider;

+ (void)updateMeshColors:(id<ISCIMetadataProvider3D>)metadataProvider with:(SCIUnsignedIntegerValues *)colorsToUpdate;

/**
 * Checks whether this renderable series need to update its render pass data.
 * @param xCoordCalc  The current coordinate calculator for `XAxis`.
 * @param yCoordCalc  The current coordinate calculator for `YAxis`.
 * @param zCoordCalc  The current coordinate calculator for `ZAxis`.
 * @param updateFlags The update flags used to update render pass data.
 * @return If true update is required and `-internalUpdateRenderPassData:dataSeries:` should be called.
 */
- (BOOL)isUpdateOfRenderPassDataRequiredXCoordinateCalculator:(id<ISCICoordinateCalculator>)xCoordCalc yCoordinateCalculator:(id<ISCICoordinateCalculator>)yCoordCalc zCoordinateCalculator:(id<ISCICoordinateCalculator>)zCoordCalc updateFlats:(NSUInteger)updateFlags;

+ (void)updatePointMetadata:(id<ISCIMetadataProvider3D>)metadataProvider withColors:(SCIUnsignedIntegerValues *)pointColors scales:(SCIFloatValues *)pointScales defaultColor:(unsigned int)defaultColor defaultScale:(float)defaultScale pointsCount:(NSInteger)count;

+ (void)updateStrokeMetadata:(id<ISCIMetadataProvider3D>)metadataProvider withColors:(SCIUnsignedIntegerValues *)strokeColors defaultColor:(unsigned int)defaultColor pointsCount:(NSInteger)count;

+ (void)updateFillMetadata:(id<ISCIMetadataProvider3D>)metadataProvider withColors:(SCIUnsignedIntegerValues *)fillColors defaultColor:(unsigned int)defaultColor pointsCount:(NSInteger)count;

@end

NS_ASSUME_NONNULL_END
