//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBUniquableObject.h"
#import "NSSecureCoding.h"

@class BBSectionIcon, BBSectionSubtypeParameters, NSLock, NSMutableDictionary, NSString;

@interface BBSectionParameters : NSObject <BBUniquableObject, NSSecureCoding>
{
    NSLock *_lock;
    NSString *_uniqueIdentifier;
    BOOL _showsSubtitle;
    BOOL _usesVariableLayout;
    BOOL _orderSectionUsingRecencyDate;
    BOOL _showsDateInFloatingLockScreenAlert;
    BOOL _displaysCriticalBulletins;
    unsigned int _messageNumberOfLines;
    BBSectionSubtypeParameters *_defaultSubtypeParameters;
    NSMutableDictionary *_allSubtypeParameters;
    NSString *_displayName;
    BBSectionIcon *_icon;
}

+ (id)copyCachedSectionParametersWithIdentifier:(id)arg1;
+ (void)removeSectionParametersFromCache:(id)arg1;
+ (id)addSectionParametersToCache:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)allSubtypes;
- (id)parametersForSubtype:(int)arg1;
@property(nonatomic) BOOL showsDateInFloatingLockScreenAlert; // @synthesize showsDateInFloatingLockScreenAlert=_showsDateInFloatingLockScreenAlert;
@property(nonatomic) BOOL orderSectionUsingRecencyDate; // @synthesize orderSectionUsingRecencyDate=_orderSectionUsingRecencyDate;
@property(nonatomic) BOOL usesVariableLayout; // @synthesize usesVariableLayout=_usesVariableLayout;
@property(nonatomic) unsigned int messageNumberOfLines; // @synthesize messageNumberOfLines=_messageNumberOfLines;
@property(nonatomic) BOOL showsSubtitle; // @synthesize showsSubtitle=_showsSubtitle;
@property(retain, nonatomic) NSMutableDictionary *allSubtypeParameters; // @synthesize allSubtypeParameters=_allSubtypeParameters;
@property(retain, nonatomic) BBSectionSubtypeParameters *defaultSubtypeParameters; // @synthesize defaultSubtypeParameters=_defaultSubtypeParameters;
@property(nonatomic) BOOL displaysCriticalBulletins; // @synthesize displaysCriticalBulletins=_displaysCriticalBulletins;
- (id)uniqueIdentifier;
@property(retain, nonatomic) BBSectionIcon *icon; // @synthesize icon=_icon;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
