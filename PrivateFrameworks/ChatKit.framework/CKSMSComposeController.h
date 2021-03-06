//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "CKSMSCompose.h"
#import "CKSMSComposeRemoteViewControllerDelegate.h"

@class CKSMSComposeQueuingRemoteViewControllerProxy, CKSMSComposeRemoteViewController, NSString, UINavigationController, _UIAsyncInvocation;

@interface CKSMSComposeController : UIViewController <CKSMSCompose, CKSMSComposeRemoteViewControllerDelegate>
{
    id _delegate;
    int _entryViewInvisible;
    _UIAsyncInvocation *_cancellationInvocation;
    UINavigationController *_clientNavigationController;
    BOOL _safeToAdd;
    BOOL _didChangeStatusBarStyle;
    int _savedStatusBarStyle;
    CKSMSComposeRemoteViewController *_remoteViewController;
    CKSMSComposeQueuingRemoteViewControllerProxy *_remoteViewControllerProxy;
}

+ (double)maxTrimDurationForVideo;
+ (double)maxTrimDurationForAudio;
+ (BOOL)acceptsMIMEType:(id)arg1;
+ (BOOL)canSendPhotos:(int)arg1 videos:(int)arg2 audioClips:(int)arg3;
- (id)initWithNavigationController:(id)arg1;
- (void)_addRemoteVCIfNeeded;
@property(retain, nonatomic) CKSMSComposeQueuingRemoteViewControllerProxy *remoteViewControllerProxy; // @synthesize remoteViewControllerProxy=_remoteViewControllerProxy;
- (void)forceCancelComposition;
- (BOOL)insertFilename:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3 options:(id)arg4;
- (BOOL)insertAttachmentWithURL:(id)arg1 andDescription:(id)arg2;
- (void)setUICustomizationData:(id)arg1;
- (void)setText:(id)arg1 subject:(id)arg2 addresses:(id)arg3;
- (void)smsComposeControllerSendStartedWithText:(id)arg1;
- (void)smsComposeControllerCancelled;
- (void)smsComposeControllerAppeared;
- (void)setTextEntryContentsVisible:(BOOL)arg1;
- (void)setPendingAddresses:(id)arg1;
- (void)smsComposeControllerDataInserted;
- (BOOL)insertData:(id)arg1 MIMEType:(id)arg2 exportedFilename:(id)arg3;
- (void)setCanEditRecipients:(BOOL)arg1;
- (void)disableCameraAttachments;
- (void)forceMMS;
@property(retain, nonatomic) CKSMSComposeRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

