//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKLoggingProtocol.h"

@class CKAccountInfo, CKContainerID, CKDAccount, CKDFlowControlManager, CKDKeyValueDiskCache, CKDMMCS, CKDMescalSession, CKDPCSManager, CKDPublicIdentityLookupService, CKDServerConfiguration, CKDZoneGatekeeper, CKTimeLogger, NSBundle, NSHashTable, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, NSURL;

@interface CKDClientContext : NSObject <CKLoggingProtocol>
{
    BOOL _isForClouddInternalUse;
    BOOL _hasDataContainer;
    BOOL _canAccessProtectionData;
    BOOL _canSetDeviceIdentifier;
    BOOL _hasSystemServiceEntitlement;
    BOOL _allowsPowerNapScheduling;
    BOOL _sandboxed;
    BOOL _finishedAppProxySetup;
    CKDServerConfiguration *_config;
    NSURL *_publicCloudDBURL;
    NSURL *_publicShareServiceURL;
    NSURL *_publicDeviceServiceURL;
    NSString *_containerScopedUserID;
    NSHashTable *_proxies;
    int _cachedEnvironment;
    CKContainerID *_containerID;
    NSBundle *_applicationBundle;
    NSString *_applicationBundleID;
    NSString *_applicationVersion;
    NSURL *_applicationIcon;
    NSString *_applicationDisplayName;
    NSString *_applicationContainerPath;
    NSString *_applicationContainerCloudKitDirectory;
    NSString *_applicationCachesDirectory;
    NSString *_applicationMMCSDirectory;
    NSString *_applicationAssetDbDirectory;
    NSString *_applicationFileDownloadDirectory;
    NSString *_applicationPackageUploadDirectory;
    NSString *_applicationPackageDownloadDirectory;
    NSString *_applicationRecordCacheDirectory;
    NSString *_containerHardwareIDHash;
    int _type;
    int _usesAPSPublicToken;
    int _darkWakeEnabled;
    CKDAccount *_account;
    CKAccountInfo *_accountInfoOverride;
    CKDFlowControlManager *_flowControlManager;
    CKDMMCS *_MMCS;
    CKTimeLogger *_timeLogger;
    CKDPCSManager *_pcsManager;
    CKDKeyValueDiskCache *_publicIdentitiesDiskCache;
    CKDPublicIdentityLookupService *_foregroundPublicIdentityLookupService;
    CKDPublicIdentityLookupService *_backgroundPublicIdentityLookupService;
    CKDZoneGatekeeper *_foregroundZoneGatekeeper;
    CKDZoneGatekeeper *_backgroundZoneGatekeeper;
    CKDMescalSession *_mescalSession;
    NSMutableDictionary *_fakeErrorByClassName;
    NSObject<OS_dispatch_queue> *_setupQueue;
    NSObject<OS_dispatch_source> *_setupSource;
    NSString *_contextID;
    NSMutableArray *_oldApplicationCaches;
}

