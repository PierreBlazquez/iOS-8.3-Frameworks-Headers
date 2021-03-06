//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AUSetupController, NSDictionary;

@protocol SetupUIDelegate

@optional
- (void)setupCompleteWithResult:(long)arg1 baseStationInfo:(NSDictionary *)arg2 forController:(AUSetupController *)arg3;
- (void)setupProgressUpdated:(int)arg1 status:(long)arg2 paramDict:(NSDictionary *)arg3 forController:(AUSetupController *)arg4;
- (void)setupMonitoredSettingChanged:(long)arg1 paramDict:(NSDictionary *)arg2 forController:(AUSetupController *)arg3;
- (void)setupMonitoringMessage:(long)arg1 paramDict:(NSDictionary *)arg2 forController:(AUSetupController *)arg3;
- (void)setupRPCResponseWithResult:(long)arg1 rpcSelector:(int)arg2 responseDict:(NSDictionary *)arg3 forController:(AUSetupController *)arg4;
- (void)setupTaskResponseWithResult:(long)arg1 responseDict:(NSDictionary *)arg2 forController:(AUSetupController *)arg3;
@end

