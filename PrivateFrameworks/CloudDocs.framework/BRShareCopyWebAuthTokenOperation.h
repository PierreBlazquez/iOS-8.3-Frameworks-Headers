//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocs/BROperation.h>

@class NSString;

@interface BRShareCopyWebAuthTokenOperation : BROperation
{
    NSString *_containerIdentifier;
    CDUnknownBlockType _shareCopyWebAuthTokenCompletionBlock;
}

@property(retain, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
- (id)initWithContainerIdentifier:(id)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
@property(copy) CDUnknownBlockType shareCopyWebAuthTokenCompletionBlock; // @synthesize shareCopyWebAuthTokenCompletionBlock=_shareCopyWebAuthTokenCompletionBlock;
- (void)main;
- (void)dealloc;

@end
