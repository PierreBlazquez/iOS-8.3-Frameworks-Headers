//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NSCoding.h"

@class NSArray, UIColor, UIImage, UIImageView;

@interface UIProgressView : UIView <NSCoding>
{
    int _progressViewStyle;
    float _progress;
    int _barStyle;
    UIColor *_progressTintColor;
    UIColor *_trackTintColor;
    UIImageView *_trackView;
    UIImageView *_progressView;
    BOOL _isAnimating;
    NSArray *_trackColors;
    NSArray *_progressColors;
    UIImage *_trackImage;
    UIImage *_progressImage;
}

+ (CDStruct_d58a15aa)_standardImagesForStyle:(int)arg1 barStyle:(int)arg2;
+ (int)_indexForStyle:(int)arg1 barStyle:(int)arg2;
+ (id)_tintedImageForHeight:(float)arg1 andColors:(id)arg2;
+ (id)_tintedImageForHeight:(float)arg1 andColors:(id)arg2 roundingRectCorners:(unsigned int)arg3;
+ (struct CGSize)defaultSize;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@property(retain, nonatomic) UIImage *progressImage; // @synthesize progressImage=_progressImage;
@property(retain, nonatomic) UIImage *trackImage; // @synthesize trackImage=_trackImage;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) int progressViewStyle; // @synthesize progressViewStyle=_progressViewStyle;
@property(retain, nonatomic) UIColor *trackTintColor; // @synthesize trackTintColor=_trackTintColor;
- (void)_setProgressColor:(id)arg1;
- (id)_progressColor;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2;
- (id)initWithProgressViewStyle:(int)arg1;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
- (void)_setProgressAnimated:(float)arg1 duration:(double)arg2 delay:(double)arg3 options:(unsigned int)arg4;
- (id)_appropriateTrackImage;
- (id)_appropriateProgressImage;
- (unsigned int)_roundedCornersForProgressForCurrentStyle;
- (unsigned int)_roundedCornersForTrackForCurrentStyle;
- (id)_defaultTrackColorForCurrentStyle;
- (BOOL)_shouldTintProgress;
- (BOOL)_shouldTintTrack;
- (void)_setProgress:(float)arg1;
- (void)_updateImages;
- (int)barStyle;
- (void)setBarStyle:(int)arg1;
- (void)tintColorDidChange;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

