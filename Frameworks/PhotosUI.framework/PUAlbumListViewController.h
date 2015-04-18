//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "PLCloudFeedNavigating.h"
#import "PLNavigableAssetContainerListViewController.h"
#import "PLNavigablePhotoStreamViewController.h"
#import "PUAlbumListTableViewCellDelegate.h"
#import "PUAlbumStreamActivityDelegate.h"
#import "PUCollectionViewReorderDelegate.h"
#import "PUFeedRecentsManagerDelegate.h"
#import "PUPhotoLibraryUIChangeObserver.h"
#import "PUSearchViewControllerDelegate.h"
#import "PUSectionedGridLayoutDelegate.h"
#import "PUStackedAlbumControllerTransition.h"
#import "PUStackedAlbumTransitionDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIPopoverPresentationControllerDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, PHCachingImageManager, PHCollection, PHCollectionList, PHFetchResult, PUAlbumListTransitionContext, PUAlbumListViewControllerSpec, PUAlbumStreamActivity, PUCollageView, PUCollectionView, PUFeedRecentsManager, PUFeedViewController, PULongPressableBarButtonItem, PUPhotoPinchGestureRecognizer, PUPhotosGlobalFooterView, PUPhotosGridViewController, PUSearchButtonItem, PUSearchViewController, PUSectionedGridLayout, PUSessionInfo, UIAlertAction, UIBarButtonItem, UICollectionViewLayout, UITableView, UIView, _UIContentUnavailableView;

@interface PUAlbumListViewController : UIViewController <UIGestureRecognizerDelegate, PUStackedAlbumTransitionDelegate, PUAlbumStreamActivityDelegate, PUFeedRecentsManagerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, PUCollectionViewReorderDelegate, PUSectionedGridLayoutDelegate, UITableViewDataSource, UITableViewDelegate, PUAlbumListTableViewCellDelegate, UIPopoverPresentationControllerDelegate, UISearchBarDelegate, PUSearchViewControllerDelegate, PUPhotoLibraryUIChangeObserver, PLNavigableAssetContainerListViewController, PLCloudFeedNavigating, PLNavigablePhotoStreamViewController, PUStackedAlbumControllerTransition>
{
    PUAlbumListViewControllerSpec *_spec;
    struct CGRect _lastLayoutUpdateBounds;
    UIBarButtonItem *_doneButtonItem;
    UIBarButtonItem *_cancelButtonItem;
    PULongPressableBarButtonItem *_albumCreationButtonItem;
    PUSearchButtonItem *_searchButtonItem;
    PUAlbumStreamActivity *_albumStreamActivity;
    NSString *_albumSubtitleFormat;
    BOOL _showAddNewAlbumPlaceholder;
    PUCollageView *_aggregateCollageView;
    NSMutableDictionary *_subCollectionFetchResultsCache;
    NSOperationQueue *_subCollectionFetchOperationQueue;
    BOOL _performedInitialCountsFade;
    NSMutableDictionary *_subCollectionKeyAssetFetchResultsCache;
    NSMutableSet *_changedSubCollections;
    NSMutableDictionary *_collectionIndexByCollection;
    BOOL _isRootSharedAlbumList;
    BOOL _isRootFolder;
    BOOL _viewInSyncWithModel;
    BOOL __aboutToCreateAlbum;
    BOOL __isKeyboardAware;
    BOOL _progressViewVisible;
    BOOL _disallowsSearch;
    NSArray *__syncProgressAlbums;
    PUSessionInfo *_sessionInfo;
    PHCollectionList *_collectionList;
    PHFetchResult *_collectionsFetchResult;
    PHFetchResult *_filteredFetchResult;
    PHCollection *_retitlingCollection;
    PHCachingImageManager *__cachingImageManager;
    PUFeedRecentsManager *__feedRecentsManager;
    PUCollageView *__feedCollageView;
    _UIContentUnavailableView *__emptyPlaceholderView;
    UIView *__backgroundView;
    NSString *__justCreatedCollectionIdentifier;
    CDUnknownBlockType __justCreatedCollectionAnimationCompletionHandler;
    CDUnknownBlockType __onViewDidLayoutSubviewsBlock;
    PUPhotosGlobalFooterView *_syncProgressView;
    PHCollection *_pushedAlbum;
    UIViewController *_pushedController;
    PUPhotoPinchGestureRecognizer *__photoPinchGestureRecognizer;
    PUFeedViewController *__cachedFeedViewController;
    NSMutableSet *__preheatedCollections;
    PUCollectionView *__mainCollectionView;
    PUSectionedGridLayout *__mainCollectionViewLayout;
    PUAlbumListTransitionContext *_albumListTransitionContext;
    UICollectionViewLayout *__albumListTransitionLayout;
    UITableView *__mainTableView;
    int __ignoredReorderNotificationCount;
    PUSearchViewController *__modalSearchViewController;
    PUPhotosGridViewController *__modalSearchResultsViewController;
    UIAlertAction *__createAlbumAlertAction;
    NSMutableDictionary *__subCollectionActiveCountFetchOperations;
    struct CGRect __previousPreheatRect;
}

