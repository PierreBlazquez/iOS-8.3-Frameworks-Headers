//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/NSMutableArray.h>

@interface __NSArrayM : NSMutableArray
{
    unsigned int _used;
    unsigned int _offset;
    unsigned int _size:28;
    unsigned int _doHardRetain:1;
    unsigned int _doWeakAccess:1;
    unsigned int _hasObjects:1;
    unsigned int _hasStrongReferences:1;
    unsigned long _mutations;
    id *_list;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)__new:(const id *)arg1:(unsigned int)arg2:(BOOL)arg3:(BOOL)arg4:(BOOL)arg5;
- (void)finalize;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (void)exchangeObjectAtIndex:(unsigned int)arg1 withObjectAtIndex:(unsigned int)arg2;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)replaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (unsigned int)indexOfObjectIdenticalTo:(id)arg1;
- (void)removeLastObject;
- (void)enumerateObjectsWithOptions:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)removeAllObjects;
- (void)addObject:(id)arg1;
- (id)objectAtIndex:(unsigned int)arg1;
- (unsigned int)count;
- (void)dealloc;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)_mutate;
- (BOOL)_hasStrongReferences;
- (BOOL)_hasObjects;
- (void)setObject:(id)arg1 atIndex:(unsigned int)arg2;

@end

