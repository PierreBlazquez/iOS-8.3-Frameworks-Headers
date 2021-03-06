//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDServerConfiguration;

@interface CKDGlobalConfigurationURLRequest : CKDURLRequest
{
    CKDServerConfiguration *_configuration;
}

- (id)additionalHeaderValues;
- (void)requestDidParsePlistObject:(id)arg1;
- (Class)expectedResponseClass;
- (id)httpMethod;
- (BOOL)hasRequestBody;
- (int)partitionType;
- (int)serverType;
- (BOOL)allowsAnonymousAccount;
- (BOOL)requiresSignature;
- (BOOL)requiresDeviceID;
- (BOOL)requiresConfiguration;
@property(retain, nonatomic) CKDServerConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (id)url;

@end

