//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

#import "UIAdaptivePresentationControllerDelegate.h"

@class NSString, UIView, _UIKeyboardLayoutAlignmentView;

@interface _UIAlertControllerPresentationController : UIPresentationController <UIAdaptivePresentationControllerDelegate>
{
    UIView *_dimmingView;
    _UIKeyboardLayoutAlignmentView *keyboardLayoutAlignmentView;
    UIView *keyboardLayoutAlignmentAvailableSpaceView;
    BOOL constraintsPrepared;
    BOOL _chromeHidden;
    BOOL __isCurrentContext;
    BOOL __shouldRespectNearestCurrentContextPresenter;
}

@property(setter=_setShouldRespectNearestCurrentContextPresenter:) BOOL _shouldRespectNearestCurrentContextPresenter; // @synthesize _shouldRespectNearestCurrentContextPresenter=__shouldRespectNearestCurrentContextPresenter;
@property(setter=_setIsCurrentContext:) BOOL _isCurrentContext; // @synthesize _isCurrentContext=__isCurrentContext;
@property(nonatomic, getter=_isChromeHidden, setter=_setChromeHidden:) BOOL _chromeHidden; // @synthesize _chromeHidden;
- (float)constantForAligningAlertControllerToAvailableSpace;
- (int)attributeToAlignAlertControllerViewBy;
- (id)_presentedAlertController;
- (void)_occludePresentingWindow:(BOOL)arg1;
- (void)_prepareDimmingViewIfNecessary;
- (void)_prepareConstraintsIfNecessary;
@property(readonly) UIView *_dimmingView; // @synthesize _dimmingView;
- (BOOL)_preserveResponderAcrossWindows;
- (BOOL)_shouldChangeStatusBarViewController;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(int)arg2;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (int)adaptivePresentationStyle;
- (int)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)containerViewWillLayoutSubviews;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionWillBegin;
- (void)presentationTransitionDidEnd:(BOOL)arg1;
- (id)presentedView;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (BOOL)shouldPresentInFullscreen;
- (BOOL)shouldRemovePresentersView;
- (void)_containerViewWillLayoutSubviews;
- (struct CGRect)frameOfPresentedViewInContainerView;
- (void)setDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

