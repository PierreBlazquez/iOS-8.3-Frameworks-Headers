//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface GEORegionalResource : PBCodable <NSCopying>
{
    CDStruct_d66e66b9 *_tileRanges;
    unsigned int _tileRangesCount;
    unsigned int _tileRangesSpace;
    CDStruct_084d6ede _validSubManifestVersions;
    NSMutableArray *_attributions;
    NSMutableArray *_iconChecksums;
    NSMutableArray *_icons;
    unsigned int _x;
    unsigned int _y;
    unsigned int _z;
    struct {
        unsigned int x:1;
        unsigned int y:1;
        unsigned int z:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *attributions; // @synthesize attributions=_attributions;
- (unsigned int)attributionsCount;
- (void)clearIcons;
- (unsigned int)iconsCount;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setValidSubManifestVersions:(unsigned int *)arg1 count:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned int *validSubManifestVersions;
@property(nonatomic) BOOL hasZ;
@property(nonatomic) BOOL hasY;
@property(nonatomic) BOOL hasX;
- (void)addValidSubManifestVersion:(unsigned int)arg1;
- (unsigned int)validSubManifestVersionAtIndex:(unsigned int)arg1;
- (void)clearValidSubManifestVersions;
@property(readonly, nonatomic) unsigned int validSubManifestVersionsCount;
- (void)addTileRange:(CDStruct_d66e66b9)arg1;
- (void)clearTileRanges;
- (void)setTileRanges:(CDStruct_d66e66b9 *)arg1 count:(unsigned int)arg2;
@property(readonly, nonatomic) CDStruct_d66e66b9 *tileRanges;
- (CDStruct_d66e66b9)tileRangeAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int tileRangesCount;
@property(retain, nonatomic) NSMutableArray *iconChecksums; // @synthesize iconChecksums=_iconChecksums;
- (id)iconChecksumAtIndex:(unsigned int)arg1;
- (void)clearIconChecksums;
- (unsigned int)iconChecksumsCount;
- (id)iconAtIndex:(unsigned int)arg1;
- (void)addIconChecksum:(id)arg1;
- (void)addIcon:(id)arg1;
- (id)attributionAtIndex:(unsigned int)arg1;
- (void)clearAttributions;
- (void)addAttribution:(id)arg1;
@property(retain, nonatomic) NSMutableArray *icons; // @synthesize icons=_icons;
@property(nonatomic) unsigned int z; // @synthesize z=_z;
@property(nonatomic) unsigned int y; // @synthesize y=_y;
@property(nonatomic) unsigned int x; // @synthesize x=_x;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

