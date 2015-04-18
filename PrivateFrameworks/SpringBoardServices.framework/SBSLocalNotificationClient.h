//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SBSLocalNotificationClient : NSObject
{
}

+ (unsigned int)currentAllowedNotificationTypesForBundleID:(id)arg1;
+ (void)setScheduledLocalNotifications:(id)arg1 bundleIdentifier:(id)arg2;
+ (void)cancelAllLocalNotificationsForBundleIdentifier:(id)arg1;
+ (void)cancelLocalNotification:(id)arg1 bundleIdentifier:(id)arg2;
+ (void)scheduleLocalNotification:(id)arg1 bundleIdentifier:(id)arg2;
+ (id)getPendingNotification;
+ (void)registerUserNotificationSettings:(id)arg1 bundleIdentifier:(id)arg2;
+ (void)_scheduleLocalNotifications:(id)arg1 cancel:(BOOL)arg2 replace:(BOOL)arg3 optionalBundleIdentifier:(id)arg4;
+ (void)_scheduleLocalNotifications:(id)arg1 cancel:(BOOL)arg2 replace:(BOOL)arg3 optionalBundleIdentifier:(id)arg4 waitUntilDone:(BOOL)arg5;
+ (id)currentUserNotificationSettingsForBundleID:(id)arg1;
+ (id)scheduledLocalNotificationsForBundleIdentifier:(id)arg1;
+ (void)cancelLocalNotification:(id)arg1 bundleIdentifier:(id)arg2 waitUntilDone:(BOOL)arg3;
+ (void)scheduleLocalNotification:(id)arg1 bundleIdentifier:(id)arg2 waitUntilDone:(BOOL)arg3;
+ (void)migrateUserNotificationSettingsForBundleIdentifierPushSettingsPairs:(id)arg1;
+ (id)scheduledLocalNotifications;
+ (void)setScheduledLocalNotifications:(id)arg1;
+ (void)cancelAllLocalNotifications;
+ (void)cancelLocalNotification:(id)arg1;
+ (void)scheduleLocalNotification:(id)arg1;
+ (void)registerUserNotificationSettings:(id)arg1;
+ (id)currentUserNotificationSettings;

@end
