//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class ISUDownload, NSNumber, NSString;

@interface SUScriptDownload : SUScriptObject
{
    ISUDownload *_download;
}

+ (id)phaseStringForDownload:(id)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;
- (id)initWithSSDownload:(id)arg1;
- (id)initWithISUDownload:(id)arg1;
@property(readonly) NSNumber *adamID;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
@property(readonly) float progress;
@property(readonly) NSString *phase;
- (void)dealloc;

@end
