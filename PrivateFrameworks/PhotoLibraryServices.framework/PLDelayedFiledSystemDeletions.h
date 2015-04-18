//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface PLDelayedFiledSystemDeletions : NSObject
{
    NSMutableArray *_deletionInfos;
}

+ (id)filesystemDeletionQueue;
+ (id)deletionsFromChangeHubEvent:(id)arg1;
+ (void)appendDescriptionForEvent:(id)arg1 toComponents:(id)arg2;
+ (void)waitForAllDelayedDeletionsToFinish;
- (id)initWithFilesystemDeletionInfos:(id)arg1;
- (void)appendToXPCMessage:(id)arg1 managedObjectContext:(id)arg2;
- (void)deleteAllRemainingFilesAndThumbnailsWithPhotoLibrary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addFilesystemDeletionInfo:(id)arg1;
- (id)debugDescription;
- (void)dealloc;

@end
