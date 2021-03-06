//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIScrollsToTopInitiatorView.h>

#import "UIStatusBarServerClient.h"
#import "UIStatusBarStateObserver.h"

@class NSMutableArray, NSMutableSet, NSNumber, NSString, UIColor, UILabel, UIStatusBarBackgroundView, UIStatusBarForegroundView, UIStatusBarServer, UIStatusBarStyleAnimationParameters, UIStatusBarStyleAttributes, UIStatusBarStyleRequest, UIStatusBarWindow, UIView;

@interface UIStatusBar : _UIScrollsToTopInitiatorView <UIStatusBarServerClient, UIStatusBarStateObserver>
{
    UIStatusBarWindow *_statusBarWindow;
    UIStatusBarServer *_statusBarServer;
    id <UIStatusBarStateProvider> _inProcessProvider;
    BOOL _showsForeground;
    UIStatusBarBackgroundView *_backgroundView;
    UIStatusBarForegroundView *_foregroundView;
    UILabel *_doubleHeightLabel;
    UIView *_doubleHeightLabelContainer;
    NSString *_currentDoubleHeightText;
    CDStruct_0dcac612 _currentRawData;
    NSMutableArray *_interruptedAnimationCompositeViews;
    UIStatusBarBackgroundView *_newStyleBackgroundView;
    UIStatusBarForegroundView *_newStyleForegroundView;
    UIStatusBar *_slidingStatusBar;
    int _requestedStyle;
    int _styleOverrides;
    UIStatusBarStyleAttributes *_styleAttributes;
    int _orientation;
    BOOL _hidden;
    BOOL _suppressesHiddenSideEffects;
    BOOL _foreground;
    BOOL _registered;
    BOOL _waitingOnCallbackAfterChangingStyleOverridesLocally;
    BOOL _suppressGlow;
    float _translucentBackgroundAlpha;
    BOOL _showOnlyCenterItems;
    CDStruct_787df3f0 *_localDataOverrides;
    UIColor *_tintColor;
    UIColor *_lastUsedBackgroundColor;
    UIStatusBarStyleAnimationParameters *_nextTintTransition;
    NSNumber *_overrideHeight;
    NSMutableSet *_disableRasterizationReasons;
    BOOL _persistentAnimationsEnabled;
    BOOL _simulatesLegacyAppearance;
    BOOL _serverUpdatesDisabled;
    BOOL _homeItemsDisabled;
    id <UIStatusBarStyleDelegate> _styleDelegate;
    UIColor *_foregroundColor;
    int _legibilityStyle;
}

