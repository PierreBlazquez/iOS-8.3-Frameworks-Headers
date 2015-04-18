//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBKKeyValuePayloadPair.h"

@class NSData, NSString;

@interface SBKGenericKeyValuePair : NSObject <SBKKeyValuePayloadPair>
{
    NSString *_kvsKey;
    NSData *_kvsPayload;
}

+ (id)pairWithKVSKey:(id)arg1 kvsPayload:(id)arg2;
- (id)kvsValueDescription;
@property(readonly, nonatomic) NSData *kvsPayload; // @synthesize kvsPayload=_kvsPayload;
@property(readonly, nonatomic) NSString *kvsKey; // @synthesize kvsKey=_kvsKey;
- (id)initWithKVSKey:(id)arg1 kvsPayload:(id)arg2;
- (void).cxx_destruct;
- (double)timestamp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
