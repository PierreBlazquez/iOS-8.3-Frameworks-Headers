//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSYProgressClient.h"

@class NSObject<OS_dispatch_queue>, NSString, PSYProgressObserver;

@interface PSProgressClient : NSObject <PSYProgressClient>
{
    NSObject<OS_dispatch_queue> *_queue;
    PSYProgressObserver *_progressObserver;
}

- (id)initWithQueue:(id)arg1 progressObserver:(id)arg2;
- (oneway void)noteClientNotEntitled:(id)arg1;
- (oneway void)scheduledActivitiesProgressStateChanged:(int)arg1;
- (oneway void)scheduledActivitiesDidComplete;
- (oneway void)scheduledActivityProgressChanged:(float)arg1 totalProgress:(float)arg2;
- (oneway void)scheduledActivityChanged:(id)arg1 fromActivity:(id)arg2 error:(id)arg3;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

