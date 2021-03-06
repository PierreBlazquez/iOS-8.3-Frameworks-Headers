//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUImageModifier.h>

@class UIGradient;

@interface SUReflectionImageModifier : SUImageModifier
{
    UIGradient *_gradient;
    float _reflectionHeight;
}

@property(nonatomic) float reflectionHeight; // @synthesize reflectionHeight=_reflectionHeight;
- (struct CGRect)imageFrameForImage:(id)arg1 currentFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;
- (struct CGSize)finalSizeForSize:(struct CGSize)arg1 originalSize:(struct CGSize)arg2;
- (void)drawAfterImageForContext:(struct CGContext *)arg1 imageFrame:(struct CGRect)arg2 finalSize:(struct CGSize)arg3;
@property(retain, nonatomic) UIGradient *gradient; // @synthesize gradient=_gradient;
- (void)dealloc;

@end

