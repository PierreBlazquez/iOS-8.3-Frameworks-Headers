//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection, PSProgressClient;

@interface PSYProgressObserver : NSObject
{
    NSMutableDictionary *_failedActivities;
    id <PSYProgressObserverDelegate> _delegate;
    int _progressObserverState;
    NSString *_activityLabel;
    NSDictionary *_activityErrors;
    PSProgressClient *_progressClient;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    double _activityProgress;
    double _totalProgress;
}

@property(retain, nonatomic) PSProgressClient *progressClient; // @synthesize progressClient=_progressClient;
@property(readonly, copy, nonatomic) NSDictionary *activityErrors; // @synthesize activityErrors=_activityErrors;
@property(nonatomic) double totalProgress; // @synthesize totalProgress=_totalProgress;
@property(nonatomic) double activityProgress; // @synthesize activityProgress=_activityProgress;
@property(retain, nonatomic) NSString *activityLabel; // @synthesize activityLabel=_activityLabel;
- (void)_scheduledJobsDidComplete;
- (void)_currentActivityChanged:(id)arg1 fromActivity:(id)arg2 error:(id)arg3;
- (void)_setCurrentActivityProgress:(float)arg1 totalProgress:(float)arg2;
- (void)_resetProgress;
- (void)setProgressObserverState:(int)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_connectionInterrupted;
@property(readonly, nonatomic) int progressObserverState; // @synthesize progressObserverState=_progressObserverState;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)_updateState;
- (id)initWithQueue:(id)arg1;
@property(nonatomic) __weak id <PSYProgressObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;

@end
