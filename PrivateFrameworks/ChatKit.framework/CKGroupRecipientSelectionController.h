//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ChatKit/CKRecipientSelectionController.h>

#import "CKRecipientSelectionControllerDelegate.h"

@class NSString, UIBarButtonItem;

@interface CKGroupRecipientSelectionController : CKRecipientSelectionController <CKRecipientSelectionControllerDelegate>
{
    UIBarButtonItem *_doneButton;
}

@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
- (void)_frecencySearch;
- (void)_updateNavigationButton;
- (struct UIEdgeInsets)navigationBarInsetsForRecipientSelectionController:(id)arg1;
- (void)recipientSelectionControllerSearchListDidShowOrHide:(id)arg1;
- (BOOL)alwaysShowSearchResultsTable;
- (BOOL)shouldSuppressSearchResultsTable;
- (void)recipientSelectionController:(id)arg1 didFinishAvailaiblityLookupForRecipient:(id)arg2;
- (void)recipientAvailibilitiesDidUpdate;
- (void)recipientSelectionControllerRequestDismissKeyboard:(id)arg1;
- (void)recipientSelectionControllerDidPushABViewController:(id)arg1;
- (void)recipientSelectionControllerDidChangeSize:(id)arg1;
- (void)recipientSelectionControllerReturnPressed:(id)arg1;
- (void)recipientSelectionController:(id)arg1 textDidChange:(id)arg2;
- (void)recipientSelectionControllerDidChange;
- (BOOL)homogenizePreferredServiceForiMessage;
- (BOOL)searchListShouldUsePopvoers;
- (void)viewDidAppearDeferredSetup;
- (id)initWithConversation:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (BOOL)shouldAutorotate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
