//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface TUCallModelState : NSObject <NSSecureCoding>
{
    BOOL _ambiguous;
    BOOL _swappable;
    BOOL _mergeable;
    BOOL _holdAllowed;
    BOOL _addCallAllowed;
    BOOL _takingCallsPrivateAllowed;
    BOOL _hardPauseAvailable;
    BOOL _endAndAnswerAllowed;
    BOOL _holdAndAnswerAllowed;
    BOOL _sendToVoicemailAllowed;
    int _ambiguityState;
}

+ (BOOL)supportsSecureCoding;
- (id)initWithAllPropertiesAllowed;
@property(nonatomic, getter=isSendToVoicemailAllowed) BOOL sendToVoicemailAllowed; // @synthesize sendToVoicemailAllowed=_sendToVoicemailAllowed;
@property(nonatomic, getter=isHoldAndAnswerAllowed) BOOL holdAndAnswerAllowed; // @synthesize holdAndAnswerAllowed=_holdAndAnswerAllowed;
@property(nonatomic, getter=isEndAndAnswerAllowed) BOOL endAndAnswerAllowed; // @synthesize endAndAnswerAllowed=_endAndAnswerAllowed;
@property(nonatomic, getter=isHardPauseAvailable) BOOL hardPauseAvailable; // @synthesize hardPauseAvailable=_hardPauseAvailable;
@property(nonatomic, getter=isTakingCallsPrivateAllowed) BOOL takingCallsPrivateAllowed; // @synthesize takingCallsPrivateAllowed=_takingCallsPrivateAllowed;
@property(nonatomic) int ambiguityState; // @synthesize ambiguityState=_ambiguityState;
@property(nonatomic, getter=isAddCallAllowed) BOOL addCallAllowed; // @synthesize addCallAllowed=_addCallAllowed;
@property(nonatomic, getter=isHoldAllowed) BOOL holdAllowed; // @synthesize holdAllowed=_holdAllowed;
@property(nonatomic, getter=isMergeable) BOOL mergeable; // @synthesize mergeable=_mergeable;
@property(nonatomic, getter=isSwappable) BOOL swappable; // @synthesize swappable=_swappable;
- (BOOL)updateInternalState;
- (void)handlePossibleStateChange;
@property(readonly, nonatomic, getter=isAmbiguous) BOOL ambiguous; // @synthesize ambiguous=_ambiguous;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

