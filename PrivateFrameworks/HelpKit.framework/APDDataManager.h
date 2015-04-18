//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIAlertViewDelegate.h"

@class APDAsyncURLConnection, APDConnectionManager, APDKVOManager, APDLocale, APDLocalizationModel, APDNavigationModel, APDNavigationTopic, APDSearchModel, NSOperationQueue, NSString, NSURL, UIColor;

@interface APDDataManager : NSObject <UIAlertViewDelegate>
{
    BOOL _hasRequestedConfig;
    BOOL _showingAlert;
    BOOL _loadingConfigConfig;
    NSString *_localizedStringTableName;
    APDKVOManager *_KVOManager;
    APDLocale *_tempPreviousLocale;
    APDAsyncURLConnection *_configServerConnection;
    BOOL _darkMode;
    BOOL _dismissed;
    BOOL _shouldLog;
    BOOL _searchTermsShouldBeHighlighted;
    BOOL _showGlossaryLinks;
    BOOL _translucentBar;
    BOOL _useRemoteAssetsForLocalHelp;
    BOOL _enableContextMenu;
    float _topContentInset;
    int _displayType;
    int _configServerDeviceType;
    id <APDDataManagerDelegate> _delegate;
    UIColor *_toolbarBarTintColor;
    UIColor *_searchBarBarTintColor;
    UIColor *_cellHighlightedColor;
    NSURL *_baseURL;
    NSURL *_remoteHelpURL;
    NSURL *_localResourceBundleURL;
    NSURL *_configServerURL;
    NSString *_configServerAppIdentifier;
    NSString *_configServerTargetedReleaseVersion;
    NSString *_deviceType;
    NSString *_appName;
    NSString *_helpVersion;
    NSString *_selectedTopicName;
    NSString *_selectedTopicID;
    NSString *_selectedISOCode;
    APDNavigationTopic *_currentTopic;
    APDConnectionManager *_connectionManager;
    APDLocale *_locale;
    APDLocalizationModel *_localizationModel;
    APDNavigationModel *_navigationModel;
    APDSearchModel *_searchModel;
    NSOperationQueue *_operationQueue;
}

