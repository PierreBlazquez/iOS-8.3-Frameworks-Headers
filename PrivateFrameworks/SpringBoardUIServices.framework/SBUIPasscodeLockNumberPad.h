//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SBNumberPadDelegate.h"

@class NSArray, NSString, SBNumberPadWithDelegate, SBUIButton, UIColor, UIControl<SBUIPasscodeNumberPadButton>;

@interface SBUIPasscodeLockNumberPad : UIView <SBNumberPadDelegate>
{
    SBNumberPadWithDelegate *_numberPad;
    id <SBUIPasscodeLockNumberPadDelegate> _delegate;
    UIView *_leftPaddingView;
    UIView *_rightPaddingView;
    UIView *_bottomPaddingView;
    SBUIButton *_emergencyCallButton;
    SBUIButton *_backspaceButton;
    SBUIButton *_cancelButton;
    UIControl<SBUIPasscodeNumberPadButton> *_downButton;
    BOOL _showsBackspaceButton;
    BOOL _showsEmergencyCallButton;
    BOOL _showsCancelButton;
    UIColor *_customBackgroundColor;
    BOOL _useLightStyle;
}

+ (struct UIEdgeInsets)_inputButtonCircleSpacing;
+ (struct CGSize)_inputButtonCircleSize;
+ (id)_buttonForCharacter:(unsigned int)arg1 withLightStyle:(BOOL)arg2;
@property(retain, nonatomic) UIControl<SBUIPasscodeNumberPadButton> *downButton; // @synthesize downButton=_downButton;
@property(nonatomic) BOOL showsBackspaceButton; // @synthesize showsBackspaceButton=_showsBackspaceButton;
- (float)_distanceToTopOfFirstButton;
- (void)_numberPadTouchDrag:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchCancelled:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchUp:(id)arg1 forEvent:(id)arg2;
- (void)_numberPadTouchDown:(id)arg1 forEvent:(id)arg2;
- (void)_configureAdditionalButtons;
- (void)_emergencyCallButtonHit;
- (void)_backspaceButtonHit;
- (void)_cancelButtonHit;
- (id)_fontForAncillaryButton;
- (id)initWithDefaultSizeAndLightStyle:(BOOL)arg1;
@property(nonatomic) BOOL showsEmergencyCallButton; // @synthesize showsEmergencyCallButton=_showsEmergencyCallButton;
- (void)_setLuminosityBoost:(float)arg1;
- (void)setCustomBackgroundColor:(id)arg1;
@property(readonly, nonatomic) NSArray *buttons;
- (void)setBackgroundAlpha:(float)arg1;
@property(nonatomic) BOOL showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property(nonatomic) id <SBUIPasscodeLockNumberPadDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
