//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@interface CKDFetchWebAuthTokenURLRequest : CKDURLRequest
{
    CDUnknownBlockType _tokenFetchedBlock;
}

- (int)operationType;
@property(copy, nonatomic) CDUnknownBlockType tokenFetchedBlock; // @synthesize tokenFetchedBlock=_tokenFetchedBlock;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (void).cxx_destruct;

@end

