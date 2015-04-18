//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VoiceMemos/RCPreviewController.h>

@class RCCompositionController;

@interface RCSavedRecordingPreviewController : RCPreviewController
{
    BOOL _postPrepareShouldPlay;
    CDStruct_73a5d3ca _postPrepareTimeRange;
    double _postPrepareStartTime;
    RCCompositionController *_compositionController;
}

+ (id)sharedRecordingPreviewController;
- (double)currentTime;
@property(retain, nonatomic) RCCompositionController *compositionController; // @synthesize compositionController=_compositionController;
- (CDStruct_73a5d3ca)playableTimeRange;
- (void)setPlayableTimeRange:(CDStruct_73a5d3ca)arg1;
- (void)playOrRestart;
- (void)playerCurrentRateDidChange:(id)arg1;
- (void)playWithTimeRange:(CDStruct_73a5d3ca)arg1 startTime:(double)arg2;
- (void)pause;
- (void).cxx_destruct;
- (void)stop;
- (void)setCurrentTime:(double)arg1;

@end
