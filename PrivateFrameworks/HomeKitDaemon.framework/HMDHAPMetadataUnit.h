//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class HAPMetadataUnit;

@interface HMDHAPMetadataUnit : NSObject <NSSecureCoding>
{
    HAPMetadataUnit *_hapUnitMetadata;
}

+ (BOOL)supportsSecureCoding;
- (id)initWithHAPUnit:(id)arg1;
@property(retain, nonatomic) HAPMetadataUnit *hapUnitMetadata; // @synthesize hapUnitMetadata=_hapUnitMetadata;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

