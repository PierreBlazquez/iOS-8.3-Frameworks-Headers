//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RMSDiscoverySession.h"
#import "RMSServiceProviderDelegate.h"

@class NSArray, NSMutableSet, NSString, Reachability;

@interface RMSDiscoverySession : NSObject <RMSServiceProviderDelegate, RMSDiscoverySession>
{
    int _discoveryTypes;
    Reachability *_reachability;
    NSMutableSet *_availableServices;
    NSArray *_providers;
    BOOL _networkAvailable;
    id <RMSDiscoverySessionDelegate> _delegate;
}

+ (id)proxyDiscoverySession;
+ (id)localDiscoverySession;
- (id)_providerForDiscoveryType:(int)arg1;
- (void)_updateWifiAvailability;
- (void)_enableProviders;
- (void)_handleReachabilityChangedNotification:(id)arg1;
- (void)_handleHSGroupIDDidChangeNotification:(id)arg1;
- (void)serviceProvider:(id)arg1 serviceDidBecomeUnavailable:(id)arg2;
- (void)serviceProvider:(id)arg1 serviceDidBecomeAvailable:(id)arg2;
@property(readonly, nonatomic, getter=isNetworkAvailable) BOOL networkAvailable; // @synthesize networkAvailable=_networkAvailable;
@property(readonly, nonatomic) NSArray *availableServices;
@property(nonatomic) int discoveryTypes; // @synthesize discoveryTypes=_discoveryTypes;
- (void)endDiscovery;
- (void)beginDiscovery;
- (void).cxx_destruct;
@property(nonatomic) __weak id <RMSDiscoverySessionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

