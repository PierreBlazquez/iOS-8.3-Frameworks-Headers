//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKTurnBasedExchangeInternal, GKTurnBasedMatch, GKTurnBasedParticipant, NSArray, NSData, NSDate, NSString;

@interface GKTurnBasedExchange : NSObject
{
    GKTurnBasedParticipant *_sender;
    GKTurnBasedMatch *_matchWeak;
    GKTurnBasedExchangeInternal *_internal;
    NSArray *_replies;
    NSArray *_recipients;
}

+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
@property(nonatomic) GKTurnBasedMatch *match; // @synthesize match=_matchWeak;
- (void)replyWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 data:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancelWithLocalizableMessageKey:(id)arg1 arguments:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateInternalFromMatchInternal:(id)arg1;
@property(retain, nonatomic) NSArray *replies; // @synthesize replies=_replies;
@property(retain) GKTurnBasedExchangeInternal *internal; // @synthesize internal=_internal;
- (id)initWithInternalRepresentation:(id)arg1;
@property(readonly, nonatomic) BOOL status;
@property(retain, nonatomic) GKTurnBasedParticipant *sender; // @synthesize sender=_sender;
- (id)valueForUndefinedKey:(id)arg1;
@property(readonly, nonatomic) NSString *message; // @dynamic message;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;

// Remaining properties
@property(retain, nonatomic) NSDate *completionDate; // @dynamic completionDate;
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) NSString *exchangeID; // @dynamic exchangeID;
@property(readonly, nonatomic) NSDate *sendDate; // @dynamic sendDate;
@property(retain, nonatomic) NSDate *timeoutDate; // @dynamic timeoutDate;

@end

