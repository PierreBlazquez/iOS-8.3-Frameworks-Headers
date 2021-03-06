//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSString, NSUUID;

@interface CRVehicle : NSObject <NSSecureCoding>
{
    NSUUID *_identifier;
    NSString *_vehicleName;
    NSData *_certificateSerialNumber;
    unsigned int _pairingStatus;
    NSString *_bluetoothAddress;
    NSString *_carplayWiFiUUID;
}

+ (id)vehicleForVehicleAccessory:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *bluetoothAddress; // @synthesize bluetoothAddress=_bluetoothAddress;
@property(readonly, nonatomic) BOOL isPaired;
- (void)mergeAttributesFromVehicle:(id)arg1;
- (id)_pairingDebugDescription;
@property(retain, nonatomic) NSString *carplayWiFiUUID; // @synthesize carplayWiFiUUID=_carplayWiFiUUID;
@property(retain, nonatomic) NSData *certificateSerialNumber; // @synthesize certificateSerialNumber=_certificateSerialNumber;
@property(retain, nonatomic) NSString *vehicleName; // @synthesize vehicleName=_vehicleName;
- (id)initWithIdentifier:(id)arg1 certificateSerial:(id)arg2;
@property(nonatomic) unsigned int pairingStatus; // @synthesize pairingStatus=_pairingStatus;
- (id)displayName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

