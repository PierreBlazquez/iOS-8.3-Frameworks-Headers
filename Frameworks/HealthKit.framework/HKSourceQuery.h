//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthKit/HKQuery.h>

@interface HKSourceQuery : HKQuery
{
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _updateHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
- (id)initWithSampleType:(id)arg1 samplePredicate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deliverUpdatedSources:(id)arg1 added:(id)arg2 forQuery:(id)arg3;
- (void)deliverSources:(id)arg1 forQuery:(id)arg2;
- (CDUnknownBlockType)_queue_errorHandler;
- (BOOL)_queue_shouldStayAliveAfterInitialResults;
- (void)_queue_validate;
- (void)_queue_cleanupAfterDeactivation;

@end
