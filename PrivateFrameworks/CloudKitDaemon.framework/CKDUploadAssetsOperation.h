//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKDCancelTokenGroup, NSArray, NSMapTable, NSMutableArray, NSObject<OS_dispatch_queue>;

@interface CKDUploadAssetsOperation : CKDDatabaseOperation
{
    CDUnknownBlockType _uploadPreparationBlock;
    CDUnknownBlockType _uploadProgressBlock;
    CDUnknownBlockType _uploadCompletionBlock;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_assetsToUpload;
    NSMutableArray *_MMCSItemsToUpload;
    NSMapTable *_uploadTasksByPackages;
    NSMutableArray *_packageManifests;
    NSMutableArray *_openedPackages;
    CKDCancelTokenGroup *_cancelTokens;
    unsigned int _maxPackageUploadsPerBatch;
}

@property(retain, nonatomic) NSArray *assetsToUpload; // @synthesize assetsToUpload=_assetsToUpload;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 assetsToUpload:(id)arg3;
@property(copy, nonatomic) CDUnknownBlockType uploadProgressBlock; // @synthesize uploadProgressBlock=_uploadProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType uploadPreparationBlock; // @synthesize uploadPreparationBlock=_uploadPreparationBlock;
- (void)_removePackageManifests;
- (void)_closeAllPackages;
@property(retain, nonatomic) NSMutableArray *packageManifests; // @synthesize packageManifests=_packageManifests;
- (void)_didUploadMMCSItems:(id)arg1 error:(id)arg2;
- (void)_didUploadPackageWithTask:(id)arg1;
@property(nonatomic) unsigned int maxPackageUploadsPerBatch; // @synthesize maxPackageUploadsPerBatch=_maxPackageUploadsPerBatch;
- (void)_didUploadMMCSItem:(id)arg1 error:(id)arg2;
- (void)_uploadPackageSectionsWithTask:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_uploadPackageSectionsWithPendingTasks:(id)arg1 uploadingTasks:(id)arg2 completedTasks:(id)arg3;
- (void)_closePackage:(id)arg1;
- (void)_uploadPackageSection:(id)arg1 task:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_uploadPackageSectionsWithEnumerator:(id)arg1 task:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_didUploadMMCSSectionItems:(id)arg1 task:(id)arg2 error:(id)arg3;
- (void)_didUploadMMCSSectionItem:(id)arg1 task:(id)arg2 error:(id)arg3;
- (void)_didFechUploadTokensForMMCSItems:(id)arg1 error:(id)arg2;
@property(retain, nonatomic) NSMutableArray *MMCSItemsToUpload; // @synthesize MMCSItemsToUpload=_MMCSItemsToUpload;
@property(retain, nonatomic) NSMapTable *uploadTasksByPackages; // @synthesize uploadTasksByPackages=_uploadTasksByPackages;
- (void)_didPrepareMMCSItems:(id)arg1 uploadTasksByPackages:(id)arg2 error:(id)arg3;
- (BOOL)_planSectionsForPackage:(id)arg1 error:(id *)arg2;
- (void)_openPackage:(id)arg1;
- (void)_didUploadAsset:(id)arg1 error:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType uploadCompletionBlock; // @synthesize uploadCompletionBlock=_uploadCompletionBlock;
@property(retain, nonatomic) NSMutableArray *openedPackages; // @synthesize openedPackages=_openedPackages;
- (BOOL)_upload;
- (BOOL)_fetchUploadTokens;
- (BOOL)_prepareForUpload;
- (void)_didMakeProgressForMMCSItem:(id)arg1;
- (void)_didMakeProgressForMMCSSectionItem:(id)arg1 task:(id)arg2;
- (void)_didMakeProgressForAsset:(id)arg1 progress:(double)arg2;
- (void)_didPrepareAsset:(id)arg1;
@property(retain, nonatomic) CKDCancelTokenGroup *cancelTokens; // @synthesize cancelTokens=_cancelTokens;
- (BOOL)makeStateTransition;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (id)nameForState:(unsigned int)arg1;
- (void)finishWithError:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)main;
- (void)cancel;

@end

