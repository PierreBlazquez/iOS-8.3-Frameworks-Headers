//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PLDiagnosticsProvider.h"

@class NSMutableOrderedSet, NSObject<OS_dispatch_queue>, NSOrderedSet, NSSet, NSString;

@interface PUSearchResultDataSource : NSObject <PLDiagnosticsProvider>
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned int _taskId;
    NSMutableOrderedSet *_uncommittedContainers;
    NSSet *_uncommittedAssetUUIDs;
    NSOrderedSet *_containers;
    NSSet *_assetUUIDs;
    BOOL _hasPendingChanges;
    BOOL _finished;
    id <PUSearchResultDelegate> _delegate;
}

@property(readonly, nonatomic) NSSet *assetUUIDs; // @synthesize assetUUIDs=_assetUUIDs;
@property(readonly, nonatomic, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
- (void).cxx_destruct;
@property(nonatomic) __weak id <PUSearchResultDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)_inqClearPendingChanges;
- (BOOL)_isCancelledWithTaskId:(unsigned int)arg1;
- (void)updateAssetUUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchResult;
- (BOOL)_inqIsCancelledWithTaskId:(unsigned int)arg1;
- (void)mergePendingChanges;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

