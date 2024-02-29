//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2020. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// SciChart.Core.h is part of SCICHART®, High Performance Scientific Charts
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

// MARK: - <--- SciChart.Core ---> -

// MARK: Platform Specific
#import <SciChart/SCIView.h>
#import <SciChart/SCIEdgeInsets.h>

// MARK: Blocks
#import <SciChart/SCIPredicate.h>
#import <SciChart/SCIAction.h>
#import <SciChart/SCIAction1.h>
#import <SciChart/SCIAction2.h>
#import <SciChart/SCIFunc1.h>
#import <SciChart/SCIFactory.h>

// MARK: Native types categories & extensions
#import <SciChart/NSNumber+ISCIComparable.h>
#import <SciChart/NSNumber+Extensions.h>
#import <SciChart/NSDate+ISCIComparable.h>
#import <SciChart/NSDate+MissingMethods.h>
#import <SciChart/NSDateFormatter+Util.h>
#import <SciChart/NSNumberFormatter+Util.h>

#import <SciChart/NSBundle+Extensions.h>
#import <SciChart/NSString+Util.h>
#import <SciChart/NSArray+Extensions.h>
#import <SciChart/UIColor+Util.h>
#import <SciChart/CoreGraphicsExtensions.h>

#import <SciChart/SCIResamplingMode.h>
#import <SciChart/SCISearchMode.h>
#import <SciChart/SCIDirection2D.h>
#import <SciChart/SCIAlignment.h>
#import <SciChart/SCIDataType.h>

// MARK: Core Protocols
#import <SciChart/ISCIComparable.h>
#import <SciChart/SCIComparableUtil.h>
#import <SciChart/ISCIAttachable.h>
#import <SciChart/ISCICleanable.h>
#import <SciChart/ISCIUpdatable.h>
#import <SciChart/ISCISuspendable.h>
#import <SciChart/ISCIUpdateSuspender.h>
#import <SciChart/ISCIReadWriteLock.h>
#import <SciChart/ISCIDisposable.h>
#import <SciChart/SCIDisposableBase.h>
#import <SciChart/SCIUpdateSuspender.h>
#import <SciChart/ISCIInvalidatableElement.h>
#import <SciChart/ISCIChartSurfaceProvider.h>
#import <SciChart/ISCIRenderSurfaceChangedListener.h>
#import <SciChart/SCIRenderPassState.h>

#import <SciChart/ISCIHitTestable.h>
#import <SciChart/ISCIView.h>
#import <SciChart/ISCIViewContainer.h>
#import <SciChart/UIView+Util.h>
#import <SciChart/UIView+ISCIHitTestable.h>
#import <SciChart/SCIDateIntervalUtil.h>
#import <SciChart/SCIDateUtil.h>

// MARK: ServiceContainer
#import <SciChart/SCIAttachableServiceContainer.h>
#import <SciChart/SCIServiceContainer.h>
#import <SciChart/ISCIServiceContainer.h>

// MARK: Smart Properties
#import <SciChart/SCISmartProperty.h>
#import <SciChart/SCISmartPropertyBool.h>
#import <SciChart/SCISmartPropertyDouble.h>
#import <SciChart/SCISmartPropertyFloat.h>
#import <SciChart/SCISmartPropertyInt.h>
#import <SciChart/SCISmartPropertyLong.h>
#import <SciChart/SCIObservableSmartProperty.h>
#import <SciChart/SCIObservableSmartPropertyBool.h>
#import <SciChart/SCIObservableSmartPropertyDouble.h>
#import <SciChart/SCIObservableSmartPropertyFloat.h>
#import <SciChart/SCIObservableSmartPropertyInt.h>
#import <SciChart/SCIObservableSmartPropertyLong.h>
#import <SciChart/SCINotifiableSmartProperty.h>
#import <SciChart/SCINotifiableSmartPropertyBool.h>
#import <SciChart/SCINotifiableSmartPropertyDouble.h>
#import <SciChart/SCINotifiableSmartPropertyFloat.h>
#import <SciChart/SCINotifiableSmartPropertyInt.h>
#import <SciChart/SCINotifiableSmartPropertyLong.h>

// MARK: Mathematics
#import <SciChart/SCIGenericMathFactory.h>
#import <SciChart/ISCIMath.h>

// MARK: Messaging, events
#import <SciChart/ISCIChartDebugLoggerFacade.h>
#import <SciChart/SCIChartDebugLogger.h>
#import <SciChart/ISCIMessageSubscription.h>
#import <SciChart/SCIMessageSubscriptionToken.h>
#import <SciChart/ISCIEventAggregator.h>
#import <SciChart/ISCIEventManager.h>
#import <SciChart/SCIObjectPool.h>

// MARK: Values (DoubleValues, FloatValues, etc...)
#import <SciChart/ISCIValues.h>
#import <SciChart/SCIByteValues.h>
#import <SciChart/SCIBoolValues.h>
#import <SciChart/SCIShortValues.h>
#import <SciChart/SCIIntegerValues.h>
#import <SciChart/SCILongValues.h>
#import <SciChart/SCIUnsignedByteValues.h>
#import <SciChart/SCIUnsignedShortValues.h>
#import <SciChart/SCIUnsignedIntegerValues.h>
#import <SciChart/SCIUnsignedLongValues.h>
#import <SciChart/SCIFloatValues.h>
#import <SciChart/SCIDoubleValues.h>
#import <SciChart/SCIDateValues.h>

// MARK: Observable
#import <SciChart/SCICollectionObserver.h>
#import <SciChart/SCICollectionChangedEventArgs.h>
#import <SciChart/SCIObservableCollection.h>
#import <SciChart/SCIAttachableObservableCollection.h>
#import <SciChart/SCIProjectionCollection.h>
#import <SciChart/SCILockableObservableCollection.h>
