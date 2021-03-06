//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IKJSObject.h"

#import "SKUIJSTabBar.h"

@class NSArray, NSMutableArray, SKUIApplicationController, SKUIJSTabBarItem;

@interface SKUIJSTabBar : IKJSObject <SKUIJSTabBar>
{
    SKUIApplicationController *_applicationController;
    NSMutableArray *_tabBarItems;
    SKUIJSTabBarItem *_transientTabBarItem;
}

@property(readonly, nonatomic) SKUIJSTabBarItem *transientTab;
@property(readonly, nonatomic) NSArray *tabs;
@property(retain, nonatomic) SKUIJSTabBarItem *selectedTab;
- (void)_reloadTabBarItems;
- (id)initWithAppContext:(id)arg1 controller:(id)arg2;
- (void)sendOnUpdate;
- (void).cxx_destruct;

@end

