//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SASTActionableTemplateItem.h"

@class NSString, SASTTemplateStarRating, SAUIDecoratedText;

@interface SASTLocationListItem : AceObject <SASTActionableTemplateItem>
{
}

+ (id)locationListItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)locationListItem;
@property(retain, nonatomic) SAUIDecoratedText *formattedDistance;
- (id)encodedClassName;
@property(retain, nonatomic) SAUIDecoratedText *subtitle;
@property(retain, nonatomic) id <SASTTemplateAction> action; // @dynamic action;
@property(retain, nonatomic) SAUIDecoratedText *title;
@property(retain, nonatomic) SASTTemplateStarRating *rating;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

