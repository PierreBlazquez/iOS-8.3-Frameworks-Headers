//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface CKDPRecordType : PBCodable <NSCopying>
{
    NSString *_name;
}

@property(readonly, nonatomic) BOOL hasName;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

