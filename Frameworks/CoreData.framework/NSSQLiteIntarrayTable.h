//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NSSQLiteIntarrayTable : NSObject
{
    struct sqlite3_intarray *_intarrayTable;
    NSString *_intarrayTableName;
}

- (void)dealloc;
@property(retain) NSString *intarrayTableName; // @synthesize intarrayTableName=_intarrayTableName;
@property struct sqlite3_intarray *intarrayTable; // @synthesize intarrayTable=_intarrayTable;

@end

