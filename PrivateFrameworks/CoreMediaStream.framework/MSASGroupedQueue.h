//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSASServerSideModel, MSTimerGate, NSObject<OS_dispatch_queue>;

@interface MSASGroupedQueue : NSObject
{
    BOOL _isShuttingDown;
    BOOL _isAssertingBusyAssertion;
    MSASServerSideModel *_model;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_memberQueue;
    int _maxGroupedCallbackEventBatchCount;
    MSTimerGate *_idleTimerGate;
    MSTimerGate *_stalenessTimerGate;
    double _maxGroupedCallbackEventIdleInterval;
    double _maxGroupedCallbackEventStaleness;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) BOOL isAssertingBusyAssertion; // @synthesize isAssertingBusyAssertion=_isAssertingBusyAssertion;
- (void)workQueueRestartIdleTimer;
- (void)workQueueRestartStalenessTimer;
@property(retain, nonatomic) MSTimerGate *stalenessTimerGate; // @synthesize stalenessTimerGate=_stalenessTimerGate;
@property(retain, nonatomic) MSTimerGate *idleTimerGate; // @synthesize idleTimerGate=_idleTimerGate;
- (void)workQueueClearStalenessTimer;
- (void)workQueueClearIdleTimer;
- (void)memberQueueSetIsAssertingBusyAssertion:(BOOL)arg1;
- (BOOL)memberQueueIsAssertingBusyAssertion;
- (void)workQueueDeassertBusyAssertion;
- (void)workQueueAssertBusyAssertion;
- (void)deassertBusyAssertion;
- (void)assertBusyAssertion;
- (void)workQueueDidEnqueueSubsequentItem;
- (void)workQueueDidEnqueueFirstItem;
- (void)workQueueFlushQueue;
@property(nonatomic) BOOL isShuttingDown; // @synthesize isShuttingDown=_isShuttingDown;
- (void)flushQueueCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)hasEnqueuedItems;
- (void)shutDownFlush:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(nonatomic) double maxGroupedCallbackEventStaleness; // @synthesize maxGroupedCallbackEventStaleness=_maxGroupedCallbackEventStaleness;
@property(nonatomic) double maxGroupedCallbackEventIdleInterval; // @synthesize maxGroupedCallbackEventIdleInterval=_maxGroupedCallbackEventIdleInterval;
@property(nonatomic) int maxGroupedCallbackEventBatchCount; // @synthesize maxGroupedCallbackEventBatchCount=_maxGroupedCallbackEventBatchCount;
@property(nonatomic) __weak MSASServerSideModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
- (id)init;
- (void)dealloc;

@end

