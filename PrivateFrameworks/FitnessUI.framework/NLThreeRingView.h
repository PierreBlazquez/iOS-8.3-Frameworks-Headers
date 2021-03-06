//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NLArcView, UIImageView;

@interface NLThreeRingView : UIView
{
    float _outerDiameter;
    float _interspacing;
    float _lineThickness;
    NLArcView *_calorieArcView;
    NLArcView *_briskArcView;
    NLArcView *_sedentaryArcView;
    UIImageView *_fadedView;
}

@property(retain, nonatomic) UIImageView *fadedView; // @synthesize fadedView=_fadedView;
@property(retain, nonatomic) NLArcView *sedentaryArcView; // @synthesize sedentaryArcView=_sedentaryArcView;
@property(retain, nonatomic) NLArcView *briskArcView; // @synthesize briskArcView=_briskArcView;
@property(retain, nonatomic) NLArcView *calorieArcView; // @synthesize calorieArcView=_calorieArcView;
@property(nonatomic) float lineThickness; // @synthesize lineThickness=_lineThickness;
@property(nonatomic) float interspacing; // @synthesize interspacing=_interspacing;
@property(nonatomic) float outerDiameter; // @synthesize outerDiameter=_outerDiameter;
- (void)setFaded:(BOOL)arg1;
- (void)setSedentaryPercentage:(float)arg1 animated:(BOOL)arg2;
- (void)setBriskPercentage:(float)arg1 animated:(BOOL)arg2;
- (void)setShowExpectedDot:(BOOL)arg1;
- (void)setCalorieExpectedPercentage:(float)arg1;
- (void)setCaloriePercentage:(float)arg1 animated:(BOOL)arg2;
- (id)initWithDiameter:(float)arg1 interspacing:(float)arg2 thickness:(float)arg3 delegate:(id)arg4;
- (void)setRingsCalorieAlpha:(float)arg1 briskAlpha:(float)arg2 sedentaryAlpha:(float)arg3;
- (id)fadedRingImageForDiameter:(float)arg1 interspacing:(float)arg2 thickness:(float)arg3;
- (id)_generateSedentaryArc;
- (id)_generateBriskArc;
- (id)_generateCalorieArc;
- (id)_generateArcWithNesting:(int)arg1 fromColor:(id)arg2 toColor:(id)arg3;
- (void).cxx_destruct;
- (id)image;

@end