@property(nonatomic) BOOL isRootFolder; // @synthesize isRootFolder=_isRootFolder;
@property(retain, nonatomic) PUSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void).cxx_destruct;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (int)tableViewStyle;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (BOOL)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)collectionView;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (BOOL)isEmpty;
- (BOOL)shouldAutorotate;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)indexPathsForVisibleItems;
- (int)numberOfSections;
- (int)numberOfItemsInSection:(int)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (void)dealloc;
@property(nonatomic, setter=_setKeyboardAware:) BOOL _isKeyboardAware; // @synthesize _isKeyboardAware=__isKeyboardAware;
@property(retain, nonatomic) PUCollageView *_feedCollageView; // @synthesize _feedCollageView=__feedCollageView;
@property(retain, nonatomic) PUFeedRecentsManager *_feedRecentsManager; // @synthesize _feedRecentsManager=__feedRecentsManager;
- (BOOL)_someAlbumSupportsEditing;
- (id)_neededAlbumRelationships;
- (id)_neededAlbumProperties;
- (BOOL)showsSeparatorBelowTopPlaceholdersSection;
- (unsigned int)_unfilteredIndexForFilteredIndex:(unsigned int)arg1;
- (id)_targetIndexPathForMoveFromIndexPath:(id)arg1 toProposedIndexPath:(id)arg2;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (BOOL)_isCachedFetchResultOutdatedForCollection:(id)arg1;
- (id)_visibleStackViewForCollection:(id)arg1;
- (id)newCloudFeedViewController;
- (BOOL)_canUseStackTransitionFromCollection:(id)arg1;
- (id)_createControllerForFolder:(id)arg1;
- (id)_createControllerForStandInCollection:(id)arg1;
@property(retain, nonatomic) PHCollection *retitlingCollection; // @synthesize retitlingCollection=_retitlingCollection;
- (BOOL)shouldBeginRetitlingAlbumAtIndexPath:(id)arg1;
- (void)_setCollection:(id)arg1 cellContentView:(id)arg2 pinned:(BOOL)arg3;
- (void)handleDeleteAlbumAtIndexPath:(id)arg1;
- (id)indexPathForAlbumListCellContentView:(id)arg1;
- (id)indexPathForCloudFeedPlaceholder;
@property(retain, nonatomic) UIViewController *pushedController; // @synthesize pushedController=_pushedController;
- (BOOL)_updateInterfaceForIncrementalModelChange:(CDUnknownBlockType)arg1 withFetchResultChangeDetails:(id)arg2 animated:(BOOL)arg3;
- (BOOL)_updateCachedSubCollectionFetchResultsForChange:(id)arg1 removedObjects:(id)arg2 changedObjects:(id)arg3;
- (void)setSyncProgressVisible:(BOOL)arg1;
- (void)updateSyncProgress;
- (BOOL)canShowSyncProgress;
- (void)deselectSelectedItemAnimated:(BOOL)arg1;
- (void)selectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) PHCollection *pushedAlbum; // @synthesize pushedAlbum=_pushedAlbum;
@property(copy, nonatomic, setter=_setOnViewDidLayoutSubviewsBlock:) CDUnknownBlockType _onViewDidLayoutSubviewsBlock; // @synthesize _onViewDidLayoutSubviewsBlock=__onViewDidLayoutSubviewsBlock;
- (void)updateInterfaceLayoutIfNecessary;
@property(retain, nonatomic, setter=_setMainTableView:) UITableView *_mainTableView; // @synthesize _mainTableView=__mainTableView;
- (id)backgroundColorForTableView;
- (id)indexPathsForItemsInRect:(struct CGRect)arg1;
@property(retain, nonatomic, setter=_setPreheatedCollections:) NSMutableSet *_preheatedCollections; // @synthesize _preheatedCollections=__preheatedCollections;
- (id)_getDisplayableAssetsForStandInCollectionList:(id)arg1 maximumCount:(int)arg2 useCache:(BOOL)arg3;
- (id)_getDisplayableFacesForCollectionList:(id)arg1 maximumCount:(int)arg2;
- (void)_getDisplayableAssets:(id *)arg1 indexes:(id *)arg2 forCollection:(id)arg3 maximumCount:(int)arg4 useCache:(BOOL)arg5;
- (id)mainScrollView;
- (id)newGridViewControllerForStandInCollection:(id)arg1;
- (void)_beginInteractiveZoomOut:(id)arg1;
- (void)_beginInteractiveNavigationForItemAtPoint:(struct CGPoint)arg1;
@property(retain, nonatomic, setter=_setCachedFeedViewController:) PUFeedViewController *_cachedFeedViewController; // @synthesize _cachedFeedViewController=__cachedFeedViewController;
- (BOOL)_collectionIsImports:(id)arg1;
- (BOOL)_collectionIsCloudSharedAndOwned:(id)arg1;
- (void)_allChildAssetCollections:(id)arg1 andCollectionLists:(id)arg2 ofFolder:(id)arg3;
@property(nonatomic, setter=_setCreateAlbumAlertAction:) __weak UIAlertAction *_createAlbumAlertAction; // @synthesize _createAlbumAlertAction=__createAlbumAlertAction;
- (void)_updateCreateAlbumTextField:(id)arg1;
@property(retain, nonatomic, setter=_setJustCreatedCollectionIdentifier:) NSString *_justCreatedCollectionIdentifier; // @synthesize _justCreatedCollectionIdentifier=__justCreatedCollectionIdentifier;
@property(nonatomic, setter=_setAboutToCreateAlbum:) BOOL _aboutToCreateAlbum; // @synthesize _aboutToCreateAlbum=__aboutToCreateAlbum;
- (BOOL)_validateNewCollectionTitle:(id)arg1;
- (void)_handleCreateAlbumOrFolder:(BOOL)arg1;
- (void)handleSessionInfoAlbumSelection:(id)arg1;
- (BOOL)_collectionIsStandIn:(id)arg1;
- (void)_didSelectPlaceholderAtIndexPath:(id)arg1;
- (void)navigateToAllPhotosAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_recursivelyCollectCollectionsIn:(id)arg1 fetchResult:(id)arg2;
- (void)handleCreateFolder;
- (void)handleCreateAlbum;
- (void)handleCreateSharedAlbum;
- (BOOL)showAddNewAlbumPlaceholder;
@property(readonly, nonatomic) int bottomPlaceholdersSection;
@property(readonly, nonatomic) int topPlaceholdersSection;
- (BOOL)showsBottomPlaceholdersSection;
- (BOOL)showsTopPlaceholdersSection;
- (BOOL)shouldShowActivityItem;
- (BOOL)_collectionIsSmartFolder:(id)arg1;
- (id)_uncachedKeyAssetFetchResultForSubCollection:(id)arg1;
- (id)_uncachedFetchResultForSubCollection:(id)arg1;
- (void)_updateVisibleCountsForCollection:(id)arg1 withWithFetchResult:(id)arg2;
- (void)_fetchAndUpdateCountsForCollection:(id)arg1;
- (BOOL)_collectionIsSynced:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *_subCollectionActiveCountFetchOperations; // @synthesize _subCollectionActiveCountFetchOperations=__subCollectionActiveCountFetchOperations;
- (BOOL)_collectionIsEvents:(id)arg1;
@property(nonatomic) BOOL progressViewVisible; // @synthesize progressViewVisible=_progressViewVisible;
@property(retain, nonatomic) PUPhotosGlobalFooterView *syncProgressView; // @synthesize syncProgressView=_syncProgressView;
- (void)_prepareStackView:(id)arg1 forCollection:(id)arg2 withStackCount:(int)arg3 withCustomEmptyPlaceHolderImage:(id)arg4;
- (BOOL)_collectionIsFolder:(id)arg1;
- (void)_updateCollageView:(id)arg1 forAssets:(id)arg2;
- (int)placeholderKindAtIndexPath:(id)arg1;
- (id)subtitleForCollection:(id)arg1;
- (void)setTitleForCell:(id)arg1 withCollection:(id)arg2;
- (void)_updateStackView:(id)arg1 forAssets:(id)arg2 collection:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4;
- (BOOL)_collectionIsHiddenAlbum:(id)arg1;
- (BOOL)_collectionIsCloudShared:(id)arg1;
- (void)_updateStackView:(id)arg1 forFaces:(id)arg2 inCollection:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4;
- (BOOL)_collectionIsFaces:(id)arg1;
- (id)_visibleAssetsForCollection:(id)arg1;
- (BOOL)_isCollectionPinned:(id)arg1;
- (BOOL)shouldEnableCollection:(id)arg1;
- (void)updateAlbumListCellContentView:(id)arg1 forItemAtIndexPath:(id)arg2 animated:(BOOL)arg3;
- (void)updatePlaceholderListCellContentView:(struct PUAlbumListCellContentView *)arg1 forItemAtIndexPath:(id)arg2 animated:(BOOL)arg3;
- (struct PUAlbumListCellContentView *)visiblePlaceholderListCellContentViewAtIndexPath:(id)arg1;
- (BOOL)isPlaceholderAtIndexPath:(id)arg1;
@property(nonatomic, getter=isViewInSyncWithModel) BOOL viewInSyncWithModel; // @synthesize viewInSyncWithModel=_viewInSyncWithModel;
- (id)indexPathForAddNewAlbumPlaceholder;
- (BOOL)_shouldShowAggregateItem;
- (BOOL)showsEmptyPlaceholderWhenEmpty;
@property(nonatomic, setter=_setIgnoredReorderNotificationCount:) int _ignoredReorderNotificationCount; // @synthesize _ignoredReorderNotificationCount=__ignoredReorderNotificationCount;
- (void)updateListCellForItemAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)scrollToItemAtIndexPath:(id)arg1 centered:(BOOL)arg2 animated:(BOOL)arg3;
- (id)_visibleStackViewAtIndexPath:(id)arg1;
- (id)indexPathForCollection:(id)arg1;
- (id)visibleAlbumListCellContentViewAtIndexPath:(id)arg1;
- (unsigned int)_editCapabilitiesForAlbum:(id)arg1;
- (BOOL)canReorderCollection:(id)arg1;
- (BOOL)canRenameCollection:(id)arg1;
- (BOOL)canDeleteCollection:(id)arg1;
- (id)_searchButtonItem;
@property(nonatomic) BOOL disallowsSearch; // @synthesize disallowsSearch=_disallowsSearch;
- (id)_albumCreationButtonItem;
@property(readonly, nonatomic) BOOL isRootSharedAlbumList; // @synthesize isRootSharedAlbumList=_isRootSharedAlbumList;
- (void)_performBatchUpdates:(CDUnknownBlockType)arg1 withDeletedIndexPaths:(id)arg2 insertedIndexPaths:(id)arg3 changedIndexPaths:(id)arg4 movedFromIndexPaths:(id)arg5 movedToIndexPaths:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
@property(copy, nonatomic, setter=_setJustCreatedCollectionAnimationCompletionHandler:) CDUnknownBlockType _justCreatedCollectionAnimationCompletionHandler; // @synthesize _justCreatedCollectionAnimationCompletionHandler=__justCreatedCollectionAnimationCompletionHandler;
- (void)_visiblyInsertItemAtIndexPath:(id)arg1 modelUpdate:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)collectionAtIndexPath:(id)arg1;
@property(readonly, nonatomic) int albumsSection;
- (id)_changedSubCollectionIndexes;
- (void)reloadContentView;
@property(retain, nonatomic) PHFetchResult *collectionsFetchResult; // @synthesize collectionsFetchResult=_collectionsFetchResult;
@property(retain, nonatomic) PHFetchResult *filteredFetchResult; // @synthesize filteredFetchResult=_filteredFetchResult;
- (void)_updateCollectionIndexMappingForFilteredFetchResult;
- (id)_newFilteredFetchResultFromFetchResult:(id)arg1 collectionList:(id)arg2;
- (BOOL)_containsAnyAssets:(id)arg1;
- (id)_cachedFetchResultForSubCollection:(id)arg1;
- (id)_cachedKeyAssetFetchResultForSubCollection:(id)arg1;
- (void)_updateFilteredFetchResult;
- (void)_updateAddNewAlbumPlaceholderAnimated:(BOOL)arg1;
- (void)_handleAlbumOrFolderCreation:(id)arg1;
- (void)_handleAlbumCreation:(id)arg1;
- (void)_performInitialCountsFadeIfNeeded;
- (void)_updateMainView;
- (void)setKeyboardAware:(BOOL)arg1;
- (void)_updateAlbumSubtitleFormat;
- (void)albumListTableViewCell:(id)arg1 willChangeState:(unsigned int)arg2;
- (void)albumStreamActivity:(id)arg1 didFinishSuccessfully:(BOOL)arg2;
- (id)newGridViewControllerForAllPhotos;
- (BOOL)shouldShowAllPhotosItem;
- (BOOL)shouldAllowEmailInAlbumSubtitle;
- (id)newGridViewControllerForAssetCollection:(id)arg1;
- (id)newGridViewControllerForFolder:(id)arg1;
- (void)_updateEmptyPlaceholderAnimated:(BOOL)arg1;
- (void)_handlePhotoPinchGestureRecognizer:(id)arg1;
- (void)albumStreamActivity:(id)arg1 didCreateAlbum:(struct NSObject *)arg2;
- (id)_suppressionContexts;
- (BOOL)_appAllowsSupressionOfAlerts;
- (void)feedRecentsManagerRecentAssetsDidChange:(id)arg1;
- (id)_nextCloudFeedNavigatingObject;
- (void)navigateToRevealAssetCollection:(id)arg1 initiallyHidden:(BOOL)arg2 animated:(BOOL)arg3;
- (void)navigateToCollection:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)navigateToPhotoStreamMode:(int)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic, setter=_setMainCollectionViewLayout:) PUSectionedGridLayout *_mainCollectionViewLayout; // @synthesize _mainCollectionViewLayout=__mainCollectionViewLayout;
@property(retain, nonatomic, setter=_setMainCollectionView:) PUCollectionView *_mainCollectionView; // @synthesize _mainCollectionView=__mainCollectionView;
- (void)_updatePreheatedAssets;
- (void)_updateInterfaceForModelReloadAnimated:(BOOL)arg1;
- (void)_updatePeripheralInterfaceAnimated:(BOOL)arg1;
- (void)_resetPreheating;
- (id)initWithSpec:(id)arg1 isRootSharedAlbumList:(BOOL)arg2;
@property(readonly, nonatomic) PUAlbumListViewControllerSpec *spec;
@property(retain, nonatomic) PHCollectionList *collectionList; // @synthesize collectionList=_collectionList;
- (id)_doneButtonItem;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)prepareForPhotoLibraryChange:(id)arg1;
- (BOOL)cloudFeedInvitationForAlbumIsAvailableForNavigation:(id)arg1;
- (BOOL)cloudFeedCommentIsAvailableForNavigation:(id)arg1;
- (BOOL)cloudFeedAssetIsAvailableForNavigation:(id)arg1;
- (id)stackedAlbumTransition:(id)arg1 layoutForCollection:(id)arg2 forCollectionView:(id)arg3;
- (id)stackedAlbumTransition:(id)arg1 layoutForPHCollection:(id)arg2 forCollectionView:(id)arg3;
- (void)stackedAlbumTransition:(id)arg1 setVisibility:(BOOL)arg2 forCollection:(id)arg3;
- (void)stackedAlbumTransition:(id)arg1 setVisibility:(BOOL)arg2 forPHCollection:(id)arg3;
@property(retain, nonatomic, setter=_setPhotoPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *_photoPinchGestureRecognizer; // @synthesize _photoPinchGestureRecognizer=__photoPinchGestureRecognizer;
- (void)_handleDoneButton:(id)arg1;
- (void)albumListCellContentView:(id)arg1 performPinAction:(id)arg2;
- (void)albumListCellContentView:(id)arg1 performDeleteAction:(id)arg2;
- (void)albumListCellContentView:(id)arg1 didEndRetitingFromTitle:(id)arg2 toTitle:(id)arg3;
- (BOOL)albumListCellContentViewShouldBeginRetitling:(id)arg1;
- (id)sectionedGridLayout:(id)arg1 sectionsForVisualSection:(int)arg2;
- (int)numberOfVisualSectionsForSectionedGridLayout:(id)arg1;
@property(retain, nonatomic, setter=setAlbumListTransitionLayout:) UICollectionViewLayout *_albumListTransitionLayout; // @synthesize _albumListTransitionLayout=__albumListTransitionLayout;
- (BOOL)pu_handleSecondTabTap;
- (id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1;
- (void)handleTransitionFade:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setAlbumListTransitionLayout:(id)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) PUAlbumListTransitionContext *albumListTransitionContext; // @synthesize albumListTransitionContext=_albumListTransitionContext;
- (void)searchViewControllerDidCancel:(id)arg1;
- (void)searchViewController:(id)arg1 displaySearchResults:(id)arg2 orAlbum:(struct NSObject *)arg3 withTitle:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sessionInfoPhotoSelectionDidChange:(id)arg1;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 canReorderItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_dismissSearchViewControllerAnimated:(BOOL)arg1;
- (void)_searchResultsViewControllerDidFinish:(id)arg1;
@property(retain, nonatomic, setter=_setEmptyPlaceholderView:) _UIContentUnavailableView *_emptyPlaceholderView; // @synthesize _emptyPlaceholderView=__emptyPlaceholderView;
- (void)_handleCancelButton:(id)arg1;
- (id)_pickerBannerView;
- (id)_cancelButtonItem;
@property(retain, nonatomic, setter=_setModalSearchResultsViewController:) PUPhotosGridViewController *_modalSearchResultsViewController; // @synthesize _modalSearchResultsViewController=__modalSearchResultsViewController;
- (void)_updateNavigationBannerAnimated:(BOOL)arg1;
- (void)_didDismissSearchViewController;
- (void)_willDismissSearchViewControllerAnimated:(BOOL)arg1;
- (void)_presentSearchViewController:(id)arg1 forTraitCollection:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_updateSearchButtonTextForActiveSearchField:(BOOL)arg1;
- (void)searchViewController:(id)arg1 presentFromResultsViewController:(id)arg2 animated:(BOOL)arg3;
- (void)_adaptSearchViewController:(id)arg1 toTraitCollection:(id)arg2 animated:(BOOL)arg3;
@property(retain, nonatomic, setter=_setModalSearchViewController:) PUSearchViewController *_modalSearchViewController; // @synthesize _modalSearchViewController=__modalSearchViewController;
- (id)_activeSearchButtonItem;
- (void)_searchButtonPressed:(id)arg1;
- (id)gridLayout;
@property(nonatomic, setter=_setPreviousPreheatRect:) struct CGRect _previousPreheatRect; // @synthesize _previousPreheatRect=__previousPreheatRect;
- (void)searchViewController:(id)arg1 adaptToTraitCollection:(id)arg2;
@property(readonly, nonatomic) PHCachingImageManager *_cachingImageManager; // @synthesize _cachingImageManager=__cachingImageManager;
- (void)updateNavigationBarAnimated:(BOOL)arg1;
- (void)_invalidateSyncProgressAlbums;
@property(readonly, nonatomic) NSArray *_syncProgressAlbums; // @synthesize _syncProgressAlbums=__syncProgressAlbums;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(BOOL)arg4;
- (BOOL)updateSpec;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
