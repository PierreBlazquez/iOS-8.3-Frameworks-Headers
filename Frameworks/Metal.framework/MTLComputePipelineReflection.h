//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface MTLComputePipelineReflection : NSObject
{
    NSArray *_builtInArguments;
    CDStruct_596dc0d1 _flags;
    NSArray *_arguments;
}

@property(readonly) NSArray *arguments; // @synthesize arguments=_arguments;
- (id).cxx_construct;
- (id)description;
- (void)dealloc;
- (id)initWithSerializedData:(id)arg1 options:(unsigned int)arg2 flags:(CDStruct_596dc0d1)arg3;
- (id)builtInArguments;

@end
