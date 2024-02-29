//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ISCIServiceContainer.h is part of SCICHART®, High Performance Scientific Charts
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

NS_ASSUME_NONNULL_BEGIN

/**
 * Defines the interface to a ServiceContainer used throughout SciChart.
 */
@protocol ISCIServiceContainer <NSObject>

/**
 * Registers the service.
 * @param service The service instance to register.
 * @param classType The type of service.
 */
- (void)registerService:(id)service ofType:(Protocol *)classType;

/**
 * Determines whether this instance has the service of specified type.
 * @param classType The type of service.
 * @return YES - if container has specified service type, otherwise - NO.
 */
- (BOOL)hasServiceOfType:(Protocol *)classType;

/**
 * Gets the esrvice instance registered by type
 * @param classType The service type to get.
 * @return The service instance.
 */
- (id)getServiceOfType:(Protocol *)classType;

/**
 * Deregisters service.
 * @param classType The type of service.
 */
- (void)deregisterServiceOfType:(Protocol *)classType;

@end

NS_ASSUME_NONNULL_END
