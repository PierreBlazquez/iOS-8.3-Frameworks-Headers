//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface PLPhotoEditAggregateSession : NSObject
{
    BOOL _toggledOriginal;
    BOOL _pluginStarted;
    BOOL _pluginSaved;
    BOOL __hasCropSuggestion;
    BOOL __autoCropAdjusted;
    BOOL __autoCropReset;
}

+ (struct __CFString *)_keyForSessionEnd:(int)arg1;
@property(nonatomic) BOOL pluginSaved; // @synthesize pluginSaved=_pluginSaved;
@property(nonatomic) BOOL pluginStarted; // @synthesize pluginStarted=_pluginStarted;
@property(nonatomic) BOOL toggledOriginal; // @synthesize toggledOriginal=_toggledOriginal;
- (void)finishSessionWithEnd:(int)arg1;
- (void)notifyDidAdjustCrop;
- (void)notifyDidResetCrop;
- (void)notifyDidApplyAutoCrop;
- (void)finishSessionWithEnd:(int)arg1 newEditModel:(id)arg2 oldEditModel:(id)arg3;
- (void)_recordKeys:(id)arg1;
- (id)_sessionKeysWithEnd:(int)arg1;
@property(readonly, nonatomic) NSArray *_autoCropKeys;
@property(nonatomic, setter=_setAutoCropAdjusted:) BOOL _autoCropAdjusted; // @synthesize _autoCropAdjusted=__autoCropAdjusted;
@property(nonatomic, setter=_setAutoCropReset:) BOOL _autoCropReset; // @synthesize _autoCropReset=__autoCropReset;
@property(nonatomic, setter=_setHasCropSuggestion:) BOOL _hasCropSuggestion; // @synthesize _hasCropSuggestion=__hasCropSuggestion;

@end

