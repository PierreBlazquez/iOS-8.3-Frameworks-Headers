//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, NSString, PKCheckGlyphView, PKFingerprintGlyphView, PKPhoneGlyphView, UIColor, UIImage, UIImageView;

@interface PKGlyphView : UIView
{
    unsigned int _transitionIndex;
    BOOL _transitioning;
    int _priorState;
    NSMutableArray *_transitionCompletionHandlers;
    double _lastAnimationWillFinish;
    BOOL _phoneWiggling;
    NSString *_phoneWiggleAnimationKey;
    struct {
        unsigned int showingPhone:1;
        unsigned int phoneRotated:1;
    } _layoutFlags;
    PKFingerprintGlyphView *_fingerprintView;
    PKPhoneGlyphView *_phoneView;
    PKCheckGlyphView *_checkView;
    float _phoneAspectRatio;
    UIImageView *_customImageView;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    UIImage *_customImage;
    int _state;
    id <PKGlyphViewDelegate> _delegate;
}

@property(copy, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(copy, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
- (id)initWithStyle:(int)arg1;
- (void)setState:(int)arg1;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) id <PKGlyphViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIImage *customImage; // @synthesize customImage=_customImage;
- (void)setSecondaryColor:(id)arg1 animated:(BOOL)arg2;
- (struct CGPoint)_phonePositionDeltaWhileShownFromRotationPercentage:(float)arg1 toPercentage:(float)arg2;
- (struct CATransform3D)_phoneTransformDeltaWhileShownFromRotationPercentage:(float)arg1 toPercentage:(float)arg2;
- (struct CGPoint)_phonePositionWhileShownWithRotationPercentage:(float)arg1;
- (void)_updateLastAnimationTimeWithAnimationOfDuration:(double)arg1;
- (void)_executeAfterMinimumAnimationDurationForStateTransition:(CDUnknownBlockType)arg1;
- (void)_finishTransitionForIndex:(unsigned int)arg1;
- (void)_updateCheckViewStateAnimated:(BOOL)arg1;
- (void)_updateCustomImageViewOpacityAnimated:(BOOL)arg1;
- (void)_updatePhoneWiggleIfNecessary;
- (void)_performTransitionWithTransitionIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setState:(int)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (double)_minimumAnimationDurationForStateTransition;
- (void)_updatePhoneLayoutWithTransitionIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)_executeTransitionCompletionHandlers:(BOOL)arg1;
- (void)setPrimaryColor:(id)arg1 animated:(BOOL)arg2;
- (void)_startPhoneWiggle;
- (void)_endPhoneWiggle;

@end
