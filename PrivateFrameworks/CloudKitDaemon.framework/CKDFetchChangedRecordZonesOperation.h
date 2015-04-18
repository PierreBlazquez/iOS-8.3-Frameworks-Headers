//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKServerChangeToken;

@interface CKDFetchChangedRecordZonesOperation : CKDDatabaseOperation
{
    CDUnknownBlockType _recordZoneWithIDChangedBlock;
    CDUnknownBlockType _recordZoneWithIDWasDeletedBlock;
    CKServerChangeToken *_serverChangeToken;
    int _status;
    CKServerChangeToken *_previousServerChangeToken;
    unsigned int _resultsLimit;
}

@property(retain, nonatomic) CKServerChangeToken *previousServerChangeToken; // @synthesize previousServerChangeToken=_previousServerChangeToken;
- (void)_handleFetchChangedRecordZonesRequestCompleted:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType recordZoneWithIDWasDeletedBlock; // @synthesize recordZoneWithIDWasDeletedBlock=_recordZoneWithIDWasDeletedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneWithIDChangedBlock; // @synthesize recordZoneWithIDChangedBlock=_recordZoneWithIDChangedBlock;
@property(nonatomic) unsigned int resultsLimit; // @synthesize resultsLimit=_resultsLimit;
- (void)fillOutOperationResult:(id)arg1;
- (Class)operationResultClass;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
@property(retain, nonatomic) CKServerChangeToken *serverChangeToken; // @synthesize serverChangeToken=_serverChangeToken;
@property(nonatomic) int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)main;

@end
