//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRShareCopyAccessTokenOperation : BROperation
{
    NSURL *_url;
    CDUnknownBlockType _shareCopyAccessTokenCompletionBlock;
    CDUnknownBlockType _shareCopyAccessTokenCompletionBlockWithPermissions;
}

- (void)finishWithResult:(id)arg1 error:(id)arg2;
@property(copy) CDUnknownBlockType shareCopyAccessTokenCompletionBlock; // @synthesize shareCopyAccessTokenCompletionBlock=_shareCopyAccessTokenCompletionBlock;
@property(copy) CDUnknownBlockType shareCopyAccessTokenCompletionBlockWithPermissions; // @synthesize shareCopyAccessTokenCompletionBlockWithPermissions=_shareCopyAccessTokenCompletionBlockWithPermissions;
- (void)main;
- (id)initWithURL:(id)arg1;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)dealloc;

@end
