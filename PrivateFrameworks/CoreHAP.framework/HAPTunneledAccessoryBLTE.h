//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreHAP/HAPAccessory.h>

#import "HAPAccessoryServerInternalDelegate.h"

@class HAPCharacteristic, HAPService, NSData, NSMutableData, NSNumber, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSOperationQueue, NSString;

@interface HAPTunneledAccessoryBLTE : HAPAccessory <HAPAccessoryServerInternalDelegate>
{
    struct PairingSessionPrivate *_pairingSession;
    BOOL _performingPairVerify;
    BOOL _pairVerifyComplete;
    NSNumber *_stateNumber;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
    id <HAPKeyStore> _keyStore;
    HAPService *_tunneledBTLEAccessoryService;
    HAPService *_pairingService;
    HAPCharacteristic *_pairVerifyCharacteristic;
    HAPCharacteristic *_pairingsCharacteristic;
    NSData *_sessionReadKey;
    NSMutableData *_readNonce;
    NSData *_sessionWriteKey;
    NSMutableData *_writeNonce;
    NSNumber *_sessionLifetimeTimeout;
    NSObject<OS_dispatch_source> *_sessionLifetimeTimer;
}

@property(nonatomic) __weak HAPService *pairingService; // @synthesize pairingService=_pairingService;
@property(nonatomic) __weak HAPService *tunneledBTLEAccessoryService; // @synthesize tunneledBTLEAccessoryService=_tunneledBTLEAccessoryService;
- (BOOL)supportsGroupedRequests;
@property(nonatomic) __weak HAPCharacteristic *pairingsCharacteristic; // @synthesize pairingsCharacteristic=_pairingsCharacteristic;
@property(nonatomic) __weak HAPCharacteristic *pairVerifyCharacteristic; // @synthesize pairVerifyCharacteristic=_pairVerifyCharacteristic;
@property(retain, nonatomic) NSNumber *sessionLifetimeTimeout; // @synthesize sessionLifetimeTimeout=_sessionLifetimeTimeout;
- (BOOL)_parsePairingService:(id)arg1;
- (BOOL)_parseTunneledBTLEAccessoryService:(id)arg1;
- (BOOL)_establishSecureSessionWithError:(id *)arg1;
- (void)_suspendAllOperations;
@property(nonatomic, getter=isPerformingPairVerify) BOOL performingPairVerify; // @synthesize performingPairVerify=_performingPairVerify;
@property(nonatomic, getter=isPairVerifyComplete) BOOL pairVerifyComplete; // @synthesize pairVerifyComplete=_pairVerifyComplete;
- (void)_handleSessionLifetimeTimeout;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *sessionLifetimeTimer; // @synthesize sessionLifetimeTimer=_sessionLifetimeTimer;
- (void)_cancelAllQueuedOperationsWithError:(id)arg1;
@property(retain, nonatomic) NSData *sessionReadKey; // @synthesize sessionReadKey=_sessionReadKey;
@property(retain, nonatomic) NSMutableData *readNonce; // @synthesize readNonce=_readNonce;
@property(retain, nonatomic) NSMutableData *writeNonce; // @synthesize writeNonce=_writeNonce;
@property(retain, nonatomic) NSData *sessionWriteKey; // @synthesize sessionWriteKey=_sessionWriteKey;
- (void)_resumeAllOperations;
- (void)_handleSuccessfulPairVerifyCompletion;
- (void)_handlePairVerifyReadCompletionWithError:(id)arg1;
- (long)_initializePairingSession;
- (void)_handlePairVerifyWriteCompletionWithError:(id)arg1;
- (id)_encryptDataAndGenerateAuthTag:(id)arg1 error:(id *)arg2;
- (void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_decryptData:(id)arg1 error:(id *)arg2;
- (void)_enqueueOperation:(id)arg1;
- (BOOL)_handleCharacteristicReadResponse:(id)arg1 error:(id *)arg2;
- (void)_updateSessionLifetimeTimer;
- (void)_readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_cancelSessionLifetimeTimer;
- (void)_tearDownSessionWithError:(id)arg1;
- (void)_registerForTunnelCharacteristicNotifications;
- (void)_sanitizeAllTunneledCharacteristics;
- (BOOL)_parseServices;
- (void)writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)writeValue:(id)arg1 forCharacteristic:(id)arg2 authorizationData:(id)arg3 queue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)readValueForCharacteristic:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (long)_pairVerifyStart;
- (id)initWithServer:(id)arg1 instanceID:(id)arg2 parsedServices:(id)arg3 keyStore:(id)arg4;
@property(copy, nonatomic) NSNumber *stateNumber; // @synthesize stateNumber=_stateNumber;
- (void)accessoryServer:(id)arg1 didUpdateValueForCharacteristic:(id)arg2;
- (void)_writeCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_readCharacteristicValues:(id)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(nonatomic) __weak id <HAPKeyStore> keyStore; // @synthesize keyStore=_keyStore;
- (BOOL)isPaired;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