+ (id)sharedContextForInternalUseWithAppContainerTuple:(id)arg1;
+ (id)sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 forInternalUse:(BOOL)arg4;
+ (id)contextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3;
+ (id)_sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3 forInternalUse:(BOOL)arg4;
+ (id)applicationContainerPathForBundleID:(id)arg1 bundleURL:(id *)arg2 type:(int *)arg3;
+ (id)sharedContexts;
+ (id)sharedContextWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3;
@property(retain, nonatomic) NSMutableArray *oldApplicationCaches; // @synthesize oldApplicationCaches=_oldApplicationCaches;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *setupSource; // @synthesize setupSource=_setupSource;
@property(retain, nonatomic) CKDMescalSession *mescalSession; // @synthesize mescalSession=_mescalSession;
@property(retain, nonatomic) CKDZoneGatekeeper *backgroundZoneGatekeeper; // @synthesize backgroundZoneGatekeeper=_backgroundZoneGatekeeper;
@property(retain, nonatomic) CKDZoneGatekeeper *foregroundZoneGatekeeper; // @synthesize foregroundZoneGatekeeper=_foregroundZoneGatekeeper;
@property(retain, nonatomic) CKDPublicIdentityLookupService *backgroundPublicIdentityLookupService; // @synthesize backgroundPublicIdentityLookupService=_backgroundPublicIdentityLookupService;
@property(retain, nonatomic) CKDPublicIdentityLookupService *foregroundPublicIdentityLookupService; // @synthesize foregroundPublicIdentityLookupService=_foregroundPublicIdentityLookupService;
@property(retain, nonatomic) CKDPCSManager *pcsManager; // @synthesize pcsManager=_pcsManager;
@property(retain, nonatomic) CKTimeLogger *timeLogger; // @synthesize timeLogger=_timeLogger;
@property(retain, nonatomic) CKDFlowControlManager *flowControlManager; // @synthesize flowControlManager=_flowControlManager;
@property(nonatomic) BOOL allowsPowerNapScheduling; // @synthesize allowsPowerNapScheduling=_allowsPowerNapScheduling;
@property(nonatomic) BOOL hasDataContainer; // @synthesize hasDataContainer=_hasDataContainer;
@property(nonatomic) int darkWakeEnabled; // @synthesize darkWakeEnabled=_darkWakeEnabled;
@property(nonatomic) int usesAPSPublicToken; // @synthesize usesAPSPublicToken=_usesAPSPublicToken;
@property(readonly, nonatomic) NSString *containerHardwareIDHash; // @synthesize containerHardwareIDHash=_containerHardwareIDHash;
@property(retain, nonatomic) NSString *applicationRecordCacheDirectory; // @synthesize applicationRecordCacheDirectory=_applicationRecordCacheDirectory;
@property(retain, nonatomic) NSString *applicationPackageDownloadDirectory; // @synthesize applicationPackageDownloadDirectory=_applicationPackageDownloadDirectory;
@property(retain, nonatomic) NSString *applicationPackageUploadDirectory; // @synthesize applicationPackageUploadDirectory=_applicationPackageUploadDirectory;
@property(retain, nonatomic) NSString *applicationFileDownloadDirectory; // @synthesize applicationFileDownloadDirectory=_applicationFileDownloadDirectory;
@property(retain, nonatomic) NSString *applicationAssetDbDirectory; // @synthesize applicationAssetDbDirectory=_applicationAssetDbDirectory;
@property(retain, nonatomic) NSString *applicationMMCSDirectory; // @synthesize applicationMMCSDirectory=_applicationMMCSDirectory;
@property(retain, nonatomic) NSString *applicationCachesDirectory; // @synthesize applicationCachesDirectory=_applicationCachesDirectory;
@property(retain, nonatomic) NSString *applicationContainerCloudKitDirectory; // @synthesize applicationContainerCloudKitDirectory=_applicationContainerCloudKitDirectory;
@property(retain, nonatomic) NSString *applicationContainerPath; // @synthesize applicationContainerPath=_applicationContainerPath;
@property(retain, nonatomic) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(readonly, nonatomic) NSBundle *applicationBundle; // @synthesize applicationBundle=_applicationBundle;
@property int cachedEnvironment; // @synthesize cachedEnvironment=_cachedEnvironment;
@property(retain, nonatomic) NSHashTable *proxies; // @synthesize proxies=_proxies;
@property(retain, nonatomic) NSString *containerScopedUserID; // @synthesize containerScopedUserID=_containerScopedUserID;
@property(retain, nonatomic) NSURL *publicDeviceServiceURL; // @synthesize publicDeviceServiceURL=_publicDeviceServiceURL;
@property(retain, nonatomic) NSURL *publicShareServiceURL; // @synthesize publicShareServiceURL=_publicShareServiceURL;
@property(retain, nonatomic) NSURL *publicCloudDBURL; // @synthesize publicCloudDBURL=_publicCloudDBURL;
- (id)CKPropertiesDescription;
@property(retain, nonatomic) CKDServerConfiguration *config; // @synthesize config=_config;
- (void)performRequest:(id)arg1;
- (BOOL)setupAssetTransfersWithClientProxy:(id)arg1 error:(id *)arg2;
- (void)clearAssetCache;
@property(retain, nonatomic) NSMutableDictionary *fakeErrorByClassName; // @synthesize fakeErrorByClassName=_fakeErrorByClassName;
@property(retain, nonatomic) CKDKeyValueDiskCache *publicIdentitiesDiskCache; // @synthesize publicIdentitiesDiskCache=_publicIdentitiesDiskCache;
@property(retain, nonatomic, setter=setAPSEnvironmentString:) NSString *apsEnvironmentString;
@property(nonatomic) BOOL finishedAppProxySetup; // @synthesize finishedAppProxySetup=_finishedAppProxySetup;
@property(nonatomic) BOOL canSetDeviceIdentifier; // @synthesize canSetDeviceIdentifier=_canSetDeviceIdentifier;
@property(nonatomic) BOOL hasSystemServiceEntitlement; // @synthesize hasSystemServiceEntitlement=_hasSystemServiceEntitlement;
@property(nonatomic) BOOL canAccessProtectionData; // @synthesize canAccessProtectionData=_canAccessProtectionData;
- (double)publicIdentitiesExpirationTimeout;
- (BOOL)setupMMCSWrapperWithError:(id *)arg1;
- (BOOL)_setupDirectoriesWithClientProxy:(id)arg1 sandboxExtensions:(id *)arg2 error:(id *)arg3;
@property(retain) CKDMMCS *MMCS; // @synthesize MMCS=_MMCS;
- (id)initWithAppContainerTuple:(id)arg1 accountInfoOverride:(id)arg2 proxy:(id)arg3;
- (id)_issueSandboxExtensionForPath:(id)arg1 error:(id *)arg2;
@property(retain) CKDAccount *account; // @synthesize account=_account;
@property(nonatomic) BOOL isForClouddInternalUse; // @synthesize isForClouddInternalUse=_isForClouddInternalUse;
- (void)_signalAccountReload;
- (void)_purgeOldCacheDirectories;
- (void)_determineHardwareInfo;
- (void)_loadApplicationContainerPathAndType;
- (void)_reloadAccount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *setupQueue; // @synthesize setupQueue=_setupQueue;
@property(nonatomic, getter=isSandboxed) BOOL sandboxed; // @synthesize sandboxed=_sandboxed;
- (void)clearAuthTokensForRecordWithID:(id)arg1 databaseScope:(int)arg2;
- (void)clearRecordCacheWithDatabaseScope:(int)arg1;
- (void)clearAssetCacheWithDatabaseScope:(int)arg1;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2;
- (void)finishSetupWithClientProxy:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startSetupWithClientProxy:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addClientProxy:(id)arg1;
@property(readonly, nonatomic) CKAccountInfo *accountInfoOverride; // @synthesize accountInfoOverride=_accountInfoOverride;
- (void)showUserNotification:(struct __CFUserNotification *)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSURL *applicationIcon; // @synthesize applicationIcon=_applicationIcon;
@property(readonly, nonatomic) NSString *applicationDisplayName; // @synthesize applicationDisplayName=_applicationDisplayName;
@property(readonly, nonatomic) BOOL canAccessAccount;
- (void)removeClientProxy:(id)arg1;
- (void)tearDownAssetTransfers;
- (void)logWithFile:(const char *)arg1 function:(const char *)arg2 line:(int)arg3 level:(int)arg4 section:(id)arg5 format:(id)arg6;
@property(readonly, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
@property(readonly, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *contextID; // @synthesize contextID=_contextID;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, copy) NSString *description;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
