//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLCGPathCache : NSObject
{
    struct __CFDictionary *_pathCache;
}

+ (id)sharedPathCache;
- (void)setPath:(struct CGPath *)arg1 forKey:(struct CGRect)arg2;
- (struct CGPath *)pathForKey:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

@end
