//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class MPUExtrasContext, NSLayoutConstraint, UIView, UIViewController<MPUExtrasVideoPlaybackViewController>;

@interface MPUExtrasFeatureContainerViewController : UIViewController
{
    UIViewController<MPUExtrasVideoPlaybackViewController> *_videoPlaybackViewController;
    NSLayoutConstraint *_overlayViewAdjustmentConstraint;
    MPUExtrasContext *_context;
    UIView *_menuBarView;
    float _collectionViewHeight;
}

@property(nonatomic) float collectionViewHeight; // @synthesize collectionViewHeight=_collectionViewHeight;
@property(retain, nonatomic) UIViewController *videoPlaybackViewController; // @synthesize videoPlaybackViewController=_videoPlaybackViewController;
- (void)_menuBarHeightChange:(id)arg1;
@property(nonatomic) __weak UIView *menuBarView; // @synthesize menuBarView=_menuBarView;
- (void).cxx_destruct;
- (id)initWithContext:(id)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) __weak MPUExtrasContext *context; // @synthesize context=_context;
- (void)dealloc;

@end
