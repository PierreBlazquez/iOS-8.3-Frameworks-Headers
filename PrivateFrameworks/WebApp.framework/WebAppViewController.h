//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class WebAppController;

@interface WebAppViewController : UIViewController
{
    BOOL _setupRootViewColor;
    int _statusBarStyle;
    WebAppController *_webAppController;
}

@property(nonatomic) WebAppController *webAppController; // @synthesize webAppController=_webAppController;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
@property(nonatomic) int statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
- (int)preferredStatusBarStyle;

@end

