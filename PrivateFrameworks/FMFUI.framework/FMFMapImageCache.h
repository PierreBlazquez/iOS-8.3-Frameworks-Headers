//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCache;

@interface FMFMapImageCache : NSObject
{
    NSCache *__cache;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSCache *_cache; // @synthesize _cache=__cache;
- (id)_orientationKey;
- (id)_imageForMap:(id)arg1;
- (id)_keyForHandles:(id)arg1;
- (void)cacheMap:(id)arg1 forHandles:(id)arg2;
- (id)cachedMapForHandles:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;

@end

