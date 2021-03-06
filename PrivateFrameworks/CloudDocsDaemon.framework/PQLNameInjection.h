//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/PQLNameInjectionBase.h>

#import "PQLInjecting.h"

@class NSData, NSString;

@interface PQLNameInjection : PQLNameInjectionBase <PQLInjecting>
{
}

+ (id)_appendString:(id)arg1 toInjection:(id)arg2;
+ (id)nameWithPrefix:(id)arg1 suffix:(id)arg2;
+ (id)nameWithString:(id)arg1;
- (id)nameByAddingSuffix:(id)arg1;
- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;
- (id)initWithString:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) NSData *sql;
@property(readonly) Class superclass;

@end

