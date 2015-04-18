//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLAlbumContainer.h"
#import "PLAssetContainerListChangeObserver.h"

@class NSMutableOrderedSet, NSString;

@interface PLAggregateAlbumList : NSObject <PLAssetContainerListChangeObserver, PLAlbumContainer>
{
    NSMutableOrderedSet *_allAlbums;
    NSMutableOrderedSet *_childAlbumLists;
    int _filter;
}

+ (struct NSObject *)albumListWithFilter:(int)arg1 inPhotoLibrary:(id)arg2;
- (void)_invalidateAllAlbums;
- (id)initWithFilter:(int)arg1 inPhotoLibrary:(id)arg2;
- (void)assetContainerListDidChange:(id)arg1;
@property(readonly, nonatomic) unsigned int unreadAlbumsCount;
- (void)preheatAlbumsForProperties:(id)arg1 relationships:(id)arg2;
- (void)updateAlbumsOrderIfNeeded;
- (BOOL)needsReordering;
- (void)setNeedsReordering;
- (BOOL)albumHasFixedOrder:(struct NSObject *)arg1;
- (void)preheatAlbumsAtIndexes:(id)arg1 forProperties:(id)arg2 relationships:(id)arg3;
@property(readonly, copy, nonatomic) CDUnknownBlockType albumsSortingComparator;
- (BOOL)canEditAlbums;
- (BOOL)hasAtLeastOneAlbum;
@property(readonly, retain, nonatomic) NSString *_typeDescription;
- (short)albumListType;
@property(readonly, nonatomic) unsigned int containersCount;
- (id)containersRelationshipName;
- (BOOL)canEditContainers;
- (id)containers;
@property(nonatomic) int filter; // @synthesize filter=_filter;
@property(readonly, retain, nonatomic) NSString *_prettyDescription;
@property(readonly, nonatomic) unsigned int albumsCount;
- (id)photoLibrary;
@property(readonly, nonatomic) BOOL isFolder;
- (id)albums;
- (id)managedObjectContext;
- (BOOL)isEmpty;
- (id)identifier;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
