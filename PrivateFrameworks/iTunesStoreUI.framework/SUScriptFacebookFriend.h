//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSDictionary, NSString;

@interface SUScriptFacebookFriend : SUScriptObject
{
    NSDictionary *_dictionary;
}

+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;
- (id)initWithFriendDictionary:(id)arg1;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)initWithName:(id)arg1;
@property(readonly) NSString *identifier;
@property(readonly) NSString *name;
- (void)dealloc;

@end
