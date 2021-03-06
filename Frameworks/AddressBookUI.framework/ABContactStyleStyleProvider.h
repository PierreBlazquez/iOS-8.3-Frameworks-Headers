//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookUI/ABStyleProvider.h>

@class CNContactStyle;

@interface ABContactStyleStyleProvider : ABStyleProvider
{
    CNContactStyle *_contactStyle;
}

- (void)dealloc;
- (id)initWithContactStyle:(id)arg1;
- (id)cardLabelSelectedBackgroundColor;
- (int)headerViewBorderStyle;
- (id)memberSearchFieldBackgroundColor;
- (id)cardSectionBackgroundColor;
- (id)membersSearchBackgroundColor;
- (id)membersBackgroundColor;
- (id)memberHeaderBackgroundView;
- (id)membersHeaderContentViewBackgroundColor;
- (id)memberNameTextColor;
- (id)membersHeaderBackgroundColor;
- (BOOL)peoplePickerBarStyleIsTranslucent;
- (int)peoplePickerBarStyle;
- (BOOL)shouldUsePeoplePickerBarStyle;
- (id)separatorColorForCellStyle:(int)arg1;
- (id)cardValueTextColor;
@property(retain, nonatomic) CNContactStyle *contactStyle; // @synthesize contactStyle=_contactStyle;
- (id)cardCellBackgroundColor;
- (id)groupHeaderBackgroudColor;
- (id)groupCellTextColor;
- (id)groupCellBackgroundColor;
- (id)cardCellDividerColorVertical:(BOOL)arg1;
- (id)groupsTableBackgroundColor;

@end

