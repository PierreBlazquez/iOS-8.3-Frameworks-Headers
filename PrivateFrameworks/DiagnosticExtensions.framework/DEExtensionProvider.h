//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSExtensionRequestHandling.h"

@class NSString;

@interface DEExtensionProvider : NSObject <NSExtensionRequestHandling>
{
    BOOL _allowUserAttachmentSelection;
    BOOL _canGenerateNewAttachment;
    NSString *_loggingConsent;
}

- (BOOL)isLoggingEnabled;
- (id)_getHostname;
- (id)filesInDir:(id)arg1 matchingPattern:(id)arg2 excludingPattern:(id)arg3;
- (id)attachmentsWithParams:(id)arg1;
- (id)attachmentList;
- (void)disableLogging;
- (void)enableLogging;
@property(nonatomic) BOOL canGenerateNewAttachment; // @synthesize canGenerateNewAttachment=_canGenerateNewAttachment;
@property(nonatomic) BOOL allowUserAttachmentSelection; // @synthesize allowUserAttachmentSelection=_allowUserAttachmentSelection;
@property(copy, nonatomic) NSString *loggingConsent; // @synthesize loggingConsent=_loggingConsent;
- (BOOL)canEnableLogging;
- (void).cxx_destruct;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

