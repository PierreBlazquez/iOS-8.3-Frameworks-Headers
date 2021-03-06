//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLAssetContainerList.h"

@class NSOrderedSet, NSString;

@interface PUFeedAssetContainerList : NSObject <PLAssetContainerList>
{
    NSString *_transientIdentifier;
    NSOrderedSet *_sectionInfos;
}

@property(readonly, nonatomic) unsigned int containersCount;
- (id)containersRelationshipName;
- (BOOL)canEditContainers;
- (id)containers;
- (id)photoLibrary;
- (id)managedObjectContext;
- (void).cxx_destruct;
- (BOOL)isEmpty;
@property(readonly, nonatomic) NSString *transientIdentifier; // @synthesize transientIdentifier=_transientIdentifier;
@property(retain, nonatomic) NSOrderedSet *sectionInfos; // @synthesize sectionInfos=_sectionInfos;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

