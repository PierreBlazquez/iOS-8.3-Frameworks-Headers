//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class RUWelcomeViewController, UIAlertView;

@protocol RUWelcomeViewControllerDelegate <NSObject>

@optional
- (void)welcomeViewController:(RUWelcomeViewController *)arg1 didDismissFailureAlert:(UIAlertView *)arg2;
- (void)welcomeViewController:(RUWelcomeViewController *)arg1 willDisplayFailureAlert:(UIAlertView *)arg2;
- (void)welcomeViewControllerDidReceiveServiceUnavailable:(RUWelcomeViewController *)arg1;
- (void)welcomeViewControllerDidOptIn:(RUWelcomeViewController *)arg1;
@end

