//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BRCSyncOperationThrottleParams, NSArray, NSDictionary, NSMutableDictionary, NSObject<OS_xpc_object>, NSString;

@interface BRCUserDefaults : NSObject
{
    BRCUserDefaults *_globalContainerUserDefault;
    NSDictionary *_serverContainerConfigurationDict;
    NSMutableDictionary *_cache;
    NSString *_containerIdentifer;
}

+ (id)defaultsForMetadataContainer;
+ (id)_userDefaultsManager;
+ (void)setServerConfigurationURL:(id)arg1 whenLoaded:(CDUnknownBlockType)arg2;
+ (void)saveServerConfigToDB:(id)arg1;
+ (void)loadCachedServerConfigFromDB:(id)arg1;
+ (id)defaultsForContainerIdentifier:(id)arg1;
+ (void)reset;
@property(readonly, nonatomic) BOOL forceBatchFailureWhenReceivingAssetTokenExpiration;
@property(readonly, nonatomic) int transferQueueMaxConcurrentOperations;
@property(readonly, nonatomic) int transferQueueMinConcurrentOperations;
@property(readonly, nonatomic) double fseventsResetBackoff;
@property(readonly, nonatomic) double fseventsLatency;
@property(readonly, nonatomic) double systemLowDiskLatency;
@property(readonly, nonatomic) double systemPowerLatency;
@property(readonly, nonatomic) double systemReachabilityLatency;
@property(readonly, nonatomic) unsigned int downloadBatchCount;
@property(readonly, nonatomic) unsigned int downloadBatchRecordsCount;
@property(readonly, nonatomic) BRCSyncOperationThrottleParams *syncDownThrottle;
@property(readonly, nonatomic) double appsFetchPacerDelay;
@property(readonly, nonatomic) unsigned int maxRecordCountInAppContainerModifyRecordsOperation;
@property(readonly, nonatomic) unsigned int maxRecordCountInModifyRecordsOperation;
@property(readonly, nonatomic) unsigned int maxRecordCountInFetchRecordsOperation;
- (BOOL)boolForKey:(id)arg1 byDefault:(BOOL)arg2;
- (float)_defaultSyncUpMinutelyBudget;
- (float)_defaultSyncUpHourlyBudget;
- (float)_defaultSyncUpDailyBudget;
- (float)floatForKey:(id)arg1 min:(float)arg2 max:(float)arg3 byDefault:(float)arg4;
- (id)xpcActivityDictionaryForKey:(id)arg1 byDefault:(id)arg2;
- (unsigned short)_umaskForKey:(id)arg1;
- (double)doubleForKey:(id)arg1 min:(double)arg2 max:(double)arg3 byDefault:(double)arg4;
- (int)intForKey:(id)arg1 min:(int)arg2 max:(int)arg3 byDefault:(int)arg4;
- (id)_defaultShareableExtensions;
- (unsigned int)unsignedIntForKey:(id)arg1 min:(unsigned int)arg2 max:(unsigned int)arg3 byDefault:(unsigned int)arg4;
- (unsigned long long)unsignedLongLongForKey:(id)arg1 min:(unsigned long long)arg2 max:(unsigned long long)arg3 byDefault:(unsigned long long)arg4;
- (BOOL)boolForKey:(id)arg1 inheritFromGlobal:(BOOL)arg2 byDefault:(BOOL)arg3;
- (float)floatForKey:(id)arg1 inheritFromGlobal:(BOOL)arg2 min:(float)arg3 max:(float)arg4 byDefault:(float)arg5;
- (id)objectForKey:(id)arg1 inheritFromGlobal:(BOOL)arg2 validateWithBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *configurationUpdateXPCActivity;
- (id)initWithServerConfiguration:(id)arg1 globalContainerUserDefault:(id)arg2 containerIdentfier:(id)arg3;
- (id)initAsGlobalContainerWithServerConfiguration:(id)arg1;
@property(readonly, nonatomic) NSDictionary *uploadThrottleParams;
@property(readonly, nonatomic) NSDictionary *downloadThrottleParams;
@property(readonly, nonatomic) NSDictionary *applyThrottleParams;
@property(readonly, nonatomic) NSDictionary *readerThrottleParams;
@property(readonly, nonatomic) unsigned int copyShareIDsBatchSize;
@property(readonly, nonatomic) unsigned int publishURLTimeout;
@property(readonly, nonatomic) unsigned int treeEnumeratorBatchSize;
@property(readonly, nonatomic) double transferQueueTransferBudget;
@property(readonly, nonatomic) unsigned int uploadBatchRecordsCount;
@property(readonly, nonatomic) unsigned int uploadBatchCount;
@property(readonly, nonatomic) BOOL sessionZombiesEnabled;
@property(readonly, nonatomic) NSDictionary *syncAppContainerThrottleParams;
@property(readonly, nonatomic) NSDictionary *operationFailureThrottleParams;
@property(readonly, nonatomic) NSDictionary *lostItemThrottleParams;
@property(readonly, nonatomic) NSDictionary *containerAliasRemovalThrottleParams;
@property(readonly, nonatomic) NSDictionary *containerResetThrottleParams;
@property(readonly, nonatomic) NSDictionary *containerScanThrottleParams;
@property(readonly, nonatomic) NSArray *packageExtensions;
@property(readonly, nonatomic) int readerScanBatchSize;
@property(readonly, nonatomic) unsigned long long uploadMaxFileSize;
@property(readonly, nonatomic) unsigned long long uploadMaxInPkgFileSize;
@property(readonly, nonatomic) double quotaFetchPacerDelay;
@property(readonly, nonatomic) int readerMaxConcurrentIOs;
@property(readonly, nonatomic) unsigned short stageFileUmask;
@property(readonly, nonatomic) unsigned short stageDirectoryUmask;
@property(readonly, nonatomic) double lockedFileScanInterval;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *stageGCXPCActivity;
@property(readonly, nonatomic) unsigned int maxRecordCountInQuerySharedRecordsOperation;
@property(readonly, nonatomic) unsigned short stageInPackageDirectoryUmask;
@property(readonly, nonatomic) unsigned short stageInPackageFileUmask;
@property(readonly, nonatomic) double readerLostItemBackoff;
@property(readonly, nonatomic) unsigned long long accessTimeDeltaInMedUrgency;
@property(readonly, nonatomic) unsigned long long accessTimeDeltaInLowUrgency;
@property(readonly, nonatomic) unsigned long long accessTimeDeltaInHighUrgency;
@property(readonly, nonatomic) NSArray *syncThrottles;
@property(readonly, nonatomic) double writerIOsCancelDelay;
@property(readonly, nonatomic) double readerIOsCancelDelay;
@property(readonly, nonatomic) BOOL shouldContainerBeGreedy;
@property(readonly, nonatomic) double foregroundGracePeriod;
@property(readonly, nonatomic) float syncUpMinutelyBudget;
@property(readonly, nonatomic) float syncUpHourlyBudget;
@property(readonly, nonatomic) float syncUpDailyBudget;
@property(readonly, nonatomic) float syncUpDataCreateCost;
@property(readonly, nonatomic) float syncUpDocumentCreateCost;
@property(readonly, nonatomic) float syncUpDataEditCost;
@property(readonly, nonatomic) float syncUpDocumentEditCost;
@property(readonly, nonatomic) float syncUpDataDeleteCost;
@property(readonly, nonatomic) float syncUpDocumentDeleteCost;
@property(readonly, nonatomic) float syncUpStructureCreateCost;
@property(readonly, nonatomic) float syncUpStructureEditCost;
@property(readonly, nonatomic) float syncUpInitialItemCost;
@property(readonly, nonatomic) float syncUpStructureDeleteCost;
@property(readonly, nonatomic) unsigned int minEvictableFilesize;
@property(readonly, nonatomic) unsigned long long sharedDbSyncDownCoalesceNanoseconds;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *forcedSyncXPCActivity;
@property(readonly, nonatomic) NSString *serverConfigurationURL;
@property(readonly, nonatomic) float syncUpMinimalBudget;
@property(readonly, nonatomic) BRCSyncOperationThrottleParams *syncUpThrottle;
@property(readonly, nonatomic) unsigned int maxXattrBlobSize;
@property(readonly, nonatomic) unsigned int maxSyncPathDepth;
@property(readonly, nonatomic) unsigned int aliasDeletionBatchSize;
@property(readonly, nonatomic) int logLevel;
@property(readonly, nonatomic) int writerMaxConcurrentIOs;
@property(readonly, nonatomic) int writerApplyBatchSize;
@property(readonly, nonatomic) unsigned int maxRelativePathDepth;
@property(readonly, nonatomic) NSArray *shareableExtensions;
@property(readonly, nonatomic) unsigned int logoutTimeout;
@property(readonly, nonatomic) int dbBatchSize;
@property(readonly, nonatomic) double dbBatchDelay;
@property(readonly, nonatomic) BOOL dbProfiled;
@property(readonly, nonatomic) unsigned int statementCacheMaxCountForClientTruth;
@property(readonly, nonatomic) unsigned int statementCacheMaxCountForServerTruth;
@property(readonly, nonatomic) BOOL dbTraced;
- (void).cxx_destruct;

@end

