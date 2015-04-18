//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_group>;

@interface AFFuture : NSObject
{
    NSObject<OS_dispatch_group> *_executionGroup;
    id _result;
}

+ (id)futureWithSynchronousResultGenerator:(CDUnknownBlockType)arg1;
+ (id)futureWithResultGenerator:(CDUnknownBlockType)arg1;
- (id)notifyWithCompletion:(CDUnknownBlockType)arg1;
- (id)chainResultGenerator:(CDUnknownBlockType)arg1;
- (void)_wait;
- (id)initWithSynchronousResultGenerator:(CDUnknownBlockType)arg1;
- (id)initWithResultGenerator:(CDUnknownBlockType)arg1;
- (id)result;
- (void).cxx_destruct;
- (id)init;

@end
