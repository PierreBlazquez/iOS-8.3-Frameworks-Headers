//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NEConfigurationLegacySupport.h"
#import "NEConfigurationValidating.h"
#import "NEPrettyDescription.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSURL;

@interface NEOnDemandRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>
{
    int _action;
    NSArray *_DNSSearchDomainMatch;
    NSArray *_DNSServerAddressMatch;
    int _interfaceTypeMatch;
    NSArray *_SSIDMatch;
    NSURL *_probeURL;
}

+ (BOOL)supportsSecureCoding;
+ (id)createOnDemandRulesFromLegacyDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) int action; // @synthesize action=_action;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(copy) NSURL *probeURL; // @synthesize probeURL=_probeURL;
@property(copy) NSArray *SSIDMatch; // @synthesize SSIDMatch=_SSIDMatch;
@property int interfaceTypeMatch; // @synthesize interfaceTypeMatch=_interfaceTypeMatch;
@property(copy) NSArray *DNSServerAddressMatch; // @synthesize DNSServerAddressMatch=_DNSServerAddressMatch;
@property(copy) NSArray *DNSSearchDomainMatch; // @synthesize DNSSearchDomainMatch=_DNSSearchDomainMatch;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)arg1;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)initWithAction:(int)arg1;

@end

