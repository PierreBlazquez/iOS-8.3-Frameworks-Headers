//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOResourceManifestConfiguration, NSError, NSLocale, NSString, VKSharedResources, VKStyleManager, VKTileKeyList, VKTileKeyMap, VKTilePool;

@interface VKTileSource : NSObject
{
    id <VKTileSourceClient> _client;
    VKTilePool *_tilePool;
    VKTileKeyMap *_pendingLoads;
    VKTileKeyList *_decoding;
    VKTileKeyList *_failedTiles;
    VKStyleManager *_styleManager;
    float _contentScale;
    VKSharedResources *_sharedResources;
    int loadingTiles;
    NSError *_recentError;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    NSLocale *_locale;
    NSString *_tileLoaderClientIdentifier;
    BOOL _preloadOnly;
    BOOL _requireWiFi;
}

@property(nonatomic) BOOL requireWiFi; // @synthesize requireWiFi=_requireWiFi;
@property(nonatomic) BOOL preloadOnly; // @synthesize preloadOnly=_preloadOnly;
- (void)foreachTileInPool:(CDUnknownBlockType)arg1;
- (void)_failedToLoadSourceKey:(const struct VKTileKey *)arg1 downloadKey:(const struct _GEOTileKey *)arg2 error:(id)arg3;
- (void)decodeData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
- (BOOL)_shouldDecodeTile:(const struct VKTileKey *)arg1;
- (struct VKTileKey)sourceKeyForDownloadKey:(const struct _GEOTileKey *)arg1;
- (void)didLoadTile:(id)arg1 forKey:(const struct VKTileKey *)arg2;
- (BOOL)_shouldUseDecodedTile:(id)arg1 extraInfo:(id)arg2;
- (id)_extraInfoForPendingSourceKey:(const struct VKTileKey *)arg1;
- (void)didFetchData:(id)arg1 forKey:(const struct _GEOTileKey *)arg2;
- (void)didFailToLoadTileKey:(const struct _GEOTileKey *)arg1 error:(id)arg2;
- (void)didFinishWithNetwork;
- (void)willGoToNetwork;
- (BOOL)mayUseNetwork;
- (BOOL)cancelFetchForKey:(const struct VKTileKey *)arg1 sourceKey:(const struct VKTileKey *)arg2;
- (void)cancelDownload:(const struct _GEOTileKey *)arg1;
- (void)fetchTileForKey:(const struct VKTileKey *)arg1 sourceKey:(const struct VKTileKey *)arg2;
- (void)performDownload:(const struct _GEOTileKey *)arg1;
- (void)_fetchedTile:(id)arg1;
- (void)failedToDecodeSourceKey:(const struct VKTileKey *)arg1;
- (id)tileForSourceKey:(const struct VKTileKey *)arg1 renderKey:(const struct VKTileKey *)arg2;
- (struct VKTileKey)nativeKeyForRenderKey:(const struct VKTileKey *)arg1;
- (void)fetchedTile:(id)arg1 forKey:(const struct VKTileKey *)arg2;
- (struct _GEOTileKey)downloadKeyAtX:(unsigned int)arg1 y:(unsigned int)arg2 z:(unsigned int)arg3;
- (void)tileAvailabilityChanged:(id)arg1;
- (id)tileLoader;
@property(readonly, nonatomic) int zEquivalenceClass;
@property(readonly, nonatomic) unsigned int maximumDownloadZoomLevel;
- (struct _GEOTileKey)downloadKeyForSourceKey:(const struct VKTileKey *)arg1;
- (struct VKTileKey)sourceKeyForRenderKey:(const struct VKTileKey *)arg1;
- (BOOL)canFetchTileForKey:(const struct VKTileKey *)arg1;
- (id)tileForKey:(const struct VKTileKey *)arg1;
- (void)forceDownload;
- (void)fetchTileForKey:(const struct VKTileKey *)arg1;
@property(readonly, nonatomic) unsigned int minimumDownloadZoomLevel;
- (BOOL)cancelFetchForKey:(const struct VKTileKey *)arg1;
@property(nonatomic) id <VKTileSourceClient> client; // @synthesize client=_client;
- (void)populateVisibleTileSets:(id)arg1 withTiles:(id)arg2;
- (id)tileForData:(id)arg1 downloadKey:(const struct _GEOTileKey *)arg2 sourceKey:(const struct VKTileKey *)arg3;
@property(readonly, nonatomic) BOOL maximumZoomLevelBoundsCamera;
@property(readonly, nonatomic) BOOL minimumZoomLevelBoundsCamera;
- (void)clearCaches;
@property(retain, nonatomic) VKSharedResources *sharedResources; // @synthesize sharedResources=_sharedResources;
- (id)initWithResourceManifestConfiguration:(id)arg1 locale:(id)arg2;
@property(readonly, nonatomic) int maximumZoomLevel;
@property(readonly, nonatomic) int minimumZoomLevel;
- (id)detailedDescription;
@property(retain, nonatomic) VKStyleManager *styleManager; // @synthesize styleManager=_styleManager;
@property(readonly, nonatomic) struct Device *device;
@property(nonatomic) float contentScale; // @synthesize contentScale=_contentScale;
@property(readonly, nonatomic) int tileSize;
- (id)init;
- (void)dealloc;

@end
