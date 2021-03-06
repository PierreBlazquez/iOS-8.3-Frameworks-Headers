//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSFastEnumeration.h"

@class NSArray, NSPointerFunctions, NSSet;

@interface NSHashTable : NSObject <NSCopying, NSCoding, NSFastEnumeration>
{
}

+ (id)alloc;
+ (id)hashTableWithWeakObjects;
+ (id)weakObjectsHashTable;
+ (id)hashTableWithOptions:(unsigned int)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)member:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSSet *setRepresentation;
- (void)removeItem:(const void *)arg1;
- (id)objectEnumerator;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOptions:(unsigned int)arg1 capacity:(unsigned int)arg2;
@property(readonly, copy) NSArray *allObjects;
@property(readonly, nonatomic) id anyObject;
- (BOOL)containsObject:(id)arg1;
- (id)description;
- (void)removeAllObjects;
- (id)copy;
- (void)addObject:(id)arg1;
- (id)init;
@property(readonly) unsigned int count;
- (void)encodeWithCoder:(id)arg1;
- (void)removeObject:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)removeAllItems;
- (id)mutableSet;
- (void)minusHashTable:(id)arg1;
- (void)unionHashTable:(id)arg1;
- (void)intersectHashTable:(id)arg1;
- (BOOL)isSubsetOfHashTable:(id)arg1;
- (BOOL)isEqualToHashTable:(id)arg1;
- (BOOL)intersectsHashTable:(id)arg1;
- (id)initWithPointerFunctions:(id)arg1 capacity:(unsigned int)arg2;
- (void)getKeys:(const void **)arg1 count:(unsigned int *)arg2;
- (void)insertKnownAbsentItem:(const void *)arg1;
- (unsigned int)weakCount;
- (void *)getItem:(const void *)arg1;
@property(readonly, copy) NSPointerFunctions *pointerFunctions;

@end

