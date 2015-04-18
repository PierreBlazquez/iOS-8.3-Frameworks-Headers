//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, PKPaper;

@interface PKPrintSettings : NSObject
{
    NSMutableDictionary *_dict;
    PKPaper *paper;
}

+ (id)printSettingsForPrinter:(id)arg1;
+ (id)default;
+ (id)photo;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)settingsDict;
@property(retain, nonatomic) NSMutableDictionary *dict; // @synthesize dict=_dict;
@property(retain, nonatomic) PKPaper *paper; // @synthesize paper;
- (void)removeObjectForKey:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;

@end
