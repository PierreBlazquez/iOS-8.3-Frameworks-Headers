//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SAAppInfo.h>

#import "SASyncWrap.h"

@class NSNumber, NSString, NSURL;

@interface SAAceUiAppInfo : SAAppInfo <SASyncWrap>
{
}

+ (id)aceUiAppInfoWithDictionary:(id)arg1 context:(id)arg2;
+ (id)aceUiAppInfo;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
@property(copy, nonatomic) NSNumber *generation;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(copy, nonatomic) NSURL *identifier; // @dynamic identifier;
@property(readonly) Class superclass;

@end

