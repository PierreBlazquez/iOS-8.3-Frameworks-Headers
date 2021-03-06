//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALAssetsLibrary, NSHashTable, NSMutableDictionary, PLPhotoLibrary;

@interface ALAssetsLibraryPrivate : NSObject
{
    ALAssetsLibrary *_assetsLibrary;
    PLPhotoLibrary *_photoLibrary;
    NSHashTable *_assetGroupInternals;
    NSMutableDictionary *_groupURLSByAlbumOID;
    BOOL _isValid;
}

@property(readonly, retain, nonatomic) PLPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property(nonatomic) BOOL isValid; // @synthesize isValid=_isValid;
- (void)dealloc;
@property(nonatomic) ALAssetsLibrary *assetsLibrary; // @synthesize assetsLibrary=_assetsLibrary;
- (void)photoLibraryDidChange:(id)arg1;
- (id)initWithAssetsLibrary:(id)arg1;
- (void)registerAlbum:(struct NSObject *)arg1 assetGroupPrivate:(id)arg2;

@end

