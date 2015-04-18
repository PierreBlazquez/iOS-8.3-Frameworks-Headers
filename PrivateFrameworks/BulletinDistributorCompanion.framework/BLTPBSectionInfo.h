//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class BLTPBSectionIcon, NSMutableArray, NSString;

@interface BLTPBSectionInfo : PBCodable <NSCopying>
{
    unsigned int _alertType;
    NSString *_displayName;
    NSString *_factorySectionID;
    BLTPBSectionIcon *_icon;
    unsigned int _notificationCenterLimit;
    unsigned int _pushSettings;
    int _sectionCategory;
    NSString *_sectionID;
    int _sectionType;
    NSString *_subsectionID;
    int _subsectionPriority;
    NSMutableArray *_subsections;
    unsigned int _suppressedSettings;
    NSString *_universalSectionID;
    unsigned int _version;
    BOOL _allowsNotifications;
    BOOL _displaysCriticalBulletins;
    BOOL _iconsStripped;
    BOOL _showsInLockScreen;
    BOOL _showsInNotificationCenter;
    BOOL _showsMessagePreview;
    BOOL _showsOnExternalDevices;
    BOOL _suppressFromSettings;
    struct {
        unsigned int alertType:1;
        unsigned int notificationCenterLimit:1;
        unsigned int pushSettings:1;
        unsigned int sectionCategory:1;
        unsigned int sectionType:1;
        unsigned int subsectionPriority:1;
        unsigned int suppressedSettings:1;
        unsigned int version:1;
        unsigned int allowsNotifications:1;
        unsigned int displaysCriticalBulletins:1;
        unsigned int iconsStripped:1;
        unsigned int showsInLockScreen:1;
        unsigned int showsInNotificationCenter:1;
        unsigned int showsMessagePreview:1;
        unsigned int showsOnExternalDevices:1;
        unsigned int suppressFromSettings:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
@property(nonatomic) BOOL hasVersion;
- (void)mergeFrom:(id)arg1;
@property(nonatomic) BOOL showsInNotificationCenter; // @synthesize showsInNotificationCenter=_showsInNotificationCenter;
@property(retain, nonatomic) NSMutableArray *subsections; // @synthesize subsections=_subsections;
@property(retain, nonatomic) NSString *subsectionID; // @synthesize subsectionID=_subsectionID;
@property(nonatomic) unsigned int suppressedSettings; // @synthesize suppressedSettings=_suppressedSettings;
@property(nonatomic) unsigned int alertType; // @synthesize alertType=_alertType;
@property(nonatomic) BOOL hasAlertType;
@property(retain, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property(readonly, nonatomic) BOOL hasDisplayName;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) BOOL iconsStripped; // @synthesize iconsStripped=_iconsStripped;
@property(nonatomic) BOOL hasIconsStripped;
@property(readonly, nonatomic) BOOL hasFactorySectionID;
@property(nonatomic) BOOL hasSubsectionPriority;
@property(nonatomic) BOOL hasDisplaysCriticalBulletins;
@property(nonatomic) BOOL hasSuppressedSettings;
@property(nonatomic) BOOL hasAllowsNotifications;
@property(nonatomic) BOOL hasShowsMessagePreview;
@property(nonatomic) BOOL hasPushSettings;
@property(nonatomic) BOOL hasNotificationCenterLimit;
@property(nonatomic) BOOL hasShowsOnExternalDevices;
@property(nonatomic) BOOL hasShowsInLockScreen;
@property(nonatomic) BOOL hasShowsInNotificationCenter;
@property(nonatomic) BOOL hasSuppressFromSettings;
@property(nonatomic) BOOL hasSectionCategory;
@property(nonatomic) BOOL hasSectionType;
@property(readonly, nonatomic) BOOL hasSubsectionID;
- (id)subsectionsAtIndex:(unsigned int)arg1;
- (void)clearSubsections;
- (unsigned int)subsectionsCount;
- (void)addSubsections:(id)arg1;
@property(readonly, nonatomic) BOOL hasUniversalSectionID;
@property(readonly, nonatomic) BOOL hasSectionID;
@property(nonatomic) int subsectionPriority; // @synthesize subsectionPriority=_subsectionPriority;
@property(nonatomic) BOOL displaysCriticalBulletins; // @synthesize displaysCriticalBulletins=_displaysCriticalBulletins;
@property(nonatomic) BOOL showsOnExternalDevices; // @synthesize showsOnExternalDevices=_showsOnExternalDevices;
@property(nonatomic) BOOL suppressFromSettings; // @synthesize suppressFromSettings=_suppressFromSettings;
@property(nonatomic) int sectionCategory; // @synthesize sectionCategory=_sectionCategory;
@property(nonatomic) unsigned int notificationCenterLimit; // @synthesize notificationCenterLimit=_notificationCenterLimit;
@property(nonatomic) BOOL allowsNotifications; // @synthesize allowsNotifications=_allowsNotifications;
@property(nonatomic) unsigned int pushSettings; // @synthesize pushSettings=_pushSettings;
@property(nonatomic) BOOL showsInLockScreen; // @synthesize showsInLockScreen=_showsInLockScreen;
@property(retain, nonatomic) NSString *factorySectionID; // @synthesize factorySectionID=_factorySectionID;
@property(nonatomic) BOOL showsMessagePreview; // @synthesize showsMessagePreview=_showsMessagePreview;
@property(retain, nonatomic) NSString *universalSectionID; // @synthesize universalSectionID=_universalSectionID;
- (void).cxx_destruct;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (id)dictionaryRepresentation;
@property(retain, nonatomic) BLTPBSectionIcon *icon; // @synthesize icon=_icon;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic) int sectionType; // @synthesize sectionType=_sectionType;
@property(readonly, nonatomic) BOOL hasIcon;

@end
