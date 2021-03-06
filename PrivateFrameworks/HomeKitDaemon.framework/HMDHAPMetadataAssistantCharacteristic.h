//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary, NSString;

@interface HMDHAPMetadataAssistantCharacteristic : NSObject <NSSecureCoding>
{
    BOOL _supportsLocalization;
    NSString *_name;
    NSString *_readHAPCharacteristicName;
    NSString *_writeHAPCharacteristicName;
    NSString *_format;
    NSDictionary *_values;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(nonatomic) BOOL supportsLocalization; // @synthesize supportsLocalization=_supportsLocalization;
@property(retain, nonatomic) NSString *writeHAPCharacteristicName; // @synthesize writeHAPCharacteristicName=_writeHAPCharacteristicName;
@property(retain, nonatomic) NSString *readHAPCharacteristicName; // @synthesize readHAPCharacteristicName=_readHAPCharacteristicName;
- (id)initWithName:(id)arg1 readHAPCharacteristic:(id)arg2 writeHAPCharacteristic:(id)arg3 format:(id)arg4;
- (id)generateDictionary;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *values; // @synthesize values=_values;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dump;

@end

