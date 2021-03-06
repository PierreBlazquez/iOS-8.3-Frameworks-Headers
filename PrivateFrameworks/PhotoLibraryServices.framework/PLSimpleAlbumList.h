//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLAssetContainerList.h"

@class NSOrderedSet, NSString;

@interface PLSimpleAlbumList : NSObject <PLAssetContainerList>
{
    NSOrderedSet *_containers;
}

@property(retain, nonatomic) NSOrderedSet *containers; // @synthesize containers=_containers;
- (id)initWithAssetContainer:(id)arg1;
@property(readonly, nonatomic) unsigned int containersCount;
- (id)containersRelationshipName;
- (BOOL)canEditContainers;
- (id)initWithAssetContainers:(id)arg1;
- (id)photoLibrary;
- (id)managedObjectContext;
- (BOOL)isEmpty;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

