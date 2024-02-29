//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SCIDrawMeshAs.h is part of SCICHART®, High Performance Scientific Charts
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

/**
 * Enumeration constants which define how to draw a `SCISurfaceMeshRenderableSeries3D`.
 */
typedef NS_ENUM(NSUInteger, SCIDrawMeshAs) {
    
    /**
     * Draw the mesh as `Solid surface` only.
     */
    SCIDrawMeshAs_SolidMesh = 1,
    
    /**
     * Draw the mesh as `Wireframe` only.
     */
    SCIDrawMeshAs_Wireframe = 2,
    
    /**
     * Draw the mesh as `Contours` only.
     */
    SCIDrawMeshAs_Contours = 4,
    
    /**
     * Draw the mesh as `Solid surface` plus `Wireframe`.
     */
    SCIDrawMeshAs_SolidWireframe = SCIDrawMeshAs_Wireframe | SCIDrawMeshAs_SolidMesh,
    
    /**
     * Draw the mesh as `Solid surface` plus `Contours`.
     */
    SCIDrawMeshAs_SolidWithContours = SCIDrawMeshAs_SolidMesh | SCIDrawMeshAs_Contours,
    
    /**
     * Draw the mesh as `Solid surface` plus `Wireframe` plus `Contours`
     */
    SCIDrawMeshAs_SolidFrameWithContours = SCIDrawMeshAs_SolidMesh | SCIDrawMeshAs_Wireframe | SCIDrawMeshAs_Contours
};
