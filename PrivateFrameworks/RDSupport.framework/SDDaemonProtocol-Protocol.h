//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SDDaemonProtocol <NSObject>
- (void)rebootCompanion:(BOOL)arg1 andGizmo:(BOOL)arg2;
- (void)gizmoScreenSaverDismissed;
- (void)gizmoDisplayingFriend;
- (void)gizmoEnteredWatchFaceCustomization;
- (void)gizmoEnteredWatchFaceSwitcher;
- (void)gizmoEnteredMessageEmojiCompose;
- (void)gizmoEnteredMessageCompose;
- (void)gizmoDisplayingCarouselNotificationCenter;
- (void)gizmoDisplayingCarouselClock;
- (void)gizmoDisplayingCarouselAppLauncher;
- (void)gizmoLaunchingAppWithBundleID:(NSString *)arg1;
- (void)gizmoDisplayingAlertWthID:(NSString *)arg1;
- (void)gizmoDisplayingGlanceWithGlanceID:(NSString *)arg1;
- (void)gizmoDisplayingGlanceWithBundleID:(NSString *)arg1;
@end
