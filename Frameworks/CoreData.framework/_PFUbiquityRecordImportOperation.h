//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/PFUbiquityImportOperation.h>

#import "NSManagedObjectContextFaultingDelegate.h"

@class NSError, NSManagedObjectContext, NSMutableDictionary, NSMutableSet, NSObject<_PFUbiquityRecordImportOperationDelegate>, NSPersistentStoreCoordinator, NSString, PFUbiquityImportContext, PFUbiquityKnowledgeVector, PFUbiquitySwitchboardEntry, PFUbiquityTransactionLog;

@interface _PFUbiquityRecordImportOperation : PFUbiquityImportOperation <NSManagedObjectContextFaultingDelegate>
{
    NSManagedObjectContext *_moc;
    NSPersistentStoreCoordinator *_psc;
    PFUbiquityTransactionLog *_transactionLog;
    PFUbiquitySwitchboardEntry *_entry;
    NSMutableSet *_insertedObjectIDs;
    NSMutableSet *_updatedObjectIDs;
    NSMutableSet *_deletedObjectIDs;
    PFUbiquityKnowledgeVector *_logScore;
    NSMutableDictionary *_resolvedConflicts;
    BOOL _lockedExistingCoord;
    PFUbiquityKnowledgeVector *_initialStoreKnowledgeVector;
    PFUbiquityKnowledgeVector *_updatedStoreKnowledgeVector;
    PFUbiquityImportContext *_importContext;
    BOOL _success;
    BOOL _transactionDidRollback;
    BOOL _wroteKV;
    int _inMemorySequenceNumber;
    NSError *_operationError;
    NSMutableDictionary *_relationshipsToObjectIDsToCheck;
}

@property(readonly) NSManagedObjectContext *moc; // @synthesize moc=_moc;
- (int)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (void)main;
@property NSObject<_PFUbiquityRecordImportOperationDelegate> *delegate;
@property(readonly, copy) NSString *description;
- (id)copy;
- (id)init;
- (void)dealloc;
- (void)cancel;
@property(readonly, nonatomic) BOOL wroteKV; // @synthesize wroteKV=_wroteKV;
@property(readonly, nonatomic) BOOL success; // @synthesize success=_success;
@property(readonly, nonatomic) BOOL transactionDidRollBack; // @synthesize transactionDidRollBack=_transactionDidRollback;
@property(retain, nonatomic) PFUbiquityKnowledgeVector *updatedStoreKnowledgeVector; // @synthesize updatedStoreKnowledgeVector=_updatedStoreKnowledgeVector;
@property BOOL lockedExistingCoord; // @synthesize lockedExistingCoord=_lockedExistingCoord;
@property(readonly, nonatomic) NSMutableDictionary *resolvedConflicts; // @synthesize resolvedConflicts=_resolvedConflicts;
@property(retain, nonatomic) PFUbiquityKnowledgeVector *logScore; // @synthesize logScore=_logScore;
@property(readonly, nonatomic) NSMutableSet *deletedObjectIDs; // @synthesize deletedObjectIDs=_deletedObjectIDs;
@property(readonly, nonatomic) NSMutableSet *updatedObjectIDs; // @synthesize updatedObjectIDs=_updatedObjectIDs;
- (BOOL)fillManagedObject:(id)arg1 withGlobalID:(id)arg2 fromUbiquityDictionary:(id)arg3 missingObjects:(id)arg4 importContext:(id)arg5 withError:(id *)arg6;
@property(retain, nonatomic) PFUbiquityImportContext *importContext; // @synthesize importContext=_importContext;
- (void)notifyDelegateOfError:(id)arg1;
@property(readonly, nonatomic) NSMutableSet *insertedObjectIDs; // @synthesize insertedObjectIDs=_insertedObjectIDs;
- (void)respondToStoreTransactionStateChangeNotification:(id)arg1;
- (BOOL)applyChangesFromStoreSaveSnapshot:(id)arg1 withImportContext:(id)arg2 withError:(id *)arg3;
@property(readonly) PFUbiquityKnowledgeVector *initialStoreKnowledgeVector; // @synthesize initialStoreKnowledgeVector=_initialStoreKnowledgeVector;
- (BOOL)processObjects:(id)arg1 withState:(int)arg2 andImportContext:(id)arg3 outError:(id *)arg4;
@property(readonly, nonatomic) PFUbiquityTransactionLog *transactionLog; // @synthesize transactionLog=_transactionLog;
@property(readonly) NSPersistentStoreCoordinator *psc; // @synthesize psc=_psc;
- (id)retainedDelegate;
- (id)initWithTransactionLog:(id)arg1 persistentStore:(id)arg2 andLocalPeerID:(id)arg3;
@property(readonly, nonatomic) NSError *operationError; // @synthesize operationError=_operationError;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
