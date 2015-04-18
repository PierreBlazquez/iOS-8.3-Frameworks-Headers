//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MPUCZCollectionViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CADisplayLink, CAMediaTimingFunction, MPUCZCollectionViewController, MPUCoverMaskView, MPUDataSource, NSIndexPath, NSString, UIPinchGestureRecognizer, UIView;

@interface MPUCoverZoomViewController : UIViewController <MPUCZCollectionViewControllerDelegate, UIGestureRecognizerDelegate>
{
    MPUDataSource *_dataSource;
    id <MPUCoverZoomViewControllerDelegate> _delegate;
    UIViewController *_detailViewController;
    double _animationStartTimeInterval;
    double _animationDuration;
    float _animationEndProgress;
    float _animationStartProgress;
    CADisplayLink *_animationTimer;
    MPUCZCollectionViewController *_collectionViewController;
    int _coverCountPerColumn;
    MPUCoverMaskView *_maskView;
    float _pinchContentOffsetDelta;
    NSIndexPath *_pinchContentOffsetIndexPath;
    int _pinchDirection;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    BOOL _pinching;
    CAMediaTimingFunction *_timingFunction;
    UIView *_transformView;
    MPUCZCollectionViewController *_transitionCollectionViewController;
    int _transitionCoverCountPerColumn;
    struct CGSize _transitionEndItemSize;
    struct CGSize _transitionStartItemSize;
    float _transitionStartScale;
    struct CGAffineTransform _unzoomedAlbumViewTransform;
    BOOL _zoomed;
}

- (void)_displayLinkAction:(id)arg1;
- (id)initWithDataSource:(id)arg1;
- (void)detailViewControllerRequestsExit:(id)arg1;
- (void)_updateContentOffsetForCollectionView:(id)arg1;
- (void)_updateContentOffset;
- (float)_collectionViewHeightForItemSize:(struct CGSize)arg1 coverCountPerColumn:(unsigned int)arg2;
- (void)_endTransitionAtProgress:(float)arg1 velocity:(float)arg2;
- (void)_beginTransitionForScale:(float)arg1;
- (void)_setTransitionProgress:(float)arg1;
- (void)_removeTransitionCollectionViewForEndProgress:(float)arg1;
- (unsigned int)_defaultNumberOfRows;
- (unsigned int)_maximumNumberOfRows;
- (unsigned int)_minimumNumberOfRows;
- (void)_pinchAction:(id)arg1;
- (float)imageAspectRatio;
- (void)collectionViewController:(id)arg1 didSelectCell:(id)arg2 atIndexPath:(id)arg3;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (int)preferredStatusBarUpdateAnimation;
- (BOOL)prefersStatusBarHidden;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
@property(nonatomic) __weak id <MPUCoverZoomViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (struct CGSize)maximumImageSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
