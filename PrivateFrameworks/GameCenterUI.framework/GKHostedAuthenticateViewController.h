//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterUI/GKHostedViewController.h>

#import "GKAuthenticateViewController.h"

@class NSError, NSString;

@interface GKHostedAuthenticateViewController : GKHostedViewController <GKAuthenticateViewController>
{
    BOOL _disablesSignIn;
    BOOL _rotationLocked;
    CDUnknownBlockType _completionHandler;
    NSError *_error;
    int _mode;
    CDUnknownBlockType _dismissCompletionHandler;
}

+ (BOOL)_preventsAppearanceProxyCustomization;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic, getter=isRotationLocked) BOOL rotationLocked; // @synthesize rotationLocked=_rotationLocked;
@property(nonatomic) BOOL disablesSignIn; // @synthesize disablesSignIn=_disablesSignIn;
- (void)showPasswordChangeAlertWithURL:(id)arg1;
- (void)finishAuthenticationWithError:(id)arg1;
- (id)hostSideViewControllerClassName;
- (id)serviceSideViewControllerClassName;
- (id)initWithMode:(int)arg1;
@property(copy, nonatomic) CDUnknownBlockType dismissCompletionHandler; // @synthesize dismissCompletionHandler=_dismissCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)shouldAutorotate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
