//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NEConfiguration, NEConfigurationManager, NEVPNConnection, NEVPNProtocol, NSArray, NSString;

@interface NEVPNManager : NSObject
{
    BOOL _hasLoaded;
    NEVPNConnection *_connection;
    NEConfiguration *_configuration;
    NEConfigurationManager *_configurationManager;
}

+ (id)sharedManager;
@property BOOL hasLoaded; // @synthesize hasLoaded=_hasLoaded;
@property(retain) NEVPNProtocol *protocol;
@property(copy) NSString *localizedDescription;
@property(copy) NEConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly) NEVPNConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
@property(getter=isEnabled) BOOL enabled;
- (id)init;
@property(copy) NSArray *onDemandRules;
- (id)initVPNManager;
- (void)saveToPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) NEConfigurationManager *configurationManager; // @synthesize configurationManager=_configurationManager;
- (void)loadFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(getter=isOnDemandEnabled) BOOL onDemandEnabled;

@end

