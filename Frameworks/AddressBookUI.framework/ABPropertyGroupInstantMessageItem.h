//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABPropertyGroupItem.h>

@class CNInstantMessageAddress;

@interface ABPropertyGroupInstantMessageItem : ABPropertyGroupItem
{
}

@property(readonly, nonatomic) CNInstantMessageAddress *profile;
- (id)displayLabel;
- (id)valueForDisplayString:(id)arg1;
- (BOOL)isEquivalentToItem:(id)arg1;
- (id)displayStringForValue:(id)arg1;
- (id)editingStringValue;
- (id)defaultActionURL;

@end
