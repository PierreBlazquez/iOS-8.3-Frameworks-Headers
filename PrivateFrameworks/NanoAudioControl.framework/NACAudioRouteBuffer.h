//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface NACAudioRouteBuffer : PBCodable <NSCopying>
{
    NSString *_routeName;
    int _routeSubtype;
    int _routeType;
    NSString *_uniqueIdentifier;
    BOOL _picked;
    BOOL _supportsVolumeControl;
    struct {
        unsigned int routeSubtype:1;
        unsigned int routeType:1;
        unsigned int picked:1;
        unsigned int supportsVolumeControl:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) BOOL supportsVolumeControl; // @synthesize supportsVolumeControl=_supportsVolumeControl;
@property(nonatomic) BOOL hasSupportsVolumeControl;
@property(nonatomic) BOOL picked; // @synthesize picked=_picked;
@property(nonatomic) BOOL hasPicked;
@property(nonatomic) BOOL hasRouteSubtype;
@property(nonatomic) int routeSubtype; // @synthesize routeSubtype=_routeSubtype;
@property(readonly, nonatomic) BOOL hasRouteName;
@property(readonly, nonatomic) BOOL hasUniqueIdentifier;
@property(nonatomic) BOOL hasRouteType;
@property(nonatomic) int routeType; // @synthesize routeType=_routeType;
@property(retain, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
@property(retain, nonatomic) NSString *routeName; // @synthesize routeName=_routeName;

@end

