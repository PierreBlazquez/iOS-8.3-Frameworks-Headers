//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Celestial/FigCaptureConnectionConfiguration.h>

@interface FigMetadataItemCaptureConnectionConfiguration : FigCaptureConnectionConfiguration
{
    struct opaqueCMFormatDescription *_formatDescription;
    struct OpaqueCMClock *_clock;
}

@property(retain, nonatomic) struct OpaqueCMClock *clock; // @synthesize clock=_clock;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) struct opaqueCMFormatDescription *formatDescription; // @synthesize formatDescription=_formatDescription;

@end
