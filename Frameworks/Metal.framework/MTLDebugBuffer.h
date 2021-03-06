//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/MTLToolsBuffer.h>

@interface MTLDebugBuffer : MTLToolsBuffer
{
    BOOL _purgeableStateHasBeenSet;
    unsigned int _options;
    const void *_pointer;
    unsigned int _purgeableState;
}

@property(nonatomic) unsigned int options; // @synthesize options=_options;
- (id)description;
@property(readonly, nonatomic) BOOL purgeableStateHasBeenSet; // @synthesize purgeableStateHasBeenSet=_purgeableStateHasBeenSet;
@property(readonly, nonatomic) unsigned int purgeableState; // @synthesize purgeableState=_purgeableState;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 bytes:(const void *)arg3 options:(unsigned int)arg4;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 options:(unsigned int)arg3;
- (unsigned int)setPurgeableState:(unsigned int)arg1;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned int)arg2 bytesPerRow:(unsigned int)arg3;
@property(readonly, nonatomic) const void *pointer; // @synthesize pointer=_pointer;

@end

