//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface GEOAttribution : PBCodable <NSCopying>
{
    NSString *_badge;
    NSString *_badgeChecksum;
    NSString *_logo;
    NSString *_logoChecksum;
    NSString *_name;
    NSString *_url;
}

@property(readonly, nonatomic) BOOL hasName;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasLogoChecksum;
@property(readonly, nonatomic) BOOL hasBadgeChecksum;
@property(retain, nonatomic) NSString *logoChecksum; // @synthesize logoChecksum=_logoChecksum;
@property(retain, nonatomic) NSString *badgeChecksum; // @synthesize badgeChecksum=_badgeChecksum;
@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(readonly, nonatomic) BOOL hasLogo;
@property(retain, nonatomic) NSString *badge; // @synthesize badge=_badge;
@property(readonly, nonatomic) BOOL hasBadge;
@property(readonly, nonatomic) BOOL hasUrl;
- (id)dictionaryRepresentation;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end
