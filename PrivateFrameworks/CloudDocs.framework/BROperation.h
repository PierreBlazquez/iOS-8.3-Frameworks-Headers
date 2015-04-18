//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSObject<BRCancellable>, NSObject<OS_dispatch_queue>;

@interface BROperation : NSOperation
{
    id _remoteOperation;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned char _uuid[16];
    BOOL _executing;
    BOOL _finished;
}

- (oneway void)setRemoteOperationProxy:(id)arg1 userInfo:(id)arg2;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_queue;
- (BOOL)_finishIfCancelled;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
@property(nonatomic) NSObject<BRCancellable> *remoteOperation; // @synthesize remoteOperation=_remoteOperation;
- (oneway void)progressCallbackWithTopic:(id)arg1 userInfo:(id)arg2;
- (id)remoteObject;
- (void)_setRemoteOperation:(id)arg1;
@property(readonly, getter=isExecuting) BOOL executing; // @synthesize executing=_executing;
@property(readonly, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
- (void)start;
- (oneway void)invalidate;
- (id)init;
- (void)dealloc;
- (void)cancel;
- (void)_setFinished:(BOOL)arg1;
- (void)_setExecuting:(BOOL)arg1;

@end
