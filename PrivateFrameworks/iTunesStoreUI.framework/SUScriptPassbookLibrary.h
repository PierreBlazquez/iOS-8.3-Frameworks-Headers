//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, PKPassLibrary;

@interface SUScriptPassbookLibrary : SUScriptObject
{
    PKPassLibrary *_passLibrary;
}

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;
- (id)initWithPassLibrary:(id)arg1;
@property(readonly) NSArray *passes;
- (id)attributeKeys;
- (id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)dealloc;

@end

