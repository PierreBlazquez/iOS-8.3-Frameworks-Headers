//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CFNetwork/NSURLConnectionInternal.h>

#import "NSURLConnectionRequired.h"

@class NSString, NSURLAuthenticationChallenge;

@interface NSURLConnectionInternalConnection : NSURLConnectionInternal <NSURLConnectionRequired>
{
    int _cfConnLock;
    struct _CFURLConnection *_cfConn;
    struct _CFURLAuthChallenge *_currCFChallenge;
    NSURLAuthenticationChallenge *_currNSChallenge;
    struct __CFString *_fileName;
    _Bool _shouldSkipCancelOnRelease;
    long long _totalBytes;
    long long _expectedTotalBytes;
}

- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)_timingData;
- (void)_invalidate;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
- (void)start;
- (void)dealloc;
- (void)cancel;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (struct _CFURLConnection *)_CFURLConnection;
- (void)cleanupChallenges;
- (struct _CFURLConnection *)_atomic_CFURLConnection;
- (struct _CFURLConnection *)_retainCFURLConnection;
- (void)sendCFChallenge:(struct _CFURLAuthChallenge *)arg1 toSelector:(SEL)arg2;
- (void)invokeForDelegate:(CDUnknownBlockType)arg1;
- (void)_setShouldSkipCancelOnRelease:(_Bool)arg1;
- (void)_resumeLoading;
- (void)_suspendLoading;
- (void)_setDelegateQueue:(id)arg1;
- (id)initWithInfo:(const struct InternalInit *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
