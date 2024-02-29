//******************************************************************************
// SCICHART® Copyright SciChart Ltd. 2011-2019. All rights reserved.
//
// Web: http://www.scichart.com
// Support: support@scichart.com
// Sales:   sales@scichart.com
//
// ExampleViewBase.m is part of the SCICHART® Examples. Permission is hereby granted
// to modify, create derivative works, distribute and publish any part of this source
// code whether for commercial, private or personal use.
//
// The SCICHART® examples are distributed in the hope that they will be useful, but
// without any warranty. It is provided "AS IS" without warranty of any kind, either
// expressed or implied.
//******************************************************************************

#import "SCDExampleBaseViewController.h"
#import "SCDSingleChartViewController.h"
#import <SciChart/NSObject+ExceptionUtil.h>

@interface SCDExampleBaseViewController()
@property (strong, nonatomic, readonly) SCIView *surface;
@end

@implementation SCDExampleBaseViewController

static SCIChartTheme _chartTheme = SCIChartThemeNavy;

+ (SCIChartTheme)chartTheme {
    return _chartTheme;
}

+ (void)setChartTheme:(SCIChartTheme)chartTheme {
    _chartTheme = chartTheme;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        [self commonInit];
#if TARGET_OS_IOS
        self.viewRespectsSystemMinimumLayoutMargins = NO;
#endif
    }
    return self;
}

- (void)commonInit {
    // Could be overriden in derived classes, to initialize common, non-chart things.
}

- (void)loadView { }

- (void)viewDidLoad {
    [super viewDidLoad];
    
#if TARGET_OS_IOS
    self.edgesForExtendedLayout = UIRectEdgeNone;
#endif
    
    [self initExample];
    [self tryUpdateChartTheme:_chartTheme];
}

- (void)initExample {
    @throw [self notImplementedExceptionFor:_cmd];
}

- (void)tryUpdateChartTheme:(SCIChartTheme)theme {
    // Also, should be overriden in specific examples, to reflect theme changes.
}

+ (SCIModifierGroup *)createDefaultModifiers {
    SCIModifierGroup *modifierGroup = [[SCIModifierGroup alloc] initWithChildModifiers:@[
        [SCIPinchZoomModifier new],
        [SCIZoomPanModifier new],
        [SCIZoomExtentsModifier new]
    ]];
    
    return modifierGroup;
}


@end
