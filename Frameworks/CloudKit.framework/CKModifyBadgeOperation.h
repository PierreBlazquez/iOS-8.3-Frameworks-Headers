//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKOperation.h>

@interface CKModifyBadgeOperation : CKOperation
{
    unsigned int _badgeValue;
    CDUnknownBlockType _modifyBadgeCompletionBlock;
}

- (id)initWithBadgeValue:(unsigned int)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned int badgeValue; // @synthesize badgeValue=_badgeValue;
- (id)init;
@property(copy, nonatomic) CDUnknownBlockType modifyBadgeCompletionBlock; // @synthesize modifyBadgeCompletionBlock=_modifyBadgeCompletionBlock;
- (void)performCKOperation;
- (void)fillOutOperationInfo:(id)arg1;

@end

