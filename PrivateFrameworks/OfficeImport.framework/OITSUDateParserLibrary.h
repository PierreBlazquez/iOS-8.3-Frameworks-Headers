//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCondition, NSMutableArray;

@interface OITSUDateParserLibrary : NSObject
{
    unsigned int mMaxPermittedParsers;
    unsigned int mNumberOfUses;
    unsigned int mParsersCreated;
    NSMutableArray *mAvailableDateParsers;
    NSCondition *mParserLibraryConditionVariable;
}

+ (id)sharedDateParserLibrary;
+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (oneway void)release;
- (void)returnDateParser:(id)arg1;
- (id)checkoutDateParser;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned int)retainCount;
- (id)autorelease;
- (id)init;
- (id)retain;

@end
