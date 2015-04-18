//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface UIKeyboardEmojiSplitCategoryCell : UITableViewCell
{
    UIImageView *_symbol;
    UILabel *_title;
    UIView *_selectedCircle;
}

@property(retain, nonatomic) UIView *selectedCircle; // @synthesize selectedCircle=_selectedCircle;
@property(retain, nonatomic) UIImageView *symbol; // @synthesize symbol=_symbol;
- (id)symbolFont;
- (id)titleFont;
- (void)setSelectedCircleBlendMode:(BOOL)arg1;
- (void)setTitleText:(id)arg1;
- (void)setPressIndicatorHidden:(BOOL)arg1;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
