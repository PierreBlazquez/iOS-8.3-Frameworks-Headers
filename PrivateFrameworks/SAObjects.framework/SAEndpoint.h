//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import "SAAceSerializable.h"

@class NSDictionary, NSString;

@interface SAEndpoint : AceObject <SAAceSerializable>
{
}

+ (id)endpointWithDictionary:(id)arg1 context:(id)arg2;
+ (id)endpoint;
- (id)encodedClassName;
@property(copy, nonatomic) NSString *providerId;
@property(nonatomic) BOOL supportsAuthentication;
@property(copy, nonatomic) NSDictionary *operations;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

