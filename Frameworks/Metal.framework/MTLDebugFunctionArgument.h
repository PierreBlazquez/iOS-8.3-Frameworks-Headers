//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTLDebugFunctionArgument : NSObject
{
    BOOL isValid;
    BOOL hasBeenUsed;
    unsigned int type;
    id object;
    unsigned int bufferLength;
    unsigned int bufferOffset;
    unsigned int threadgroupMemoryLength;
    BOOL hasLodClamp;
    float lodMinClamp;
    float lodMaxClamp;
}

- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
