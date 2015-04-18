//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class AMSBTLEAdvertisementManager, NSString, NSTimer, UIActivityIndicatorView, UITextField;

@interface CABTMIDILocalPeripheralViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>
{
    AMSBTLEAdvertisementManager *advertisingManager;
    NSString *statusString;
    UITextField *serviceNameField;
    BOOL advertising;
    BOOL isErrorMessage;
    UIActivityIndicatorView *indicator;
    NSString *theServiceName;
    int advertiseTimeout;
    NSTimer *advertiseTimer;
    NSTimer *messageTimer;
    BOOL didCleanup;
}

- (id)statusString;
- (void)stopTimers;
- (void)cleanup;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLoad;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)title;
- (void)didReceiveMemoryWarning;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)dealloc;
- (BOOL)disconnectLocalPeripheral;
- (void)messageTimerFired:(id)arg1;
- (BOOL)changeServiceNameTo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (void)advertiseServiceSwitchToggled:(id)arg1;
- (void)textFieldDone:(id)arg1;
- (void)setStatusString:(id)arg1 animateIndicator:(BOOL)arg2 isError:(BOOL)arg3;
- (BOOL)stopAdvertisingServiceWithCompletionBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (BOOL)advertiseServiceWithName:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (void)deactivateController:(id)arg1;
- (void)activateController:(id)arg1;
- (void)updateAdvertiseUI;
- (void)advertiseTimerFired:(id)arg1;
- (id)advertisedServiceName;
- (void)didChangePreferredContentSize:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