+ (void)enumerateStatusBarStyleOverridesWithBlock:(CDUnknownBlockType)arg1;
+ (void)setSuppressUpdateAnimations:(BOOL)arg1;
+ (void)setTintOverrideEnabled:(BOOL)arg1 withColor:(id)arg2;
+ (int)lowBatteryLevel;
+ (int)defaultStatusBarStyleWithTint:(BOOL)arg1;
+ (id)_newStyleAttributesForRequest:(id)arg1;
+ (int)cornerStyleForRequestedStyle:(int)arg1 effectiveStyle:(int)arg2 alignment:(int)arg3;
+ (id)_styleAttributesForRequest:(id)arg1;
+ (struct CGRect)_frameInSceneReferenceSpaceForStyleAttributes:(id)arg1 orientation:(int)arg2;
+ (struct CGRect)_frameInSceneReferenceSpaceForStyleAttributes:(id)arg1 orientation:(int)arg2 inSceneWithReferenceSize:(struct CGSize)arg3;
+ (id)_styleAttributesForStatusBarStyle:(int)arg1 legacy:(BOOL)arg2;
+ (void)getData:(CDStruct_0dcac612 *)arg1 forRequestedData:(const CDStruct_0dcac612 *)arg2 withOverrides:(const CDStruct_787df3f0 *)arg3;
+ (id)navBarTintColorFromStatusBarTintColor:(id)arg1;
+ (id)defaultBlueTintColor;
+ (float)heightForStyle:(int)arg1 orientation:(int)arg2;
+ (struct CGRect)_frameInSceneReferenceSpaceForStyle:(int)arg1 orientation:(int)arg2 inSceneWithReferenceSize:(struct CGSize)arg3;
+ (int)defaultStyleForRequestedStyle:(int)arg1 styleOverrides:(int)arg2;
+ (id)statusBarTintColorForNavBarTintColor:(id)arg1;
@property(nonatomic) BOOL homeItemsDisabled; // @synthesize homeItemsDisabled=_homeItemsDisabled;
- (void)_clearOverrideHeight;
- (void)_setOverrideHeight:(float)arg1;
@property(nonatomic) BOOL serverUpdatesDisabled; // @synthesize serverUpdatesDisabled=_serverUpdatesDisabled;
@property(copy, nonatomic) UIStatusBarStyleRequest *styleRequest;
@property(nonatomic) int legibilityStyle; // @synthesize legibilityStyle=_legibilityStyle;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) BOOL simulatesLegacyAppearance; // @synthesize simulatesLegacyAppearance=_simulatesLegacyAppearance;
- (void)crossfadeTime:(BOOL)arg1 duration:(double)arg2;
- (BOOL)_shouldSeekHigherPriorityTouchTarget;
- (void)setSuppressesHiddenSideEffects:(BOOL)arg1;
- (id)currentDoubleHeightLabelText;
- (void)requestStyle:(int)arg1 animation:(int)arg2 startTime:(double)arg3 duration:(double)arg4 curve:(int)arg5;
- (void)requestStyle:(int)arg1;
- (int)_requestedStyle;
- (struct CGRect)currentFrame;
- (void)setLocalDataOverrides:(CDStruct_787df3f0 *)arg1;
- (void)setShowsOnlyCenterItems:(BOOL)arg1;
- (void)setBackgroundAlpha:(float)arg1;
- (void)statusBarStateProvider:(id)arg1 didChangeDoubleHeightStatusStringForStyle:(int)arg2;
- (void)statusBarStateProvider:(id)arg1 didPostStatusBarData:(const CDStruct_0dcac612 *)arg2 withActions:(int)arg3;
- (void)setStyleRequest:(id)arg1 animationParameters:(id)arg2;
- (void)setLegibilityStyle:(int)arg1 animationParameters:(id)arg2;
- (void)setForegroundColor:(id)arg1 animationParameters:(id)arg2;
- (void)forgetEitherSideHistory;
- (void)forceUpdateGlowAnimation;
- (void)forceUpdateData:(BOOL)arg1;
@property(nonatomic) id <UIStatusBarStyleDelegate> styleDelegate; // @synthesize styleDelegate=_styleDelegate;
- (BOOL)_touchShouldProduceReturnEvent;
- (void)setHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (float)_hiddenAlphaForHideAnimationParameters:(id)arg1;
- (void)_crossfadeToNewBackgroundView;
- (void)_swapToNewForegroundView;
- (void)_setStyle:(id)arg1;
- (void)_crossfadeToNewForegroundViewWithAlpha:(float)arg1;
- (void)_swapToNewBackgroundView;
- (void)_setFrameForStyle:(id)arg1;
- (struct CGAffineTransform)_slideTransform;
- (id)_currentComposedDataForStyle:(id)arg1;
- (void)_updatePersistentAnimationsEnabledForForegroundView:(id)arg1;
- (id)_prepareInterruptedAnimationCompositeViewIncludingForeground:(BOOL)arg1;
- (struct CGRect)_backgroundFrameForAttributes:(id)arg1;
- (void)_updateBackgroundFrame;
- (BOOL)_shouldUseInProcessProviderDoubleHeightStatusString;
- (void)_finishedSettingStyleWithOldHeight:(float)arg1 newHeight:(float)arg2 animation:(int)arg3;
- (void)_setStyle:(id)arg1 animation:(int)arg2;
- (void)_beginDisablingRasterizationForReason:(id)arg1;
- (void)_endDisablingRasterizationForReason:(id)arg1;
- (id)_prepareToSetStyle:(id)arg1 animation:(int)arg2;
- (id)activeTintColor;
- (void)_requestStyleAttributes:(id)arg1 animationParameters:(id)arg2;
- (id)currentStyleRequestForStyle:(int)arg1;
- (int)styleForRequestedStyle:(int)arg1;
- (id)_styleAttributesForRequest:(id)arg1;
- (id)_currentStyleAttributes;
- (struct CGRect)frameForOrientation:(int)arg1;
- (void)_adjustDoubleHeightTextVisibility;
- (void)_setDoubleHeightStatusString:(id)arg1;
- (id)_currentComposedData;
- (void)forceUpdateToData:(const CDStruct_0dcac612 *)arg1 animated:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1 showForegroundView:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1 showForegroundView:(BOOL)arg2 inProcessStateProvider:(id)arg3;
- (void)_updateShouldRasterize;
- (void)_evaluateServerRegistration;
- (void)_styleOverridesDidChange:(id)arg1;
- (void)_itemViewShouldEndDisablingRasterization:(id)arg1;
- (void)_itemViewShouldBeginDisablingRasterization:(id)arg1;
- (void)_itemViewPerformButtonAction:(id)arg1;
- (void)_willEnterForeground:(id)arg1;
- (void)_didEnterBackground:(id)arg1;
- (struct CGAffineTransform)_hiddenTransformForHideAnimationParameters:(id)arg1;
- (void)_statusBarDidAnimateRotation;
- (void)_statusBarWillAnimateRotation;
@property(nonatomic) UIStatusBarWindow *statusBarWindow; // @synthesize statusBarWindow=_statusBarWindow;
- (void)statusBarServer:(id)arg1 didReceiveDoubleHeightStatusString:(id)arg2 forStyle:(int)arg3;
- (void)statusBarServer:(id)arg1 didReceiveGlowAnimationState:(BOOL)arg2 forStyle:(int)arg3;
- (void)statusBarServer:(id)arg1 didReceiveStyleOverrides:(int)arg2;
- (void)statusBarServer:(id)arg1 didReceiveStatusBarData:(const CDStruct_0dcac612 *)arg2 withActions:(int)arg3;
- (id)_doubleHeightStatusStringForStyle:(int)arg1;
@property(readonly, nonatomic) int styleOverrides; // @synthesize styleOverrides=_styleOverrides;
@property(nonatomic) BOOL persistentAnimationsEnabled; // @synthesize persistentAnimationsEnabled=_persistentAnimationsEnabled;
- (void)setSuppressesGlow:(BOOL)arg1;
- (void)setOrientation:(int)arg1;
- (BOOL)isDoubleHeight;
- (BOOL)_isTransparent;
- (float)_standardHeight;
- (void)_didChangeFromIdiom:(int)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3;
- (void)didMoveToSuperview;
- (void)setTintColor:(id)arg1;
- (float)currentHeight;
- (float)heightForOrientation:(int)arg1;
- (int)currentStyle;
- (BOOL)isTranslucent;
- (void)setTintColor:(id)arg1 withDuration:(double)arg2;
- (void)noteStyleOverridesChangedLocally;
- (void)setHidden:(BOOL)arg1 animationParameters:(id)arg2;
- (void)requestStyle:(int)arg1 animationParameters:(id)arg2;
- (void)_setVisualAltitudeBias:(struct CGSize)arg1;
- (void)_setVisualAltitude:(float)arg1;
- (void)requestStyle:(int)arg1 animated:(BOOL)arg2;
- (void)forceUpdateDoubleHeightStatus;
- (void)forceUpdateStyleOverrides:(BOOL)arg1;
- (float)defaultDoubleHeight;
- (float)defaultHeight;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)_backgroundView;
- (void)layoutSubviews;
- (void)setHidden:(BOOL)arg1;
- (BOOL)isHidden;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

