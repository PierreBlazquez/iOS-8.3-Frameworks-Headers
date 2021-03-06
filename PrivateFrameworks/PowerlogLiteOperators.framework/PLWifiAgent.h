//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PLAgent.h"

@class NSString, PLCFNotificationOperatorComposition, PLEntryNotificationOperatorComposition;

@interface PLWifiAgent : PLAgent
{
    PLCFNotificationOperatorComposition *_notificationWiFiChanged;
    struct __WiFiManagerClient *_wifiManager;
    struct __WiFiDeviceClient *_wifiDevice;
    PLEntryNotificationOperatorComposition *_batteryLevelChanged;
    PLEntryNotificationOperatorComposition *_deviceWake;
    unsigned int _lastLoggedTimestamp;
    unsigned int _locationScanDuration;
    unsigned int _pipelineScanDuration;
    unsigned int _autoJoinScanDuration;
    unsigned int _setupScanDuration;
    unsigned int _unknownScanDuration;
    NSString *_wifiChipset;
    NSString *_wifiManufacturer;
}

+ (id)entryEventBackwardDefinitionUserScan;
+ (id)entryEventBackwardDefinitionDiffBasic;
+ (id)entryEventBackwardDefinitionCumulativeBasic;
+ (id)entryEventForwardDefinitionAvailability;
+ (id)entryEventForwardDefinitionRSSI;
+ (id)entryEventForwardDefinitionModuleInfo;
+ (id)entryEventPointDefinitionWake;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)accountingGroupDefinitions;
+ (id)railDefinitions;
+ (void)load;
@property unsigned int unknownScanDuration; // @synthesize unknownScanDuration=_unknownScanDuration;
@property unsigned int setupScanDuration; // @synthesize setupScanDuration=_setupScanDuration;
@property unsigned int autoJoinScanDuration; // @synthesize autoJoinScanDuration=_autoJoinScanDuration;
@property unsigned int pipelineScanDuration; // @synthesize pipelineScanDuration=_pipelineScanDuration;
@property unsigned int locationScanDuration; // @synthesize locationScanDuration=_locationScanDuration;
@property unsigned int lastLoggedTimestamp; // @synthesize lastLoggedTimestamp=_lastLoggedTimestamp;
@property(retain) PLEntryNotificationOperatorComposition *deviceWake; // @synthesize deviceWake=_deviceWake;
@property(readonly) PLCFNotificationOperatorComposition *notificationWiFiChanged; // @synthesize notificationWiFiChanged=_notificationWiFiChanged;
- (void)updateEventBackwardUserScanDuration:(id)arg1;
- (void)logEventBackwardDiffProperties;
- (void)logEventBackwardCumulativeProperties;
- (void)logEventForwardRSSI:(id)arg1;
- (void)logEventForwardAvailability:(id)arg1;
@property(readonly) NSString *wifiManufacturer; // @synthesize wifiManufacturer=_wifiManufacturer;
@property(readonly) NSString *wifiChipset; // @synthesize wifiChipset=_wifiChipset;
- (id)wifiManufacturerQuery;
- (id)wifiChipsetQuery;
- (id)railWiFi;
- (void)modelWiFiPower:(id)arg1;
- (BOOL)isWowEnabled;
- (void)logEventBackwardWifiProperties:(id)arg1 withNetworkProperties:(id)arg2;
- (unsigned int)getCurrentChannelWidth:(struct __WiFiNetwork *)arg1;
- (id)decodeWifiEventLinkReason:(unsigned long)arg1;
- (void)logEventPointWakeLink:(id)arg1 withParams:(id)arg2 toEntry:(id)arg3;
- (void)logEventPointWakePNO:(id)arg1 withParams:(id)arg2 toEntry:(id)arg3;
- (void)logEventPointWakeDataFrame:(id)arg1 withParams:(id)arg2 toEntry:(id)arg3;
- (BOOL)isWiFiPowered;
- (void)logEventBackwardUserScanDuration;
- (void)logEventBackwardWifiProperties;
- (BOOL)isWowSupported;
- (BOOL)hasWiFi;
- (void)logonAPSleep;
- (void)logEventPointWake;
@property(nonatomic) struct __WiFiManagerClient *wifiManager; // @synthesize wifiManager=_wifiManager;
@property(nonatomic) struct __WiFiDeviceClient *wifiDevice; // @synthesize wifiDevice=_wifiDevice;
- (void)logEventForwardModuleInfo;
- (void)findWifiDevice;
@property(retain) PLEntryNotificationOperatorComposition *batteryLevelChanged; // @synthesize batteryLevelChanged=_batteryLevelChanged;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)log;
- (id)init;

@end

