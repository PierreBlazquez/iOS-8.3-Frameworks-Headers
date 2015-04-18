//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSMutableArray, VKLabelTile;

@interface VKLabelNavTileData : NSObject
{
    VKLabelTile *_tile;
    NSMapTable *_geoJunctionToJunctionMap;
    NSMutableArray *_tileEdgeJunctions;
    BOOL _foundTileEdgeJunctions;
    BOOL _oppositeCarriagewayJunctionsValid;
    NSMutableArray *_oppositeCarriagewayJunctions;
    struct vector<LabelNavJunctionInfo, std::__1::allocator<LabelNavJunctionInfo>> _junctionInfos;
}

@property(nonatomic) BOOL oppositeCarriagewayJunctionsValid; // @synthesize oppositeCarriagewayJunctionsValid=_oppositeCarriagewayJunctionsValid;
- (void)findOppositeCarriagewayJunctionsWithRouteFeatures:(unordered_map_68316259 *)arg1 distanceThreshold:(double)arg2;
- (void)appendNavJunctionsInWorldRect:(const Box_3d7e3c2c *)arg1 junctions:(id)arg2;
- (id)findTileEdgeJunctionAtCoordinate:(Matrix_8746f91e)arg1;
- (id)junctionAtCoordinate:(Matrix_8746f91e)arg1;
- (id)junctionForGeoJunction:(CDStruct_dde70fb6 *)arg1;
- (void)initializeJunctionInfos;
- (void)_findTileEdgeJunctions;
- (void)addJunction:(id)arg1;
@property(readonly, retain, nonatomic) NSMutableArray *oppositeCarriagewayJunctions; // @synthesize oppositeCarriagewayJunctions=_oppositeCarriagewayJunctions;
@property(readonly, retain, nonatomic) VKLabelTile *tile; // @synthesize tile=_tile;
- (id)initWithTile:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;

@end
