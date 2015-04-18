//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_xpc_object>, NSString;

@interface IMRemoteObject : NSObject
{
    id _internal;
}

+ (id)_remoteObjects;
+ (void)_unregisterIMRemoteObject:(id)arg1;
+ (void)_registerIMRemoteObject:(id)arg1;
+ (void)initialize;
- (void)finalize;
- (id)initWithPortName:(id)arg1 protocol:(id)arg2;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2;
- (unsigned int)forwardXPCObject:(id)arg1 messageContext:(id)arg2;
- (void)_cleanupMachBitsCanPost:(BOOL)arg1;
- (id)_initWithConnection:(id)arg1 portName:(id)arg2 protocol:(id)arg3 alreadyConfigured:(BOOL)arg4;
- (void)setPortName:(id)arg1;
- (void)_systemShutdown:(id)arg1;
@property(readonly, nonatomic) NSString *portName;
- (void)_portDidBecomeInvalid;
- (id)initWithConnection:(id)arg1 protocol:(id)arg2 alreadyConfigured:(BOOL)arg3;
@property(nonatomic) int pid;
- (id)_queue;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
@property(readonly, nonatomic) BOOL isValid;
- (void)invalidate;
- (id)description;
- (void)dealloc;

@end
