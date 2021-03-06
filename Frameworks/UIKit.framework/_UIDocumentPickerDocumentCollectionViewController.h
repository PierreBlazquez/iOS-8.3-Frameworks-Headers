//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "_UIDocumentPickerContainedViewController.h"

@class NSArray, NSString, UIActivityIndicatorView, _UIDocumentPickerContainerModel, _UIDocumentPickerSortOrderView;

@interface _UIDocumentPickerDocumentCollectionViewController : UICollectionViewController <UICollectionViewDataSource, UICollectionViewDelegate, _UIDocumentPickerContainedViewController>
{
    id <_UIDocumentPickerServiceViewController> _weak_serviceViewController;
    BOOL _shouldHideSortBar;
    BOOL _updatesMayAnimate;
    _UIDocumentPickerContainerModel *_model;
    id _monitoringToken;
    _UIDocumentPickerSortOrderView *_sortView;
    NSArray *_modelObjects;
    UIActivityIndicatorView *_initialActivityView;
}

@property(nonatomic) BOOL updatesMayAnimate; // @synthesize updatesMayAnimate=_updatesMayAnimate;
@property(retain, nonatomic) id monitoringToken; // @synthesize monitoringToken=_monitoringToken;
@property(nonatomic) BOOL shouldHideSortBar; // @synthesize shouldHideSortBar=_shouldHideSortBar;
- (void)_updateIconSpacing;
- (void)setMonitoring:(BOOL)arg1;
- (void)_unlockAnimations;
- (void)_dynamicTypeSizeChanged:(id)arg1;
@property(retain, nonatomic) UIActivityIndicatorView *initialActivityView; // @synthesize initialActivityView=_initialActivityView;
@property(retain, nonatomic) _UIDocumentPickerSortOrderView *sortView; // @synthesize sortView=_sortView;
- (void)scrollSortViewToVisible;
@property(retain, nonatomic) _UIDocumentPickerContainerModel *model; // @synthesize model=_model;
- (id)initWithModel:(id)arg1;
- (void)containersChangedWithSnapshot:(id)arg1 differences:(id)arg2;
@property(nonatomic) __weak id <_UIDocumentPickerServiceViewController> serviceViewController;
@property(copy, nonatomic) NSArray *modelObjects; // @synthesize modelObjects=_modelObjects;
- (void)viewDidAppear:(BOOL)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

