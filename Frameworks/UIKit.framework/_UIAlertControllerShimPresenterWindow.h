//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class UIAlertController;

@interface _UIAlertControllerShimPresenterWindow : UIWindow
{
    UIAlertController *_alertController;
}

+ (BOOL)_isSystemWindow;
- (id)_presentationViewController;
- (void)presentAlertController:(id)arg1 animated:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3;
@property(readonly, retain, nonatomic) UIAlertController *alertController;
- (BOOL)_shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)init;

@end

