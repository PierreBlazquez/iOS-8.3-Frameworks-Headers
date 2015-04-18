//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImage;

@interface SiriUIStarsView : UIView
{
    double _rating;
    double _maxRating;
    int _numberOfStars;
    UIImage *_starsImage;
    BOOL _snapsToHalfStar;
    int _style;
}

+ (id)_starsImageCache;
@property(nonatomic) BOOL snapsToHalfStar; // @synthesize snapsToHalfStar=_snapsToHalfStar;
- (void)setRating:(double)arg1 maxRating:(double)arg2;
- (float)_xForFractionalPartOfStars:(float)arg1 inWidth:(float)arg2;
- (struct CGSize)_sizeForStar:(id)arg1 spacing:(float)arg2;
- (float)_starSpacingForStyle:(int)arg1;
- (id)_starMaskForStyle:(int)arg1;
- (id)_cacheKeyForStyle:(int)arg1 numberOfStars:(int)arg2;
- (void)_updateStarsForStyleAndTotalNumber;
- (id)_starMaskLarge;
- (id)_starMaskMedium;
- (id)_starMaskSmall;
- (void).cxx_destruct;
@property(nonatomic) int style; // @synthesize style=_style;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
