//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "SYObject.h"

@class NSString, NanoPhoneVoicemailBody;

@interface NanoPhoneVoicemailMeta : PBCodable <SYObject, NSCopying>
{
    double _date;
    long long _identifier;
    long long _remoteUID;
    long long _voicemailNumber;
    NSString *_callbackNumber;
    NSString *_dataPath;
    int _duration;
    int _flags;
    NSString *_sender;
    NanoPhoneVoicemailBody *_voicemailBody;
    struct {
        unsigned int date:1;
        unsigned int identifier:1;
        unsigned int remoteUID:1;
        unsigned int duration:1;
        unsigned int flags:1;
    } _has;
}

+ (id)xpcObjectAsArray:(id)arg1;
+ (id)voicemailWithMessage:(id)arg1;
+ (id)voicemailWithSYContext:(id)arg1;
@property(nonatomic) BOOL hasFlags;
@property(retain, nonatomic) NSString *dataPath; // @synthesize dataPath=_dataPath;
@property(retain, nonatomic) NSString *callbackNumber; // @synthesize callbackNumber=_callbackNumber;
@property(nonatomic) long long remoteUID; // @synthesize remoteUID=_remoteUID;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)voicemailDescription;
- (id)callbackNumberOrSender;
- (void)loadVoicemailBodyIfNeeded;
- (id)displayLabelFromAddressBook:(void *)arg1;
- (id)displayNameFromAddressBook:(void *)arg1;
- (void)attachToXpcObject:(id)arg1;
- (id)asXpcObject;
- (id)contextWithSyncOperation:(int)arg1;
- (id)initWithVoicemail:(id)arg1;
@property(retain, nonatomic) NanoPhoneVoicemailBody *voicemailBody; // @synthesize voicemailBody=_voicemailBody;
@property(nonatomic) long long voicemailNumber; // @synthesize voicemailNumber=_voicemailNumber;
@property(readonly, nonatomic) BOOL hasVoicemailBody;
@property(readonly, nonatomic) BOOL hasDataPath;
@property(readonly, nonatomic) BOOL hasCallbackNumber;
@property(readonly, nonatomic) BOOL hasSender;
@property(nonatomic) BOOL hasRemoteUID;
@property(nonatomic) BOOL hasDuration;
- (int)syncOperation;
@property(nonatomic) BOOL hasDate;
@property(nonatomic) BOOL hasIdentifier;
@property(nonatomic) int flags; // @synthesize flags=_flags;
- (id)syncId;
@property(retain, nonatomic) NSString *sender; // @synthesize sender=_sender;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentation;
@property(nonatomic) double date; // @synthesize date=_date;
@property(nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
