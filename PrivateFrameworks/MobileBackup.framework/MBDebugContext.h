//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary;

@interface MBDebugContext : NSObject
{
    NSMutableDictionary *_dictionary;
}

+ (id)defaultDebugContext;
- (id)valueForName:(id)arg1;
- (BOOL)eval:(id)arg1;
- (id)performSelectorForName:(id)arg1 withObject:(id)arg2;
- (id)performSelectorForName:(id)arg1;
- (void)setDelegate:(id)arg1 andSelector:(SEL)arg2 forName:(id)arg3;
- (int)intForName:(id)arg1;
- (void)setInt:(int)arg1 forName:(id)arg2;
- (BOOL)boolForName:(id)arg1;
- (void)setBool:(BOOL)arg1 forName:(id)arg2;
- (void)setFlag:(id)arg1;
@property(retain, nonatomic) NSDate *simulatedDate;
- (void)removeValueForName:(id)arg1;
- (void)setValue:(id)arg1 forName:(id)arg2;
@property(readonly, nonatomic) long time;
- (id)description;
- (id)init;
- (void)dealloc;
- (BOOL)isFlagSet:(id)arg1;

@end

