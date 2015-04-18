//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSXPCConnection;

@interface TUAccountsController : NSObject
{
    NSXPCConnection *_xpcConnection;
    int _outgoingRelayCallerIDChangedToken;
}

@property(nonatomic) int outgoingRelayCallerIDChangedToken; // @synthesize outgoingRelayCallerIDChangedToken=_outgoingRelayCallerIDChangedToken;
@property(readonly, copy, nonatomic) NSString *formattedOutgoingRelayCallerID;
@property(readonly, copy, nonatomic) NSString *outgoingRelayCallerID;
- (void)_setUpXPCConnection;
- (void)_tearDownXPCConnection;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (id)init;
- (void)dealloc;

@end
