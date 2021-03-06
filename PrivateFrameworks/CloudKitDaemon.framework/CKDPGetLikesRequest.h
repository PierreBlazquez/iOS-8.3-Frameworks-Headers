//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class CKDPLikedId;

@interface CKDPGetLikesRequest : PBRequest <NSCopying>
{
    CKDPLikedId *_identifier;
    unsigned int _limit;
    CDStruct_88fc3008 _has;
}

+ (id)options;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) unsigned int limit; // @synthesize limit=_limit;
@property(nonatomic) BOOL hasLimit;
@property(readonly, nonatomic) BOOL hasIdentifier;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
@property(retain, nonatomic) CKDPLikedId *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

