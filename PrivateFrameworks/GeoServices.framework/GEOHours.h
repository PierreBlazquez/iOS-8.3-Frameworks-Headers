//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface GEOHours : PBCodable <NSCopying>
{
    CDStruct_56d48c16 _days;
    NSMutableArray *_timeRanges;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(retain, nonatomic) NSMutableArray *timeRanges; // @synthesize timeRanges=_timeRanges;
- (id)timeRangeAtIndex:(unsigned int)arg1;
- (void)addDay:(int)arg1;
- (int)dayAtIndex:(unsigned int)arg1;
- (void)clearDays;
- (void)clearTimeRanges;
- (id)initWithPlaceDataHours:(id)arg1;
- (void)addTimeRange:(id)arg1;
- (unsigned int)timeRangesCount;
- (void)setDays:(int *)arg1 count:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned int daysCount;
@property(readonly, nonatomic) int *days;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

