//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PFUbiquityLogging : NSObject
{
    int _desiredLogLevel;
}

+ (void)initialize;
+ (void)setLoggingLevel:(int)arg1;
+ (BOOL)canLogMessageAtLevel:(int)arg1;
- (id)init;
- (void)dealloc;
@property(nonatomic) int desiredLogLevel; // @synthesize desiredLogLevel=_desiredLogLevel;
- (void)checkUserDefaults;
- (void)userDefaultsChanged:(id)arg1;

@end

