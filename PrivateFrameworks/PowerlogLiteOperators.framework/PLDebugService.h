//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLService.h"

@class PLEntryNotificationOperatorComposition, PLSemaphore, PLXPCListenerOperatorComposition, PLXPCResponderOperatorComposition;

@interface PLDebugService : PLService
{
    PLXPCListenerOperatorComposition *_xpcListenerPLLog;
    PLXPCResponderOperatorComposition *_xpcResponderPLLog;
    PLXPCListenerOperatorComposition *_aggregateTestListener;
    PLXPCResponderOperatorComposition *_aggregateTestResponder;
    PLXPCListenerOperatorComposition *_schemaTestListener;
    PLEntryNotificationOperatorComposition *_assertionListener;
    PLEntryNotificationOperatorComposition *_assertionNewListener;
    PLEntryNotificationOperatorComposition *_assertionUpdateListener;
    PLEntryNotificationOperatorComposition *_canSleepNotification;
    PLSemaphore *_canSleepSemaphore;
    PLEntryNotificationOperatorComposition *_sleepNotification;
    PLEntryNotificationOperatorComposition *_wakeNotification;
}

+ (id)entryEventNoneDefinitionFastInsertTest;
+ (id)entryEventNoneDefinitionSleepNotificationTest;
+ (id)entryEventNoneDefinitionArrayTest;
+ (id)entryAggregateDefinitionAggregateTest;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)railDefinitions;
+ (void)load;
@property(retain) PLEntryNotificationOperatorComposition *sleepNotification; // @synthesize sleepNotification=_sleepNotification;
@property(retain) PLEntryNotificationOperatorComposition *assertionUpdateListener; // @synthesize assertionUpdateListener=_assertionUpdateListener;
@property(retain) PLEntryNotificationOperatorComposition *assertionNewListener; // @synthesize assertionNewListener=_assertionNewListener;
@property(retain) PLEntryNotificationOperatorComposition *assertionListener; // @synthesize assertionListener=_assertionListener;
@property(retain) PLXPCListenerOperatorComposition *schemaTestListener; // @synthesize schemaTestListener=_schemaTestListener;
@property(retain) PLXPCResponderOperatorComposition *aggregateTestResponder; // @synthesize aggregateTestResponder=_aggregateTestResponder;
@property(retain) PLXPCListenerOperatorComposition *aggregateTestListener; // @synthesize aggregateTestListener=_aggregateTestListener;
@property(retain) PLXPCResponderOperatorComposition *xpcResponderPLLog; // @synthesize xpcResponderPLLog=_xpcResponderPLLog;
@property(retain) PLXPCListenerOperatorComposition *xpcListenerPLLog; // @synthesize xpcListenerPLLog=_xpcListenerPLLog;
- (void)testEntryQueries;
- (void)testEntryDelete;
- (void)testEntryApplicationAgent;
- (void)testEntryLogRequestedForEntryKey:(id)arg1;
- (void)testEntryWake;
- (void)testEntrySleep;
- (void)testAllEntryKeyRequests;
- (void)testFastInserts;
- (void)testQMI;
- (void)testGenerateOTASubmission;
- (void)testArray;
- (void)testArchive;
- (void)testDailyTasks;
- (void)bombardRails;
- (void)printNullTestResultsForEntry:(id)arg1 withDescription:(id)arg2;
@property(retain) PLSemaphore *canSleepSemaphore; // @synthesize canSleepSemaphore=_canSleepSemaphore;
@property(retain) PLEntryNotificationOperatorComposition *canSleepNotification; // @synthesize canSleepNotification=_canSleepNotification;
@property(retain) PLEntryNotificationOperatorComposition *wakeNotification; // @synthesize wakeNotification=_wakeNotification;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (id)init;

@end
