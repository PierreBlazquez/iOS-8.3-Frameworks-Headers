//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFWallpaperView.h>

#import "SBFProceduralWallpaperDelegate.h"

@class NSDictionary, NSString, NSTimer, UIImage;

@interface SBFProceduralWallpaperView : SBFWallpaperView <SBFProceduralWallpaperDelegate>
{
    id <SBFProceduralWallpaper> _proceduralWallpaper;
    NSDictionary *_options;
    NSTimer *_colorSampleTimer;
    UIImage *_blur;
    int _thermalNotificationToken;
    BOOL _pausedForThermalReasons;
}

+ (BOOL)_allowsRasterization;
+ (BOOL)_allowsParallax;
- (id)initWithFrame:(struct CGRect)arg1 proceduralWallpaper:(id)arg2 options:(id)arg3 variant:(int)arg4;
- (void)wallpaper:(id)arg1 didComputeAverageColor:(id)arg2 forRect:(struct CGRect)arg3;
- (void)wallpaper:(id)arg1 didGenerateBlur:(struct __IOSurface *)arg2 forRect:(struct CGRect)arg3;
- (void)_sample;
- (BOOL)_shouldSampleContinuously;
- (id)_newImageFromBlurSurface:(struct __IOSurface *)arg1 rect:(struct CGRect)arg2;
- (void)_updateSampleTimer;
- (void)_updateAnimating;
- (void)setWallpaperAnimationEnabled:(BOOL)arg1;
- (void)setContinuousColorSamplingEnabled:(BOOL)arg1;
- (BOOL)isDisplayingWallpaper:(id)arg1 forVariant:(int)arg2 options:(id)arg3;
- (void)prepareToDisappear;
- (void)prepareToAppear;
- (void)_stopGeneratingBlurredImages;
- (void)_startGeneratingBlurredImages;
- (void)_handleVisibilityChange;
- (id)_blurredImage;
- (void)_handleVariantChange;
- (id)_computeAverageColor;
- (BOOL)_isVisible;
- (id)options;
- (void)invalidate;
- (void)layoutSubviews;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

