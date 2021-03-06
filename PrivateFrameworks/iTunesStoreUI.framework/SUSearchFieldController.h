//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISStoreURLOperationDelegate.h"
#import "SUScriptTextFieldDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ISStoreURLOperation, NSArray, NSString, SUClientInterface, SUScriptTextFieldDelegate, SUSearchDisplayController, SUSearchFieldConfiguration, UIControl, UISearchBar;

@interface SUSearchFieldController : NSObject <ISStoreURLOperationDelegate, SUScriptTextFieldDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate>
{
    SUClientInterface *_clientInterface;
    NSArray *_completions;
    ISStoreURLOperation *_completionsOperation;
    SUSearchFieldConfiguration *_configuration;
    UIControl *_dimmerView;
    UISearchBar *_searchBar;
    SUSearchDisplayController *_searchController;
    int _searchFieldStyle;
    SUScriptTextFieldDelegate *_textFieldDelegate;
}

- (id)_cancelButtonView;
@property(nonatomic) int searchFieldStyle; // @synthesize searchFieldStyle=_searchFieldStyle;
- (id)initWithContentsController:(id)arg1 style:(int)arg2;
- (void)searchBarWillRemoveFromSuperview:(id)arg1;
- (void)scriptDidChangeTextForField:(id)arg1;
- (id)_newTransientViewController;
- (void)_dimmerViewAction:(id)arg1;
- (id)_newBlankStorePageViewController;
- (id)_targetViewController;
- (void)_sendOnXEventWithTerm:(id)arg1 URL:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_fetchCompletions;
- (id)_defaultSearchTerm;
- (void)_reloadCompletionsForSearchString:(id)arg1;
- (void)_cancelCompletionsOperation;
- (void)_showDimmerView;
- (BOOL)_focusTransientViewController;
- (void)_fetchResultsForTerm:(id)arg1 URL:(id)arg2;
- (void)_saveSearchTermToDefaults:(id)arg1;
- (void)_resizeSearchBarForOrientation:(int)arg1;
- (void)_reloadSearchBar;
- (id)_newSearchBar;
- (void)_fetchResultsForURLRequestProperties:(id)arg1;
- (id)newRequestPropertiesWithSearchTerm:(id)arg1 kind:(id)arg2;
- (void)_tearDownDimmerView;
- (void)_savedSearchTermChangedNotification:(id)arg1;
- (id)_newSearchDisplayControllerWithContentsController:(id)arg1;
- (id)initWithContentsController:(id)arg1 clientInterface:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (id)initWithContentsController:(id)arg1 clientInterface:(id)arg2 style:(int)arg3;
- (id)newRequestPropertiesWithSearchTerm:(id)arg1;
- (void)handleSearchURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3;
@property(copy, nonatomic) SUSearchFieldConfiguration *searchFieldConfiguration; // @synthesize searchFieldConfiguration=_configuration;
- (id)_searchGroupForSearchKind:(id)arg1;
- (id)initWithContentsController:(id)arg1;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (BOOL)searchBarShouldEndEditing:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
@property(readonly, nonatomic) UISearchBar *searchBar;
- (void)willRotateToInterfaceOrientation:(int)arg1;
@property(readonly, nonatomic, getter=isActive) BOOL active;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)init;
- (void)dealloc;
- (void)operationDidFinish:(id)arg1;
- (void)operation:(id)arg1 failedWithError:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

