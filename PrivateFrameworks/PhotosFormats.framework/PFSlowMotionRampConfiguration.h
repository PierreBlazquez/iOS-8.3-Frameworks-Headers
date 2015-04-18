//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PFSlowMotionRampConfiguration : NSObject
{
    unsigned int _playbackNumIntermediateSteps;
    unsigned int _exportNumIntermediateSteps;
    float _playbackRampCurveExponent;
    float _exportRampCurveExponent;
    double _rampTime;
    double _introTime;
    double _outroTime;
    double _volumeSuppressionIntroTime;
    double _volumeSuppressionOutroTime;
}

@property(readonly, nonatomic) double volumeSuppressionOutroTime; // @synthesize volumeSuppressionOutroTime=_volumeSuppressionOutroTime;
@property(readonly, nonatomic) double volumeSuppressionIntroTime; // @synthesize volumeSuppressionIntroTime=_volumeSuppressionIntroTime;
- (void)computeRampToTargetRate:(float)arg1 forExport:(BOOL)arg2 outTimeSteps:(id *)arg3 outIntermediateRates:(id *)arg4;
- (id)initForRampDown:(BOOL)arg1;
@property(readonly, nonatomic) float playbackRampCurveExponent; // @synthesize playbackRampCurveExponent=_playbackRampCurveExponent;
@property(readonly, nonatomic) float exportRampCurveExponent; // @synthesize exportRampCurveExponent=_exportRampCurveExponent;
@property(readonly, nonatomic) double outroTime; // @synthesize outroTime=_outroTime;
@property(readonly, nonatomic) double introTime; // @synthesize introTime=_introTime;
@property(readonly, nonatomic) double rampTime; // @synthesize rampTime=_rampTime;
@property(readonly, nonatomic) unsigned int playbackNumIntermediateSteps; // @synthesize playbackNumIntermediateSteps=_playbackNumIntermediateSteps;
@property(readonly, nonatomic) unsigned int exportNumIntermediateSteps; // @synthesize exportNumIntermediateSteps=_exportNumIntermediateSteps;
- (id)init;

@end
