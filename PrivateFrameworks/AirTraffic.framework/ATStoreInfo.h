//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface ATStoreInfo : NSObject
{
    NSMutableDictionary *_downloadDictionary;
    NSMutableDictionary *_assetDictionary;
}

@property(retain, nonatomic) NSNumber *adamID;
@property(retain, nonatomic) NSNumber *versionID;
@property(retain, nonatomic) NSString *podcastEpisodeGUID;
@property(retain, nonatomic) NSString *appleID;
@property(retain, nonatomic) NSString *flavor;
@property(retain, nonatomic) NSNumber *collectionID;
@property(retain, nonatomic) NSNumber *DSID;
@property(readonly) NSDictionary *assetDictionary; // @synthesize assetDictionary=_assetDictionary;
@property(readonly) NSDictionary *downloadDictionary; // @synthesize downloadDictionary=_downloadDictionary;
@property(retain, nonatomic) NSNumber *drmFree;
@property(retain, nonatomic) NSString *dimensions;
@property(retain, nonatomic) NSNumber *redownloadStatus;
@property(retain, nonatomic) NSNumber *matchStatus;
@property(retain, nonatomic) NSNumber *sagaID;
@property(retain, nonatomic) NSString *XID;
@property(retain, nonatomic) NSString *storefrontID;
- (void).cxx_destruct;
- (id)init;

@end

