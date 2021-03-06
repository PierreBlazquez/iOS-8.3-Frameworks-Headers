//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSArray, NSString;

@interface SUScriptActivityViewController : SUScriptViewController
{
    NSArray *_applicationActivities;
    NSArray *_providers;
}

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;
@property(readonly) NSString *activityTypeSaveToCameraRoll;
@property(readonly) NSString *activityTypePrint;
@property(readonly) NSString *activityTypePostToWeibo;
@property(readonly) NSString *activityTypePostToVimeo;
@property(readonly) NSString *activityTypePostToTwitter;
@property(readonly) NSString *activityTypePostToFlickr;
@property(readonly) NSString *activityTypePostToFacebook;
@property(readonly) NSString *activityTypeMessage;
@property(readonly) NSString *activityTypeMail;
@property(readonly) NSString *activityTypeCopyToPasteboard;
@property(readonly) NSString *activityTypeAssignToContact;
@property(readonly) NSString *activityTypeAddToReadingList;
- (id)initWithScriptItemProviders:(id)arg1 applicationActivities:(id)arg2;
- (void)setTitle:(id)arg1 forActivityType:(id)arg2;
- (id)newNativeViewController;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
@property(copy) id excludedActivityTypes;
- (void)dealloc;

@end

