//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AAUIFamilySetupDelegate.h"

@class ACAccount, ACAccountStore, NSOperationQueue, NSString, SSAccount, UIViewController;

@interface AAUIFamilySetupPrompter : NSObject <AAUIFamilySetupDelegate>
{
    ACAccountStore *_accountStore;
    ACAccount *_appleAccount;
    ACAccount *_grandSlamAccount;
    SSAccount *_iTunesAccount;
    UIViewController *_presentingViewController;
    NSOperationQueue *_networkingQueue;
    BOOL _isRequestInFlight;
    id <AAUIFamilySetupPrompterDelegate> _delegate;
}

- (void)familySetupViewController:(id)arg1 didCompleteWithSuccess:(BOOL)arg2;
- (void)promptIfEligibleWithPresentingViewController:(id)arg1 isFirstRun:(BOOL)arg2;
- (void)_goToFamilySetup;
- (void)_goToInvitations;
- (void)_startFamilySetupFlowWithEligibilityResponse:(id)arg1;
- (void)_showPendingInvitesDialog;
- (void)_showConfirmationForStartingFamilySetup;
- (void)_showConfirmationForStartingFamilySetupWithPendingInvite;
- (void)_showUnderageAlertWithEligibilityResponse:(id)arg1;
- (void)_handleFamilyEligibilityResponse:(id)arg1 isFirstRun:(BOOL)arg2;
- (id)initWithiTunesAccount:(id)arg1;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
@property(nonatomic) __weak id <AAUIFamilySetupPrompterDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
