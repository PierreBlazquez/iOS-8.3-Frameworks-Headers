//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MPUExtrasZoomingImageTransitionParticipant.h"

@class MPUContentSizeLayoutConstraint, MPUExtrasZoomableImageView, MPUExtrasZoomingImageInteractiveTransitionSourceContext, NSArray, NSAttributedString, NSString, UIActivityIndicatorView, UIImage, UILabel, UIView;

@interface MPUExtrasImageViewController : UIViewController <MPUExtrasZoomingImageTransitionParticipant>
{
    BOOL _allowsPinchingImageForInteractiveZoomingImageTransition;
    BOOL _overlayHidden;
    unsigned int _imageIndex;
    NSString *_zoomingImageTransitionIdentifier;
    UIActivityIndicatorView *_activityIndicatorView;
    MPUExtrasZoomableImageView *_zoomableImageView;
    NSArray *_gestureRecognizers;
    MPUExtrasZoomingImageInteractiveTransitionSourceContext *_interactiveTransitionSourceContext;
    UIView *_textContainmentView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_descriptionLabel;
    MPUContentSizeLayoutConstraint *_topLabelConstraint;
    MPUContentSizeLayoutConstraint *_subtitleLeadingConstraint;
    MPUContentSizeLayoutConstraint *_descriptionLeadingConstraint;
    MPUContentSizeLayoutConstraint *_bottomLabelConstraint;
}

- (void)_handleSingleTap:(id)arg1;
@property(retain, nonatomic) NSAttributedString *descriptionString;
@property(retain, nonatomic) MPUContentSizeLayoutConstraint *topLabelConstraint; // @synthesize topLabelConstraint=_topLabelConstraint;
@property(nonatomic) unsigned int imageIndex; // @synthesize imageIndex=_imageIndex;
@property(nonatomic) BOOL overlayHidden; // @synthesize overlayHidden=_overlayHidden;
@property(retain, nonatomic) MPUExtrasZoomableImageView *zoomableImageView; // @synthesize zoomableImageView=_zoomableImageView;
@property(retain, nonatomic) MPUContentSizeLayoutConstraint *descriptionLeadingConstraint; // @synthesize descriptionLeadingConstraint=_descriptionLeadingConstraint;
@property(retain, nonatomic) MPUContentSizeLayoutConstraint *subtitleLeadingConstraint; // @synthesize subtitleLeadingConstraint=_subtitleLeadingConstraint;
@property(retain, nonatomic) UIView *textContainmentView; // @synthesize textContainmentView=_textContainmentView;
@property(retain, nonatomic) MPUContentSizeLayoutConstraint *bottomLabelConstraint; // @synthesize bottomLabelConstraint=_bottomLabelConstraint;
@property(nonatomic) BOOL allowsPinchingImageForInteractiveZoomingImageTransition; // @synthesize allowsPinchingImageForInteractiveZoomingImageTransition=_allowsPinchingImageForInteractiveZoomingImageTransition;
@property(retain, nonatomic) MPUExtrasZoomingImageInteractiveTransitionSourceContext *interactiveTransitionSourceContext; // @synthesize interactiveTransitionSourceContext=_interactiveTransitionSourceContext;
@property(copy, nonatomic) NSString *zoomingImageTransitionIdentifier; // @synthesize zoomingImageTransitionIdentifier=_zoomingImageTransitionIdentifier;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) NSAttributedString *titleString;
- (void).cxx_destruct;
@property(retain, nonatomic) NSAttributedString *subtitleString;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)updateViewConstraints;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
@property(retain, nonatomic) UIImage *image;
@property(copy, nonatomic) NSArray *gestureRecognizers; // @synthesize gestureRecognizers=_gestureRecognizers;
- (BOOL)prefersStatusBarHidden;
- (void)dealloc;
- (void)_handleDoubleTap:(id)arg1;
- (void)_handlePinch:(id)arg1;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
