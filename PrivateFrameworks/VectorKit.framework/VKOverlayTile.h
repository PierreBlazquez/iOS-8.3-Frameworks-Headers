//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKTile.h>

@class NSArray, NSMapTable, NSMutableArray, VKVectorTile;

@interface VKOverlayTile : VKTile
{
    NSMutableArray *_overlays;
    VKVectorTile *_roadTile;
    NSMapTable *_tileForOverlay;
    float _maximumStyleZ;
}

@property(retain, nonatomic) VKVectorTile *roadTile; // @synthesize roadTile=_roadTile;
- (id)tileForOverlay:(id)arg1;
- (void)setTile:(id)arg1 forOverlay:(id)arg2;
@property(readonly, nonatomic) float maximumStyleZ; // @synthesize maximumStyleZ=_maximumStyleZ;
- (void)addOverlay:(id)arg1;
@property(readonly, nonatomic) NSArray *overlays; // @synthesize overlays=_overlays;
- (void)updateViewDependentStateWithContext:(id)arg1;
- (void)dealloc;

@end
