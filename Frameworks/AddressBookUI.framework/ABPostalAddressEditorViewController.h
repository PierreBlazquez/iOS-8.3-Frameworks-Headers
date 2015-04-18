//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "ABPresenterDelegate.h"
#import "ABPropertyCellDelegate.h"

@class ABCardPropertyGroup, CNContactStyle, CNMutableContact, NSMutableArray, NSString;

@interface ABPostalAddressEditorViewController : UITableViewController <ABPresenterDelegate, ABPropertyCellDelegate>
{
    NSMutableArray *_propertyItems;
    int _property;
    CNMutableContact *_contact;
    ABCardPropertyGroup *_propertyGroup;
    CNContactStyle *_contactStyle;
}

+ (id)cellIdentifierForEditingProperty:(id)arg1;
+ (id)cellIdentifierForClass:(Class)arg1;
- (void)cancel:(id)arg1;
- (void)done:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (float)tableViewSpacingForExtraSeparators:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)dealloc;
- (id)initWithContact:(id)arg1 property:(int)arg2 editNames:(BOOL)arg3;
- (void)validateContents;
- (void)_startEditingFirstCell;
- (void)_rebuildPropertyGroupItems:(BOOL)arg1;
@property(readonly) BOOL isPresentingModalViewController;
- (id)defaultValueForPropertyCell:(id)arg1;
- (void)propertyCellDidChangeLayout:(id)arg1;
- (void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(int)arg3;
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3;
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3;
- (void)registerContactCellClass:(Class)arg1;
- (void)sender:(id)arg1 dismissViewController:(id)arg2;
- (void)sender:(id)arg1 presentViewController:(id)arg2;
- (id)contactStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
