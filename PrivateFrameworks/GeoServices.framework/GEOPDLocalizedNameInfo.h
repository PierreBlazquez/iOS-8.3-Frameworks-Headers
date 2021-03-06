//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEONameInfo, NSString;

@interface GEOPDLocalizedNameInfo : PBCodable <NSCopying>
{
    NSString *_languageCode;
    GEONameInfo *_name;
    NSString *_requestedLanguageCode;
}

@property(readonly, nonatomic) BOOL hasName;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSString *requestedLanguageCode; // @synthesize requestedLanguageCode=_requestedLanguageCode;
@property(readonly, nonatomic) BOOL hasRequestedLanguageCode;
@property(readonly, nonatomic) BOOL hasLanguageCode;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) GEONameInfo *name; // @synthesize name=_name;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

