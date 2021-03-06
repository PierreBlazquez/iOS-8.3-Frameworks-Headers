//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@interface CKDPSetBadgeCountRequest : PBRequest <NSCopying>
{
    unsigned int _badgeCount;
    BOOL _forDevice;
    struct {
        unsigned int badgeCount:1;
        unsigned int forDevice:1;
    } _has;
}

+ (id)options;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) BOOL forDevice; // @synthesize forDevice=_forDevice;
@property(nonatomic) unsigned int badgeCount; // @synthesize badgeCount=_badgeCount;
@property(nonatomic) BOOL hasForDevice;
@property(nonatomic) BOOL hasBadgeCount;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

