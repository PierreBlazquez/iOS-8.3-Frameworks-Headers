//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIStorePageSection.h>

#import "SKUIArtworkRequestDelegate.h"
#import "SKUIGallerySwooshViewControllerDelegate.h"

@class NSMapTable, NSString, SKUIGallerySwooshViewController, SKUISwooshPageComponent;

@interface SKUIGallerySwooshPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIGallerySwooshViewControllerDelegate>
{
    NSMapTable *_componentArtworkRequests;
    SKUIGallerySwooshViewController *_swooshViewController;
}

- (void)swoosh:(id)arg1 didChangePlaybackState:(int)arg2 forItemAtIndex:(int)arg3;
- (id)_newArtworkRequestWithArtwork:(id)arg1;
- (void)swoosh:(id)arg1 willDisplayCellAtIndex:(int)arg2;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(int)arg2;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(int)arg2;
- (id)_swooshViewController;
- (void)_addImpressionForIndex:(int)arg1 toSession:(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (int)numberOfCells;
- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize)cellSizeForIndexPath:(id)arg1;
- (void)prefetchResourcesWithReason:(int)arg1;
- (void)willAppearInContext:(id)arg1;
- (id)initWithPageComponent:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) SKUISwooshPageComponent *pageComponent; // @dynamic pageComponent;
@property(readonly) Class superclass;

@end

