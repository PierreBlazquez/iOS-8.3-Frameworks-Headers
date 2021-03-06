//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSWeakCallback.h>

@class NSKeyValueProperty, NSObject, NSPointerArray;

@interface NSKeyValueObservance : NSWeakCallback
{
    int _retainCountMinusOne;
    NSObject *_observer;
    NSKeyValueProperty *_property;
    unsigned int _options;
    void *_context;
    NSObject *_originalObservable;
    unsigned int _cachedUnrotatedHashComponent;
    BOOL _cachedIsShareable;
    NSPointerArray *_observationInfos;
}

- (oneway void)release;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)description;
- (unsigned int)hash;
- (unsigned int)retainCount;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)retain;
- (id)_initWithObserver:(id)arg1 property:(id)arg2 options:(unsigned int)arg3 context:(void *)arg4 originalObservable:(id)arg5;

@end

