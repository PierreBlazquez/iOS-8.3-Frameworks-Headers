//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCVersion.h>

#import "PQLBindable.h"

@class NSError, NSString;

@interface BRCDesiredVersion : BRCVersion <PQLBindable>
{
    union {
        unsigned int value;
        struct {
            unsigned int isFault:1;
            unsigned int startDownload:1;
            unsigned int userInitiated:1;
        } ;
    } _flags;
    NSError *_downloadError;
    NSString *_serverName;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *serverName; // @synthesize serverName=_serverName;
- (BOOL)isStillValidForEtag:(id)arg1;
- (id)initWithServerVersion:(id)arg1 serverName:(id)arg2;
- (id)initWithDesiredVersion:(id)arg1;
@property(retain, nonatomic) NSError *downloadError; // @synthesize downloadError=_downloadError;
@property(readonly, nonatomic) BOOL userInitiated;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (id)descriptionWithContext:(id)arg1;
@property(readonly, nonatomic) BOOL wantsContent;
@property(readonly, nonatomic) BOOL isFault;
- (void).cxx_destruct;
@property(nonatomic) unsigned int options;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
