//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSMutableCharacterSet, NSString, UIColor, UITextField;

@interface SBUIPasscodeEntryField : UIView <UITextFieldDelegate>
{
    id <SBUIPasscodeEntryFieldDelegate> _delegate;
    UITextField *_textField;
    NSMutableCharacterSet *_numericTrimmingSet;
    BOOL _ignoreCallbacks;
    BOOL _resigningFirstResponder;
    UIColor *_customBackgroundColor;
}

@property(readonly, nonatomic, getter=_textField) UITextField *textField; // @synthesize textField=_textField;
- (void)_handleKeyUIEvent:(id)arg1 source:(int)arg2;
- (void)notePasscodeFieldTextDidChange;
- (BOOL)shouldInsertPasscodeText:(id)arg1;
- (void)notePasscodeFieldDidAcceptEntry;
- (BOOL)_baseResignFirstResponder;
- (BOOL)_baseBecomeFirstResponder;
- (struct CGSize)_viewSize;
- (BOOL)_hasAnyCharacters;
- (void)_deleteLastCharacter;
- (id)initWithDefaultSizeAndLightStyle:(BOOL)arg1;
- (void)_resetForFailedPasscode:(BOOL)arg1 playUnlockFailedSound:(BOOL)arg2;
- (void)_setLuminosityBoost:(float)arg1;
- (void)_autofillForMesaWithCompletion:(CDUnknownBlockType)arg1;
- (void)_appendString:(id)arg1;
@property(retain, nonatomic) UIColor *customBackgroundColor; // @synthesize customBackgroundColor=_customBackgroundColor;
- (void)resetForFailedPasscode;
- (void)setBackgroundAlpha:(float)arg1;
- (void)deleteLastCharacter;
@property(copy, nonatomic) NSString *stringValue; // @dynamic stringValue;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)isFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)appendString:(id)arg1;
- (void)reset;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
@property(nonatomic) id <SBUIPasscodeEntryFieldDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
