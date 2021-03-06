//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPassbookSettingsOptionsDelegate.h"

@class CNContact, NSDictionary, NSString;

@interface PKPaymentOptionsDefaults : NSObject <PKPassbookSettingsOptionsDelegate>
{
    NSDictionary *_defaultBillingAddresses;
}

+ (id)defaults;
- (id)init;
@property(retain, nonatomic) NSDictionary *defaultBillingAddresses; // @synthesize defaultBillingAddresses=_defaultBillingAddresses;
@property(retain, nonatomic) CNContact *defaultContactName;
- (void)deleteDefaultBillingAddress:(id)arg1;
@property(retain, nonatomic) NSString *defaultPaymentPassIdentifier;
@property(retain, nonatomic) CNContact *defaultContactPhone;
@property(retain, nonatomic) CNContact *defaultContactEmail;
@property(retain, nonatomic) CNContact *defaultShippingAddress;
- (void)_setContact:(id)arg1 forKeychainKey:(id)arg2;
- (id)_rawDefaultBillingAddresses;
- (void)_setContact:(id)arg1 propertyID:(int)arg2 forKeychainKey:(id)arg3;
- (id)_contactForKeychainKey:(id)arg1;
- (void)_keychainData:(id *)arg1 forKey:(id)arg2;
- (void)_setKeychainData:(id)arg1 forKey:(id)arg2;
- (void)setDefaultBillingAddress:(id)arg1 forPaymentPass:(id)arg2;
- (id)defaultBillingAddressForPaymentPass:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

