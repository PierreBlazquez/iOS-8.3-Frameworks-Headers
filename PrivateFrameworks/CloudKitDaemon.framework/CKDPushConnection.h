//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "APSConnectionDelegate.h"

@class APSConnection, NSMapTable, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface CKDPushConnection : NSObject <APSConnectionDelegate>
{
    BOOL _darkWakeEnabled;
    NSString *_apsEnvironmentString;
    APSConnection *_apsConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_tokensCache;
    NSMapTable *_callbacks;
    NSMutableSet *_enabledTopics;
    NSMutableDictionary *_topicsToWaitingAppContainerTuples;
    NSMutableSet *_topicsAwaitingPublicToken;
    NSMutableSet *_topicsAwaitingPrivateToken;
}

+ (id)sharedConnectionForAPSEnvironmentString:(id)arg1 darkWakeEnabled:(BOOL)arg2;
@property(retain, nonatomic) NSMutableSet *topicsAwaitingPrivateToken; // @synthesize topicsAwaitingPrivateToken=_topicsAwaitingPrivateToken;
@property(retain, nonatomic) NSMutableSet *topicsAwaitingPublicToken; // @synthesize topicsAwaitingPublicToken=_topicsAwaitingPublicToken;
@property(retain, nonatomic) NSMutableDictionary *topicsToWaitingAppContainerTuples; // @synthesize topicsToWaitingAppContainerTuples=_topicsToWaitingAppContainerTuples;
@property(retain, nonatomic) NSMapTable *callbacks; // @synthesize callbacks=_callbacks;
@property(retain, nonatomic) NSMutableDictionary *tokensCache; // @synthesize tokensCache=_tokensCache;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
- (void)revokeTokenForAppContainerTuple:(id)arg1;
- (void)requestTokenForAppContainerTuple:(id)arg1 useAPSPublicToken:(BOOL)arg2;
- (void)_removeWaitingAppContainerTuplesForTopic:(id)arg1;
- (id)_waitingAppContainerTuplesForTopic:(id)arg1;
@property(retain, nonatomic) NSMutableSet *enabledTopics; // @synthesize enabledTopics=_enabledTopics;
- (void)_addWaitingAppContainerTuple:(id)arg1 forTopic:(id)arg2;
- (id)initWithEnvironment:(id)arg1 darkWakeEnabled:(BOOL)arg2;
@property(nonatomic) BOOL darkWakeEnabled; // @synthesize darkWakeEnabled=_darkWakeEnabled;
- (void)setAPSEnvironmentString:(id)arg1;
@property(retain, nonatomic) NSString *apsEnvironmentString; // @synthesize apsEnvironmentString=_apsEnvironmentString;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)connectionDidReconnect:(id)arg1;
- (void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void).cxx_destruct;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
