//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SUMaskProvider;

@interface SUMaskedView : UIView
{
    SUMaskProvider *_maskProvider;
}

- (void)_reloadMask;
- (struct CGPath *)copyMaskPath;
@property(retain, nonatomic) SUMaskProvider *maskProvider; // @synthesize maskProvider=_maskProvider;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