@property(readonly, nonatomic) BOOL connected; // @dynamic connected;
@property(retain, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(nonatomic, getter=isOnline) BOOL online; // @dynamic online;
@property(retain, nonatomic) APDNavigationModel *navigationModel; // @synthesize navigationModel=_navigationModel;
@property(retain, nonatomic) APDLocalizationModel *localizationModel; // @synthesize localizationModel=_localizationModel;
@property(nonatomic) int configServerDeviceType; // @synthesize configServerDeviceType=_configServerDeviceType;
- (id)fullBaseURLString;
- (void)updateLocalizedStringTableNameForiSOCodes:(id)arg1;
@property(retain, nonatomic) APDConnectionManager *connectionManager; // @synthesize connectionManager=_connectionManager;
@property(retain, nonatomic) UIColor *defaultDarkModeHighlightColor; // @dynamic defaultDarkModeHighlightColor;
@property(retain, nonatomic) UIColor *defaultDarkModeSeparatorColor; // @dynamic defaultDarkModeSeparatorColor;
- (void)onModelLoadFailed:(id)arg1 error:(id)arg2;
- (void)onModelLoadSucceeded:(id)arg1;
- (id)navigationJSONURLWithLocalResource:(BOOL)arg1;
- (id)searchJSONURLWithLocalResource:(BOOL)arg1;
@property(nonatomic) BOOL searchTermsShouldBeHighlighted; // @synthesize searchTermsShouldBeHighlighted=_searchTermsShouldBeHighlighted;
- (void)onConnectionChanged:(id)arg1;
@property(readonly, nonatomic) NSURL *fullLocalizedBaseURL; // @dynamic fullLocalizedBaseURL;
@property(readonly, nonatomic) NSURL *fullLocalizedLocalBaseURL; // @dynamic fullLocalizedLocalBaseURL;
@property(nonatomic) BOOL shouldLog; // @synthesize shouldLog=_shouldLog;
- (id)normalizedHTMLStringFromHTMLString:(id)arg1 topic:(id)arg2 useLocalResource:(BOOL)arg3;
@property(retain, nonatomic) UIColor *defaultDarkModeViewBackgroundColor; // @dynamic defaultDarkModeViewBackgroundColor;
@property(nonatomic) float topContentInset; // @synthesize topContentInset=_topContentInset;
@property(retain, nonatomic) NSString *selectedTopicName; // @synthesize selectedTopicName=_selectedTopicName;
@property(retain, nonatomic) APDNavigationTopic *currentTopic; // @synthesize currentTopic=_currentTopic;
- (void)alertURLRequestProblem;
@property(retain, nonatomic) UIColor *searchBarBarTintColor; // @synthesize searchBarBarTintColor=_searchBarBarTintColor;
@property(retain, nonatomic) UIColor *toolbarBarTintColor; // @synthesize toolbarBarTintColor=_toolbarBarTintColor;
@property(retain, nonatomic) NSString *configServerTargetedReleaseVersion; // @synthesize configServerTargetedReleaseVersion=_configServerTargetedReleaseVersion;
@property(retain, nonatomic) NSString *configServerAppIdentifier; // @synthesize configServerAppIdentifier=_configServerAppIdentifier;
@property(retain, nonatomic) NSURL *configServerURL; // @synthesize configServerURL=_configServerURL;
@property(retain, nonatomic) NSString *selectedISOCode; // @synthesize selectedISOCode=_selectedISOCode;
@property(retain, nonatomic) NSString *helpVersion; // @synthesize helpVersion=_helpVersion;
@property(retain, nonatomic) NSURL *localResourceBundleURL; // @synthesize localResourceBundleURL=_localResourceBundleURL;
@property(retain, nonatomic) NSURL *remoteHelpURL; // @synthesize remoteHelpURL=_remoteHelpURL;
@property(nonatomic) BOOL enableContextMenu; // @synthesize enableContextMenu=_enableContextMenu;
@property(nonatomic) BOOL showGlossaryLinks; // @synthesize showGlossaryLinks=_showGlossaryLinks;
@property(nonatomic) BOOL useRemoteAssetsForLocalHelp; // @synthesize useRemoteAssetsForLocalHelp=_useRemoteAssetsForLocalHelp;
- (void)syncSelectedTopicId;
- (void)getHelpURLFromConfigurationServerDisplayError:(BOOL)arg1;
@property(retain, nonatomic) UIColor *defaultDarkModeViewNavigationSeparatorColor; // @dynamic defaultDarkModeViewNavigationSeparatorColor;
@property(retain, nonatomic) NSString *selectedTopicID; // @synthesize selectedTopicID=_selectedTopicID;
@property(nonatomic) BOOL translucentBar; // @synthesize translucentBar=_translucentBar;
@property(nonatomic) BOOL darkMode; // @synthesize darkMode=_darkMode;
@property(retain, nonatomic) UIColor *cellHighlightedColor; // @synthesize cellHighlightedColor=_cellHighlightedColor;
- (id)localizedURLForRemoteFile:(id)arg1 useLocalResource:(BOOL)arg2;
@property(retain, nonatomic) UIColor *defaultDarkModeBackgroundColor; // @dynamic defaultDarkModeBackgroundColor;
@property(retain, nonatomic) UIColor *defaultDarkModeTextColor; // @dynamic defaultDarkModeTextColor;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) APDSearchModel *searchModel; // @synthesize searchModel=_searchModel;
- (void).cxx_destruct;
@property(nonatomic) int displayType; // @synthesize displayType=_displayType;
@property(retain, nonatomic) APDLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) BOOL dismissed; // @synthesize dismissed=_dismissed;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
@property(nonatomic) float statusBarHeight; // @dynamic statusBarHeight;
@property(nonatomic) __weak id <APDDataManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSURL *fullBaseURL; // @dynamic fullBaseURL;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
