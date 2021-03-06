//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PowerlogLiteOperators/PLAWDAuxMetrics.h>

@class NSMutableSet, NSTimer, PLEntryNotificationOperatorComposition, PLOperator;

@interface PLAWDNetworkUsage : PLAWDAuxMetrics
{
    PLEntryNotificationOperatorComposition *_netEventCallback;
    PLEntryNotificationOperatorComposition *_nameConnectionCallback;
    unsigned int _netState;
    NSTimer *_snapshotTimer;
}

+ (id)entryPointDefinitionAwdNetEnd;
+ (id)entryPointDefinitionAwdNetStart;
+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)arg1;
+ (id)entryEventPointDefinitions;
@property(retain) NSTimer *snapshotTimer; // @synthesize snapshotTimer=_snapshotTimer;
@property(retain) PLEntryNotificationOperatorComposition *nameConnectionCallback; // @synthesize nameConnectionCallback=_nameConnectionCallback;
- (void)resetStartTable;
- (void)resetEndTable;
@property unsigned int netState; // @synthesize netState=_netState;
- (void)handleNameConnectionCallback:(id)arg1;
@property(retain) PLEntryNotificationOperatorComposition *netEventCallback; // @synthesize netEventCallback=_netEventCallback;
- (void)handleNetCallback:(id)arg1;
- (void)resetAllTables;
- (BOOL)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (void)stopMetricCollection:(id)arg1;
- (void)startMetricCollection:(id)arg1;
- (void).cxx_destruct;

// Remaining properties
@property __weak PLOperator *operator;
@property(retain, nonatomic) NSMutableSet *runningMetrics;

@end

