//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CILightTunnel : CIFilter
{
    CIImage *inputImage;
    CIVector *inputCenter;
    NSNumber *inputRotation;
    NSNumber *inputRadius;
}

+ (id)customAttributes;
- (id)outputImage;
- (void)setDefaults;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
@property(retain, nonatomic) NSNumber *inputRotation; // @synthesize inputRotation;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
- (id)_kernel;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;

@end

