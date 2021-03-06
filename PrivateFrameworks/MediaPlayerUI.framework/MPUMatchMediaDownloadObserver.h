//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaPlayerUI/MPUMediaDownloadObserver.h>

#import "MPStoreDownloadManagerObserver.h"

@class MPStoreDownload, NSString;

@interface MPUMatchMediaDownloadObserver : MPUMediaDownloadObserver <MPStoreDownloadManagerObserver>
{
    MPStoreDownload *_storeDownload;
}

- (BOOL)isPaused;
- (double)downloadProgress;
- (double)rawDownloadTotal;
- (double)rawDownloadProgress;
- (BOOL)isRestoreDownload;
- (void)resumeDownload;
- (void)pauseDownload;
- (BOOL)canCancel;
- (BOOL)isCurrentlyPlayable;
- (void)_onQueue_invalidate;
- (id)initWithStoreDownload:(id)arg1;
- (void)cancelDownload;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isPurchasing;
- (void)downloadManager:(id)arg1 downloadDidProgress:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

