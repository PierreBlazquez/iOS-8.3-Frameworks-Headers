//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PUGridRenderedStripDataSource.h"
#import "PUPhotosSectionHeaderViewDelegate.h"
#import "PUSectionedGridLayoutDelegate.h"

@class NSString, PHCachingImageManager, PUGridRenderedStrip, PUMomentsZoomLevelManager, PUSectionedGridLayout, PUZoomableGridViewController;

@interface PUGridZoomLevelInfo : NSObject <PUGridRenderedStripDataSource, PUPhotosSectionHeaderViewDelegate, PUSectionedGridLayoutDelegate>
{
    PUGridRenderedStrip *_currentRenderedStrip;
    BOOL _useFloatingHeaderGroupName;
    BOOL _summarizeSections;
    PHCachingImageManager *_cachingImageManager;
    PUSectionedGridLayout *_collectionViewLayout;
    unsigned int _zoomLevel;
    PUMomentsZoomLevelManager *_zoomLevelManager;
    PUGridZoomLevelInfo *_baseZoomLevelInfo;
    PUZoomableGridViewController *_zoomableGridViewController;
    float _pendingContentWidth;
    NSString *_displayTitle;
    int _maxRowsPerSection;
}

@property(readonly, nonatomic) unsigned int zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(readonly, nonatomic) int imageFormat;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property(readonly, nonatomic) PUSectionedGridLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(nonatomic) float pendingContentWidth; // @synthesize pendingContentWidth=_pendingContentWidth;
@property(readonly, nonatomic) PUGridZoomLevelInfo *baseZoomLevelInfo; // @synthesize baseZoomLevelInfo=_baseZoomLevelInfo;
- (void)_updateBackdropGroupNameForHeaderView:(id)arg1;
@property(nonatomic) BOOL summarizeSections; // @synthesize summarizeSections=_summarizeSections;
@property(readonly, nonatomic) double zoomOutDuration;
- (void)updateForSizeChangeIfNecessary;
@property(nonatomic) BOOL useFloatingHeaderGroupName;
- (void)renderedStrip:(id)arg1 enumerateAssetsForVisualSection:(int)arg2 inVisualItemRange:(struct _NSRange)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)renderedStrip:(id)arg1 imageDataForAsset:(id)arg2 imageWidth:(int *)arg3 imageHeight:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8;
- (id)imageDataForAsset:(id)arg1 itemContentScale:(float)arg2 imageWidth:(int *)arg3 imageHeight:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8;
- (void)modelDidChange:(id)arg1;
@property(readonly, nonatomic) int maxRowsPerSection; // @synthesize maxRowsPerSection=_maxRowsPerSection;
- (id)initWithZoomLevel:(unsigned int)arg1 zoomLevelManager:(id)arg2 baseZoomLevelInfo:(id)arg3;
- (id)assetsToDisplayInMapForVisualSection:(int)arg1;
- (id)diagnosticsProviderForVisualSection:(int)arg1;
- (id)newCollectionViewLayout;
@property(readonly, nonatomic) double zoomInDuration;
- (void)didTapHeaderView:(id)arg1;
- (void)headerView:(id)arg1 actionButtonPressed:(id)arg2;
- (id)sectionedGridLayoutName:(id)arg1;
- (void)sectionedGridLayout:(id)arg1 didInvalidateWithContext:(id)arg2;
- (struct CGPoint)sectionedGridLayout:(id)arg1 targetContentOffsetForProposedUpdatesContentOffset:(struct CGPoint)arg2;
- (int)sectionedGridLayout:(id)arg1 maximumRowsForVisualSection:(int)arg2;
- (void)sectionedGridLayout:(id)arg1 didFinalizePrepareTransitionIsAppearing:(BOOL)arg2;
@property(readonly, nonatomic) PHCachingImageManager *cachingImageManager; // @synthesize cachingImageManager=_cachingImageManager;
- (void)configureSectionHeaderView:(id)arg1 forVisualSection:(int)arg2;
@property(readonly, nonatomic) PUZoomableGridViewController *zoomableGridViewController; // @synthesize zoomableGridViewController=_zoomableGridViewController;
@property(readonly, nonatomic) NSString *renderedStripsElementKind;
- (BOOL)sectionedGridLayoutTransitionAutoAdjustContentOffsetEnabled:(id)arg1;
- (id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1;
- (void)sectionedGridLayout:(id)arg1 didPrepareTransitionIsAppearing:(BOOL)arg2;
- (void)didFinishZoomLevelTransition;
- (void)prepareForTransitionFromZoomLevelInfo:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3;
- (void)prepareForTransitionToZoomLevelInfo:(id)arg1 animated:(BOOL)arg2 interactive:(BOOL)arg3;
- (void)willHideMagnifiedViewController:(id)arg1;
- (void)willShowMagnifiedViewController:(id)arg1;
- (BOOL)wantsMagnifierNavigation;
- (BOOL)wantsAssetCountsVisible;
- (double)cellAspectRatioHint;
- (int)imageDeliveryMode;
- (BOOL)configureGridCell:(id)arg1 forIndexPath:(id)arg2;
- (BOOL)supportsEditMode;
- (int)cellFillMode;
- (void)updateLayoutMetricsForWidth:(float)arg1;
- (BOOL)supportsIncrementalChangeNotifications;
- (BOOL)wantsAutomaticContentOffsetAdjustment;
- (BOOL)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(BOOL)arg4;
@property(readonly, nonatomic) NSString *sectionHeaderElementKind;
@property(readonly, nonatomic) struct __CFString *aggregateLevelKey;
- (BOOL)wantsCloudStatusVisible;
- (void)registerReusableViewClassesForCollectionView:(id)arg1;
- (void)willAnimateSizeTransition;
@property(readonly, nonatomic) PUMomentsZoomLevelManager *zoomLevelManager; // @synthesize zoomLevelManager=_zoomLevelManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
