//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIRemoteViewController.h"

#import "GKServiceViewControllerDelegate.h"

@class GKGame, GKHostedViewController, NSMutableDictionary, NSString, UIColor;

@interface GKRemoteViewController : _UIRemoteViewController <GKServiceViewControllerDelegate>
{
    BOOL _didSetRemoteGame;
    BOOL _viewDidAppear;
    GKHostedViewController *_managingViewControllerWeak;
    GKGame *_game;
    NSMutableDictionary *_dirtyProperties;
    UIColor *_previousStatusBarColor;
    CDUnknownBlockType _blockToPerformAfterViewDidAppear;
}

+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@property(retain, nonatomic) UIColor *previousStatusBarColor; // @synthesize previousStatusBarColor=_previousStatusBarColor;
@property(nonatomic) BOOL didSetRemoteGame; // @synthesize didSetRemoteGame=_didSetRemoteGame;
- (void)readyToPresentInController:(id)arg1;
- (BOOL)_dismissSelfAfterGettingShouldCancel;
- (void)_performSelectorAfterAppearingOrTimeOut:(SEL)arg1;
@property(copy, nonatomic) CDUnknownBlockType blockToPerformAfterViewDidAppear; // @synthesize blockToPerformAfterViewDidAppear=_blockToPerformAfterViewDidAppear;
- (void)_performBlockAfterViewDidAppearIfNeeded;
@property(nonatomic) BOOL viewDidAppear; // @synthesize viewDidAppear=_viewDidAppear;
- (int)_desiredStatusBarStyle;
- (void)populateInitialStateForRemoteView:(id)arg1;
@property(readonly, nonatomic) BOOL serviceNeedsLocalPlayer;
@property(readonly, nonatomic) BOOL serviceNeedsCurrentGame;
- (void)nudge;
@property(nonatomic) GKHostedViewController *managingViewController; // @synthesize managingViewController=_managingViewControllerWeak;
- (id)observedKeyPaths;
- (BOOL)_dismissSelfAfterGettingShouldFinish;
- (void)remoteViewControllerIsFinishing;
- (void)remoteViewControllerIsCanceling;
- (void)setupRemoteView;
@property(retain, nonatomic) GKGame *game; // @synthesize game=_game;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (unsigned int)supportedInterfaceOrientations;
- (void)dealloc;
@property(retain, nonatomic) NSMutableDictionary *dirtyProperties; // @synthesize dirtyProperties=_dirtyProperties;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
