//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGEntity.h>

@class NSArray, NSIndexSet, NSMutableArray, NSMutableDictionary, NSString;

@interface SGPipelineEntity : SGEntity
{
    NSMutableArray *_enrichments;
    NSString *_plainTextContentCache;
    BOOL _plainTextContentCacheGenerated;
    struct _opaque_pthread_mutex_t _plainTextContentCacheLock;
    BOOL _fullDownloadRequested;
    CDStruct_b2968299 _inhumanFeatures;
    NSIndexSet *_plainTextQuotedRegions;
    NSIndexSet *_plainTextTabularRegions;
    struct __DDResult *_dataDetectorsSignature;
    NSArray *_plainTextLines;
    unsigned int *_htmlOffsets;
    NSArray *_plainTextDetectedData;
    NSMutableDictionary *_emailToCanonicalEmailCache;
    NSArray *_headers;
    struct _NSRange _plainTextSigRange;
}

+ (id)emailAddress:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(BOOL)arg4 context:(id)arg5;
+ (id)phoneNumber:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(BOOL)arg4 context:(id)arg5;
+ (id)address:(id)arg1 forIdentity:(id)arg2 parent:(id)arg3 curated:(BOOL)arg4 context:(id)arg5;
- (id)initWithParent:(id)arg1;
@property(readonly, nonatomic) NSArray *headers; // @synthesize headers=_headers;
@property(readonly, nonatomic) NSArray *emailAddresses;
@property(readonly, nonatomic) NSArray *phoneNumbers;
@property(readonly, nonatomic) NSMutableDictionary *emailToCanonicalEmailCache; // @synthesize emailToCanonicalEmailCache=_emailToCanonicalEmailCache;
@property(retain, nonatomic) NSArray *plainTextDetectedData; // @synthesize plainTextDetectedData=_plainTextDetectedData;
@property(readonly, nonatomic) unsigned int *htmlOffsets; // @synthesize htmlOffsets=_htmlOffsets;
@property(readonly, nonatomic) NSArray *plainTextLines; // @synthesize plainTextLines=_plainTextLines;
@property(nonatomic) struct __DDResult *dataDetectorsSignature; // @synthesize dataDetectorsSignature=_dataDetectorsSignature;
@property(nonatomic) struct _NSRange plainTextSigRange; // @synthesize plainTextSigRange=_plainTextSigRange;
@property(retain, nonatomic) NSIndexSet *plainTextTabularRegions; // @synthesize plainTextTabularRegions=_plainTextTabularRegions;
@property(retain, nonatomic) NSIndexSet *plainTextQuotedRegions; // @synthesize plainTextQuotedRegions=_plainTextQuotedRegions;
- (id)debugRegions;
- (id)templateShortName;
@property(readonly, getter=hasFullDownloadBeenRequested) BOOL fullDownloadRequested;
- (void)requestFullDownload;
- (void)chopOffContentAfterIndex:(unsigned int)arg1;
- (void)chopOffContentBeforeIndex:(unsigned int)arg1;
@property(readonly, nonatomic) CDStruct_b2968299 *inhumanFeatures;
- (void)enumeratePlainTextLines:(CDUnknownBlockType)arg1;
- (void)setPlainTextLines:(id)arg1 utf8Offsets:(id)arg2;
- (void)enumeratePeople:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSString *authorEmail;
- (void)addDetection:(id)arg1 forIdentity:(id)arg2;
- (id)initWithCuratedContactWithABRecordID:(int)arg1 sourceKey:(id)arg2 name:(id)arg3 creationTimestamp:(id)arg4 lastModifiedTimestamp:(id)arg5 emailAddresses:(id)arg6 phoneNumbers:(id)arg7 postalAddresses:(id)arg8;
- (id)initWithSimpleCalendarEvent:(id)arg1 fromSource:(id)arg2;
- (id)initWithEmailMessage:(id)arg1 fromSource:(id)arg2;
- (BOOL)isPerson;
- (id)contactDetailsWithType:(unsigned int)arg1;
@property(readonly, nonatomic) NSArray *enrichments;
- (id)initWithPseudoContactWithKey:(id)arg1 parent:(id)arg2 name:(id)arg3;
- (void)addEnrichment:(id)arg1;
- (void)addDetectedPhoneNumber:(id)arg1 forIdentity:(id)arg2 context:(id)arg3;
- (void)addDetectedEmailAddress:(id)arg1 forIdentity:(id)arg2 context:(id)arg3;
- (void)addDetectedPostalAddress:(id)arg1 forIdentity:(id)arg2 context:(id)arg3;
- (id)initWithContactDetailWithKey:(id)arg1 type:(unsigned int)arg2 curated:(BOOL)arg3 parent:(id)arg4 value:(id)arg5 context:(id)arg6;
- (void)addCuratedPostalAddress:(id)arg1;
- (void)addCuratedPhoneNumber:(id)arg1;
- (void)addCuratedEmailAddress:(id)arg1;
- (void)addParticipants:(id)arg1 type:(unsigned int)arg2;
- (void)addParticipant:(id)arg1 type:(unsigned int)arg2;
- (BOOL)isInhuman;
- (id)initWithDuplicateKey:(id)arg1 title:(id)arg2;
- (id)initWithDuplicateKey:(id)arg1 title:(id)arg2 parent:(id)arg3;
- (id)initPrivately;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) NSArray *addresses;
@property(readonly, nonatomic) NSString *plainTextContent;

@end
