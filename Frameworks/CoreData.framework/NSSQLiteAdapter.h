//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSSQLAdapter.h>

@class NSString;

@interface NSSQLiteAdapter : NSSQLAdapter
{
    NSString *_dbpath;
}

- (id)type;
- (void)dealloc;
- (id)pathnameForDatabase;
- (id)sqliteVersion;
- (id)generateSQLStatmentForSourcesAndOrderKeysForDestination:(id)arg1 inManyToMany:(id)arg2;
- (id)generateSQLStatmentForSourcesAndOrderKeysForDestination:(id)arg1 inToMany:(id)arg2;
- (id)createConnection;
- (id)initWithSQLCore:(id)arg1;
- (id)typeStringForSQLType:(unsigned int)arg1;
- (id)typeStringForColumn:(id)arg1;
- (Class)statementClass;
- (BOOL)supportsCorrelatedSubqueries;

@end

