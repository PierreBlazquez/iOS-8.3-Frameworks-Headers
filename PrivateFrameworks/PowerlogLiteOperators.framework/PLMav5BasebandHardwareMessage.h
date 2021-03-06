//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PowerlogLiteOperators/PLMav4BasebandHardwareMessage.h>

@interface PLMav5BasebandHardwareMessage : PLMav4BasebandHardwareMessage
{
    struct _PLMav5BasebandHWStatsRPM *_mav5_rpm;
    struct _PLMav5BasebandHWStatsAPPSPerf *_mav5_apps;
    struct _PLMav5BasebandHWStatsSleep *_mav5_apps_sleep;
    struct _PLMav5BasebandHWAPPSSleepVeto *_mav5_apps_sleep_veto;
    struct _PLMav4BasebandHWOnOffComponentStats *_mav5_lpass;
    struct _PLMav5BasebandHWStatsMDSP *_mav5_mdsp;
    struct _PLMav5BasebandHWStatsQDSP *_mav5_qdsp;
    struct _PLMav5BasebandHWStatsSleep *_mav5_mpss_sleep;
    struct _PLMav5BasebandHWMPSSSleepVeto *_mav5_mpss_sleep_veto;
    struct _PLMav5BasebandHWStatsUSB *_mav5_usb;
    struct _PLMav4BasebandHWOnOffComponentStats *_mav5_gps_dpo;
    struct _PLMav5BasebandHWStatsRX *_mav5_rx;
    struct _PLMav5BasebandHWStatsTX *_mav5_tx;
    struct _PLMav5BasebandHWStatsRXSQA *_mav5_rx_sqa;
    struct _PLMav5BasebandHWStatsProtocol *_mav5_protocol;
    struct _PLMav5BasebandHWClocksDuration *_mav5_clock;
    struct _PLMav5BasebandHWStatsSleep *_mav4_mpss_sleep;
    struct _PLMav5BasebandHWMPSSSleepVeto *_mav4_mpss_sleep_veto;
}

- (void)formatDurationandCount:(unsigned int)arg1 withCount:(unsigned int)arg2 inString:(id)arg3;
@property(nonatomic) struct _PLMav5BasebandHWClocksDuration *clock; // @synthesize clock=_mav5_clock;
@property(nonatomic) struct _PLMav5BasebandHWStatsRXSQA *rx_sqa; // @synthesize rx_sqa=_mav5_rx_sqa;
@property(nonatomic) struct _PLMav4BasebandHWOnOffComponentStats *gps_dpo; // @synthesize gps_dpo=_mav5_gps_dpo;
@property(nonatomic) struct _PLMav5BasebandHWStatsUSB *usb; // @synthesize usb=_mav5_usb;
@property(nonatomic) struct _PLMav5BasebandHWStatsQDSP *qdsp; // @synthesize qdsp=_mav5_qdsp;
@property(nonatomic) struct _PLMav5BasebandHWStatsMDSP *mdsp; // @synthesize mdsp=_mav5_mdsp;
@property(nonatomic) struct _PLMav5BasebandHWStatsSleep *mpss_sleep; // @synthesize mpss_sleep=_mav4_mpss_sleep;
@property(nonatomic) struct _PLMav4BasebandHWOnOffComponentStats *lpass; // @synthesize lpass=_mav5_lpass;
@property(nonatomic) struct _PLMav5BasebandHWStatsSleep *apps_sleep; // @synthesize apps_sleep=_mav5_apps_sleep;
@property(nonatomic) struct _PLMav5BasebandHWStatsAPPSPerf *apps; // @synthesize apps=_mav5_apps;
@property(nonatomic) struct _PLMav5BasebandHWStatsRPM *rpm; // @synthesize rpm=_mav5_rpm;
@property(nonatomic) struct _PLMav5BasebandHWMPSSSleepVeto *mpss_sleep_veto; // @synthesize mpss_sleep_veto=_mav4_mpss_sleep_veto;
@property(nonatomic) struct _PLMav5BasebandHWAPPSSleepVeto *apps_sleep_veto; // @synthesize apps_sleep_veto=_mav5_apps_sleep_veto;
- (void)logClockWithLogger:(id)arg1;
- (void)logProtocolWithLogger:(id)arg1 withCount:(unsigned int)arg2;
- (void)logLPASSWithLogger:(id)arg1;
- (void)logAPPSWithLogger:(id)arg1;
- (void)logRPMWithLogger:(id)arg1;
@property(nonatomic) struct _PLMav5BasebandHWStatsProtocol *protocol; // @synthesize protocol=_mav5_protocol;
- (void)logWithLogger:(id)arg1;
- (id)indexToRAT:(unsigned int)arg1;
@property(nonatomic) struct _PLMav5BasebandHWStatsTX *tx; // @synthesize tx=_mav5_tx;
@property(nonatomic) struct _PLMav5BasebandHWStatsRX *rx; // @synthesize rx=_mav5_rx;
- (void)logRFWithLogger2:(id)arg1;
- (void)logPeripheralsWithLogger:(id)arg1;
- (void)logModemAppWithLogger:(id)arg1;
- (void)parseData:(id)arg1;
- (id)initWithData:(id)arg1;

@end

