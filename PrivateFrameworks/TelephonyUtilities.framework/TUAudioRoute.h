//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface TUAudioRoute : NSObject
{
    NSDictionary *_route;
}

@property(retain, nonatomic) NSDictionary *route; // @synthesize route=_route;
@property(readonly, nonatomic) int bluetoothEndpointType;
@property(readonly, nonatomic, getter=isCarAudio) BOOL carAudio;
@property(readonly, nonatomic, getter=isAirTunes) BOOL airTunes;
@property(readonly, nonatomic, getter=isWirelessHeadset) BOOL wirelessHeadset;
@property(readonly, nonatomic, getter=isSpeaker) BOOL speaker;
@property(readonly, nonatomic, getter=isReceiver) BOOL receiver;
@property(readonly, nonatomic, getter=isBluetooth) BOOL bluetooth;
- (BOOL)_routeNameEqualTo:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
