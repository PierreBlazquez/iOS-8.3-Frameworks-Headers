//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUI/PUIndexPathSet.h>

@class NSMutableSet;

@interface PUMutableIndexPathSet : PUIndexPathSet
{
    NSMutableSet *_indexPaths;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (int)count;
- (void)setIndexPathSet:(id)arg1;
- (void)removeIndexPath:(id)arg1;
- (void)addIndexPath:(id)arg1;
- (void)removeAllIndexPaths;
- (void)enumerateIndexPathsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)containsIndexPath:(id)arg1;

@end

