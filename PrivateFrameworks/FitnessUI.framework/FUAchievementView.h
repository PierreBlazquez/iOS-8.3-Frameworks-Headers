//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class HKAchievement, UIImageView;

@interface FUAchievementView : UIView
{
    UIImageView *_iconView;
    HKAchievement *_achievement;
    int _sizeClass;
}

@property(retain, nonatomic) HKAchievement *achievement; // @synthesize achievement=_achievement;
@property(nonatomic) int sizeClass; // @synthesize sizeClass=_sizeClass;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
