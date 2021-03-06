//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface CoreDAVMoveWithFallbackTaskGroup : CoreDAVTaskGroup
{
    NSURL *_sourceURL;
    NSURL *_destinationURL;
    NSString *_previousETag;
    BOOL _useFallback;
    int _overwrite;
    NSData *_dataPayload;
    NSString *_dataContentType;
    NSDictionary *_responseHeaders;
    NSString *_nextETag;
}

@property(retain, nonatomic) NSString *dataContentType; // @synthesize dataContentType=_dataContentType;
@property(retain, nonatomic) NSData *dataPayload; // @synthesize dataPayload=_dataPayload;
@property(nonatomic) BOOL useFallback; // @synthesize useFallback=_useFallback;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 AccountInfoProvider:(id)arg3 taskManager:(id)arg4;
- (void)_completedPutTask:(id)arg1;
- (void)_completedMoveTask:(id)arg1;
@property(nonatomic) int overwrite; // @synthesize overwrite=_overwrite;
@property(readonly, nonatomic) NSString *nextETag; // @synthesize nextETag=_nextETag;
@property(retain, nonatomic) NSString *previousETag; // @synthesize previousETag=_previousETag;
- (void)startTaskGroup;
@property(readonly, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
- (id)description;
- (void)dealloc;
@property(readonly, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(readonly, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;

@end

