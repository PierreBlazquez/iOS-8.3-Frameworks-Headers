//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLDiskController : NSObject
{
    double _lastFSCheck;
    long long _bytesRequiredForPhoto;
    struct {
        unsigned int needToCheckDiskSpace:1;
        unsigned int probablyLowOnDiskSpace:1;
        unsigned int isAssetsd:1;
        unsigned int extra:28;
    } _flags;
}

+ (long long)freeDiskSpaceThreshold;
+ (long long)diskSpaceAvailableForUse;
+ (id)sharedInstance;
- (void)updateAvailableDiskSpace;
- (long long)bytesToAutomaticallyClear;
- (BOOL)hasEnoughDiskToTakePicture;
- (void)_diskSpaceDidBecomeLow;
- (void)_updateCookie;
- (void)_actuallyUpdateCookie;
- (id)init;
- (void)dealloc;

@end
