//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HDHealthDataCollector.h"

@class HDSourceEntity, HKObjectType, NSObject<OS_dispatch_queue>, NSString;

@interface HDDataCollector : NSObject <HDHealthDataCollector>
{
    id <HDHealthDaemon> _healthDaemon;
    NSObject<OS_dispatch_queue> *_queue;
    HKObjectType *_observedType;
    HDSourceEntity *_sourceEntity;
    int _state;
    double _collectionInterval;
    int _failureRetryCount;
    BOOL _disabled;
}

+ (id)secondaryContextClasses;
+ (Class)sensorDatumClass;
+ (id)observedType;
+ (id)domain;
- (void)_queue_transitionToFailure;
- (id)_queue_sourceEntity;
- (void)setCollectionInterval:(double)arg1;
- (double)collectionInterval;
- (void)_queue_receivedData;
- (id)_dictionaryFromContext:(id)arg1;
- (id)_sensorDatumFromContext:(id)arg1;
- (id)_contextFromDictionary:(id)arg1;
- (id)_contextFromSensorDatum:(id)arg1;
- (id)_retrieveSecondaryContext;
- (id)_retrievePrimaryContext;
- (BOOL)_persistSecondaryContext:(id)arg1;
- (BOOL)_persistPrimaryContext:(id)arg1;
- (id)initWithHealthDaemon:(id)arg1;
- (id)dataCollectorDiagnosticDescription;
- (void)updateHistoricalData;
- (void)collectionStoppedForType:(id)arg1;
- (void)updateCollectionInterval:(double)arg1 forType:(id)arg2;
- (void)collectionStartedForType:(id)arg1 collectionInterval:(double)arg2;
- (void)_queue_incrementFailureRetryCounter;
- (BOOL)_queue_shouldRetryFromFailure;
- (void)_queue_transitionToIdle;
- (void)_queue_updateCollectionInterval:(double)arg1;
- (void)_queue_retryFromFailure;
- (void)_queue_beginStreaming;
- (void)_queue_transitionToStreaming;
- (BOOL)_queue_streaming;
- (void)_queue_beginStreamingIfNecessary;
- (void)stopPerformingUpdatesWithErrorEncountered:(BOOL)arg1;
- (BOOL)_queue_disabled;
- (void)_performAsync:(CDUnknownBlockType)arg1;
- (void)_performSync:(CDUnknownBlockType)arg1;
- (void)_queue_resetFailureRetryCounter;
- (id)_retrieveContextForKey:(id)arg1;
- (BOOL)_persistContext:(id)arg1 forKey:(id)arg2;
- (void).cxx_destruct;
@property BOOL disabled;
@property(readonly) HDSourceEntity *sourceEntity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

