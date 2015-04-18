//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NPKPaymentSessionClientProtocol.h"

@class NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface NPKPaymentSession : NSObject <NPKPaymentSessionClientProtocol>
{
    BOOL _acknowledged;
    id <NPKPaymentSessionDelegate> _delegate;
    NSString *_currentPassUniqueID;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

- (CDUnknownBlockType)_errorHandlerWithCompletion:(CDUnknownBlockType)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSString *currentPassUniqueID; // @synthesize currentPassUniqueID=_currentPassUniqueID;
- (void)deactivateSession;
- (void)acknowledgeSession;
- (void)paymentSessionCompletedForReason:(unsigned int)arg1;
- (void)paymentDidActivateForPaymentCard:(id)arg1;
- (void)paymentWillActivateForPaymentCard:(id)arg1;
- (void)paymentCardDidBecomeCurrent:(id)arg1;
- (void)_paymentSessionIsFinishedForReason:(unsigned int)arg1;
- (id)_connectionWithEndpoint:(id)arg1 rootQueue:(id)arg2;
- (id)initWithEndpoint:(id)arg1 rootQueue:(id)arg2 currentCard:(id)arg3;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)resume;
- (id)_delegate;
@property(nonatomic) __weak id <NPKPaymentSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL acknowledged; // @synthesize acknowledged=_acknowledged;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
