//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableURLRequest.h"

@interface NSMutableURLRequest (AppleAccount)
- (BOOL)aa_addDeviceProvisioningInfoHeadersWithDSIDFromReponse:(id)arg1;
- (void)aa_addiTunesHeadersWithAccount:(id)arg1;
- (void)aa_addLocationSharingAllowedHeader;
- (void)aa_addLoggedInAppleIDHeaderWithAccount:(id)arg1;
- (void)aa_addDeviceIDHeader;
- (void)aa_addDeviceInternalDevHeaderIfEnabled;
- (void)aa_addDeviceProvisioningInfoHeadersWithDSID:(id)arg1;
- (BOOL)aa_addGrandSlamAuthorizationHeaderWithAccount:(id)arg1 grandslamToken:(id)arg2;
- (void)aa_addDeviceProvisioningInfoHeadersWithAccount:(id)arg1;
- (void)aa_setBodyWithParameters:(id)arg1;
- (void)aa_addBasicAuthorizationHeaderWithAccount:(id)arg1 preferUsingPassword:(BOOL)arg2;
@end
