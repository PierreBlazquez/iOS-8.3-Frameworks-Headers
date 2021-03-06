//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface CLLatLonPolygon : PBCodable <NSCopying>
{
    CDStruct_57821370 _latitudes;
    CDStruct_57821370 _longitudes;
    double _tolerance;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setLongitudes:(double *)arg1 count:(unsigned int)arg2;
@property(readonly, nonatomic) double *longitudes;
- (void)setLatitudes:(double *)arg1 count:(unsigned int)arg2;
@property(readonly, nonatomic) double *latitudes;
- (void)addLongitude:(double)arg1;
- (double)longitudeAtIndex:(unsigned int)arg1;
- (void)clearLongitudes;
@property(readonly, nonatomic) unsigned int longitudesCount;
- (void)addLatitude:(double)arg1;
- (double)latitudeAtIndex:(unsigned int)arg1;
- (void)clearLatitudes;
@property(readonly, nonatomic) unsigned int latitudesCount;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
@property(nonatomic) double tolerance; // @synthesize tolerance=_tolerance;

@end

