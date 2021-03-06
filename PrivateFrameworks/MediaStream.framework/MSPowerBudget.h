//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSPBTimerContext, NSObject<OS_dispatch_queue>, NSString;

@interface MSPowerBudget : NSObject
{
    BOOL _workQueueIsFileTransferAllowed;
    BOOL _workQueueIsExternalPowered;
    BOOL _workQueueIsForeground;
    id <MSPowerBudgetDelegate> _delegate;
    NSString *_focusAlbumGUID;
    NSString *_focusAssetCollectionGUID;
    NSString *_personID;
    MSPBTimerContext *_workQueuePushTimerContext;
    MSPBTimerContext *_workQueuePostForegroundTimerContext;
    MSPBTimerContext *_workQueueGlobalResetSyncTimerContext;
    NSObject<OS_dispatch_queue> *_workQueue;
    double _maxActiveTimeAfterPush;
    double _maxActiveTimeAfterLossOfForeground;
    double _maxActiveTimeAfterGlobalResetSync;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(nonatomic, setter=workQueueSetFileTransferAllowed:) BOOL workQueueIsFileTransferAllowed; // @synthesize workQueueIsFileTransferAllowed=_workQueueIsFileTransferAllowed;
- (void)_globalResetSyncTimerDidExpire:(id)arg1;
- (void)_postForegroundTimerDidExpire:(id)arg1;
- (void)didEndExternalPower;
- (void)didBeginExternalPower;
- (void)didReceiveGlobalResetSync;
- (void)didEndForegroundFocus;
- (void)didBeginForegroundFocus;
- (void)didReceivePushNotification;
- (void)workQueueSetIsFileTransferAllowed:(BOOL)arg1;
@property(readonly, nonatomic) BOOL hasActiveTimers;
@property(readonly, nonatomic, getter=hasForegroundFocus) BOOL foregroundFocus;
@property(readonly, nonatomic, getter=isFileTransferAllowed) BOOL fileTransferAllowed;
@property(nonatomic) double maxActiveTimeAfterLossOfForeground; // @synthesize maxActiveTimeAfterLossOfForeground=_maxActiveTimeAfterLossOfForeground;
@property(nonatomic) double maxActiveTimeAfterGlobalResetSync; // @synthesize maxActiveTimeAfterGlobalResetSync=_maxActiveTimeAfterGlobalResetSync;
@property(nonatomic) double maxActiveTimeAfterPush; // @synthesize maxActiveTimeAfterPush=_maxActiveTimeAfterPush;
@property(nonatomic, setter=workQueueSetExternalPowered:) BOOL workQueueIsExternalPowered; // @synthesize workQueueIsExternalPowered=_workQueueIsExternalPowered;
- (double)workQueueMaxActiveTimeAfterGlobalResetSync;
- (double)workQueueMaxActiveTimeAfterLossOfForeground;
@property(nonatomic, setter=workQueueSetForeground:) BOOL workQueueIsForeground; // @synthesize workQueueIsForeground=_workQueueIsForeground;
- (double)workQueueMaxActiveTimeAfterPush;
- (void)setIsFileTransferAllowed:(BOOL)arg1;
@property(retain, nonatomic) MSPBTimerContext *workQueueGlobalResetSyncTimerContext; // @synthesize workQueueGlobalResetSyncTimerContext=_workQueueGlobalResetSyncTimerContext;
@property(retain, nonatomic) MSPBTimerContext *workQueuePostForegroundTimerContext; // @synthesize workQueuePostForegroundTimerContext=_workQueuePostForegroundTimerContext;
- (void)workQueueCommitPersistedValues;
@property(retain, nonatomic) MSPBTimerContext *workQueuePushTimerContext; // @synthesize workQueuePushTimerContext=_workQueuePushTimerContext;
- (void)workQueueRecomputeFileTransferAllowed;
- (void)workQueueSetGlobalResetSyncTimerDate:(id)arg1;
- (void)workQueueSetPostForegroundTimerDate:(id)arg1;
- (void)workQueueSetPushTimerDate:(id)arg1;
@property(retain, nonatomic) NSString *focusAlbumGUID; // @synthesize focusAlbumGUID=_focusAlbumGUID;
@property(retain, nonatomic) NSString *focusAssetCollectionGUID; // @synthesize focusAssetCollectionGUID=_focusAssetCollectionGUID;
- (void)shutDown;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MSPowerBudgetDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;

@end

