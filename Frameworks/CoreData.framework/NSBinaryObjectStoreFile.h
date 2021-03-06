//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary;

@interface NSBinaryObjectStoreFile : NSObject
{
    int _databaseVersion;
    NSDictionary *_fullMetadata;
    unsigned long long _primaryKeyGeneration;
    NSMutableDictionary *_mapData;
    NSDictionary *_storeOptions;
}

- (void)dealloc;
- (BOOL)writeToFile:(id)arg1 error:(id *)arg2;
- (BOOL)readFromFile:(id)arg1 error:(id *)arg2;
- (id)mapData;
- (unsigned long long)primaryKeyGeneration;
- (int)databaseVersion;
- (BOOL)_writeMetadataData:(id)arg1 andMapDataData:(id)arg2 toFile:(id)arg3 error:(id *)arg4;
- (BOOL)readBinaryStoreFromData:(id)arg1 originalPath:(id)arg2 error:(id *)arg3;
- (void)clearCurrentValues;
- (void)setMapData:(id)arg1;
- (void)setPrimaryKeyGeneration:(unsigned long long)arg1;
- (void)setDatabaseVersion:(int)arg1;
- (BOOL)writeMetadataToFile:(id)arg1 error:(id *)arg2;
- (void)setFullMetadata:(id)arg1;
- (id)fullMetadata;
- (BOOL)readMetadataFromFile:(id)arg1 error:(id *)arg2;

@end

