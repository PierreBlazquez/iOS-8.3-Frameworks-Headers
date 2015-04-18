//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class CNContactStyle, NSArray, NSIndexPath, NSString, UITableViewController;

@interface ABPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate>
{
    BOOL _allowsCustomItems;
    NSString *_selectedItem;
    NSArray *_builtinItems;
    NSArray *_customItems;
    NSString *_itemLocalizationKey;
    CDUnknownBlockType _itemLocalizationBlock;
    CNContactStyle *_contactStyle;
    UITableViewController *_tableViewController;
    NSIndexPath *_selectedIndexPath;
}

@property(retain, nonatomic) NSString *selectedItem; // @synthesize selectedItem=_selectedItem;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (BOOL)isEditing;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)dealloc;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(copy, nonatomic) CDUnknownBlockType itemLocalizationBlock; // @synthesize itemLocalizationBlock=_itemLocalizationBlock;
@property(copy, nonatomic) NSString *itemLocalizationKey; // @synthesize itemLocalizationKey=_itemLocalizationKey;
- (void)customLabelUpdated:(id)arg1;
- (void)donePicker:(id)arg1;
- (void)_updateRightButtonItem;
@property(copy, nonatomic) NSArray *customItems; // @synthesize customItems=_customItems;
@property(copy, nonatomic) NSArray *builtinItems; // @synthesize builtinItems=_builtinItems;
@property(nonatomic) BOOL allowsCustomItems; // @synthesize allowsCustomItems=_allowsCustomItems;
- (void)removeCustomItem:(id)arg1;
- (id)titleForAddCustomItem;
- (id)titleForPickerItem:(id)arg1;
@property(retain, nonatomic) UITableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
- (void)cancelPicker:(id)arg1;
- (id)_itemAtIndexPath:(id)arg1;
@property(retain, nonatomic) CNContactStyle *contactStyle; // @synthesize contactStyle=_contactStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <ABPickerControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
