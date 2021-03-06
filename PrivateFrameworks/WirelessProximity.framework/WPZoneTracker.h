//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XPCClientDelegate.h"

@class NSString, XPCClient;

@interface WPZoneTracker : NSObject <XPCClientDelegate>
{
    BOOL _wantEntry;
    BOOL _wantExit;
    int _state;
    XPCClient *_connection;
    id <WPZoneTrackerDelegate> _delegate;
}

- (void)getCurrentTrackedZones;
- (void)unregisterForZoneChanges:(id)arg1;
- (void)registerForZoneChangesMatching:(id)arg1;
- (void)zonesExited:(id)arg1;
- (void)zonesEntered:(id)arg1;
- (void)registerZonesFailed:(id)arg1;
@property(nonatomic) BOOL wantExit; // @synthesize wantExit=_wantExit;
@property(nonatomic) BOOL wantEntry; // @synthesize wantEntry=_wantEntry;
- (void)unregisterAllZoneChanges;
- (void)changeState:(int)arg1;
- (void)connectionDied;
- (void)messageArrived:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
@property(retain, nonatomic) XPCClient *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
@property int state; // @synthesize state=_state;
@property(nonatomic) __weak id <WPZoneTrackerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)connectionInterrupted;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

