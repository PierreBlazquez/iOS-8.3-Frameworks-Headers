//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SSSQLiteDatabase;

@interface SSMetricsEventTable : NSObject
{
    SSSQLiteDatabase *_database;
}

+ (id)databasePath;
- (BOOL)_setupDatabase;
- (void)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1;

@end
