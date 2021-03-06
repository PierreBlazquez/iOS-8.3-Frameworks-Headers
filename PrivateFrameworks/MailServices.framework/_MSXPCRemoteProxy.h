//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCProxyCreating.h"

@class MSXPCConnection, NSXPCInterface;

@interface _MSXPCRemoteProxy : NSObject <NSXPCProxyCreating>
{
    int _selectorLock;
    struct __CFDictionary *_knownSelectors;
    MSXPCConnection *_connection;
    NSXPCInterface *_remoteInterface;
    CDUnknownBlockType _errorHandler;
    id ____nsxpc_remoteObjectProxy;
}

@property(retain, nonatomic, setter=___setNSXPCRemoteObjectProxy:) id ___nsxpc_remoteObjectProxy; // @synthesize ___nsxpc_remoteObjectProxy=____nsxpc_remoteObjectProxy;
- (id)initWithConnection:(id)arg1 interface:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)dealloc;

@end

