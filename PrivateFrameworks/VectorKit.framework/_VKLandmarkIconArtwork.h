//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKIconArtwork.h>

@interface _VKLandmarkIconArtwork : VKIconArtwork
{
    CDStruct_5977520b _style;
    struct CGImage *_maskImage;
    struct CGImage *_outlineMaskImage;
}

- (id)initWithMask:(struct CGImage *)arg1 outlineMask:(struct CGImage *)arg2 style:(CDStruct_5977520b *)arg3 contentScale:(float)arg4;
- (void)_cleanUpAfterDrawing;
- (id)_newImage;
- (id).cxx_construct;
- (struct CGSize)size;
- (void)dealloc;

@end
