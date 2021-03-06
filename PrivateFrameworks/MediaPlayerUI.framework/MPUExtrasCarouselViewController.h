//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MPUExtrasCarouselCollectionViewDelegate.h"
#import "MPUExtrasZoomingImageTransitionParticipant.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class MPUExtrasCarouselCollectionView, NSString, UICollectionViewLayout<MPUExtrasCarouselCollectionViewLayout>;

@interface MPUExtrasCarouselViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, MPUExtrasCarouselCollectionViewDelegate, MPUExtrasZoomingImageTransitionParticipant>
{
    BOOL _revealingNavigationBarDuringTransition;
    id <MPUExtrasCarouselViewControllerDataSource> _dataSource;
    id <MPUExtrasCarouselViewControllerDelegate> _delegate;
    MPUExtrasCarouselCollectionView *_carouselCollectionView;
    UICollectionViewLayout<MPUExtrasCarouselCollectionViewLayout> *_carouselCollectionViewLayout;
}

- (void)subviewsDidChangeForCarouselCollectionView:(id)arg1;
@property(retain, nonatomic) MPUExtrasCarouselCollectionView *carouselCollectionView; // @synthesize carouselCollectionView=_carouselCollectionView;
@property(retain, nonatomic) UICollectionViewLayout<MPUExtrasCarouselCollectionViewLayout> *carouselCollectionViewLayout; // @synthesize carouselCollectionViewLayout=_carouselCollectionViewLayout;
- (void)setIndexOfVisibleItem:(unsigned int)arg1 animated:(BOOL)arg2;
@property(nonatomic) unsigned int indexOfVisibleItem;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(BOOL)arg2;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
@property(nonatomic, getter=isRevealingNavigationBarDuringTransition) BOOL revealingNavigationBarDuringTransition; // @synthesize revealingNavigationBarDuringTransition=_revealingNavigationBarDuringTransition;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (id)carouselCollectionViewCellForItemAtIndex:(unsigned int)arg1;
- (void)_updateWindowSizeForVisibleCells;
- (void)_updateOpacityOfTextInVisibleCells;
- (BOOL)_isPhone;
- (void)_loadCarouselCollectionViewInView:(id)arg1 withContraintsAccumulator:(id)arg2;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
@property(nonatomic) __weak id <MPUExtrasCarouselViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MPUExtrasCarouselViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dealloc;
- (int)_numberOfItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

