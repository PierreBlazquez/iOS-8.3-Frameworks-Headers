//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CommunicationsFilterBlockListCache, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface CommunicationsFilterBlockList : NSObject
{
    NSObject<OS_xpc_object> *_connection;
    int _retries;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_recentObjectsTested;
    CommunicationsFilterBlockListCache *_cache;
}

+ (id)sharedInstance;
- (void)_disconnected;
- (id)copyAllItems;
- (BOOL)_connect;
- (BOOL)isItemInList:(id)arg1;
- (void)removeItemForAllServices:(id)arg1;
- (void)addItemForAllServices:(id)arg1;
- (void)_sendXPCRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_sendSynchronousXPCRequest:(id)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)_disconnect;

@end

