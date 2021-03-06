//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class BRCSyncContext, BRCThrottle, NSDate, NSError, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSUUID;

@interface _BRCOperation : NSOperation
{
    BRCSyncContext *_syncContext;
    unsigned char _operationUUID[16];
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSDate *_startDate;
    NSDate *_lastTryDate;
    NSDate *_nextTryDate;
    NSError *_lastError;
    NSMutableArray *_subOperations;
    long long _throttleHash;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSObject<OS_dispatch_group> *_group;
    BOOL _finished;
    BOOL _executing;
    BOOL _usesBackgroundSession;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BRCThrottle *_operationThrottle;
    CDUnknownBlockType _mainBlock;
    CDUnknownBlockType _finishBlock;
    id _logSections;
}

- (void)addRegisterSubscriptionForZoneID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addZoneCreationWithZoneID:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) id logSections; // @synthesize logSections=_logSections;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
@property(copy, nonatomic) CDUnknownBlockType mainBlock; // @synthesize mainBlock=_mainBlock;
@property(nonatomic) BRCThrottle *operationThrottle; // @synthesize operationThrottle=_operationThrottle;
- (void)addSubOperation:(id)arg1;
- (void)completedWithResult:(id)arg1 error:(id)arg2;
- (void)schedule;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_lastError;
- (BOOL)isConcurrent;
- (id)initWithName:(id)arg1 zone:(id)arg2;
- (id)initWithName:(id)arg1 zone:(id)arg2 group:(id)arg3;
- (id)initWithName:(id)arg1 syncContext:(id)arg2;
- (void)addSubOperation:(id)arg1 overrideContext:(id)arg2;
@property(readonly, nonatomic) NSUUID *operationID;
@property(nonatomic) BOOL usesBackgroundSession; // @synthesize usesBackgroundSession=_usesBackgroundSession;
- (void)_completedWithResult:(id)arg1 error:(id)arg2;
- (BOOL)shouldRetryForError:(id)arg1;
@property(nonatomic, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
- (void)_scheduleExecutionWithPreviousError:(id)arg1 throttle:(id)arg2;
- (BOOL)finishIfCancelled;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
- (void)_executeAndBumpThrottle:(id)arg1;
- (void)_main;
@property(nonatomic, getter=isExecuting) BOOL executing; // @synthesize executing=_executing;
- (BOOL)_finishIfCancelled;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
@property(readonly, nonatomic) BRCSyncContext *syncContext; // @synthesize syncContext=_syncContext;
- (id)initWithName:(id)arg1 syncContext:(id)arg2 group:(id)arg3;
- (void).cxx_destruct;
- (void)main;
- (void)start;
- (id)_description;
- (id)state;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)cancel;

@end

