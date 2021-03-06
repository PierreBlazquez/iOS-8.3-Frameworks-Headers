//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMethodSignature;

@interface NSInvocation : NSObject
{
    void *_frame;
    void *_retdata;
    id _signature;
    id _container;
    unsigned char _retainedArgs;
    unsigned char _reserved[15];
}

+ (id)invocationWithMethodSignature:(id)arg1;
+ (id)_invocationWithMethodSignature:(id)arg1 frame:(void *)arg2;
- (void)invokeUsingIMP:(CDUnknownFunctionPointerType)arg1;
- (void)setReturnValue:(void *)arg1;
- (void)getArgument:(void *)arg1 atIndex:(int)arg2;
@property(readonly, retain) NSMethodSignature *methodSignature;
- (void)getReturnValue:(void *)arg1;
- (void)invokeWithTarget:(id)arg1;
- (void)retainArguments;
@property SEL selector;
@property id target;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)invoke;
- (void)setArgument:(void *)arg1 atIndex:(int)arg2;
- (id)init;
- (void)dealloc;
- (void)invokeSuper;
- (void)_addAttachedObject:(id)arg1;
@property(readonly) BOOL argumentsRetained;

@end

