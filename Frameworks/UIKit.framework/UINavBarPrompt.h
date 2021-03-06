//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel, UINavigationBar;

@interface UINavBarPrompt : UIView
{
    UILabel *_label;
    UINavigationBar *_navBar;
}

- (struct CGSize)_updateLabelTextColorAndFontReturningShadowOffset_legacy;
- (struct CGSize)_updateLabelTextColorAndFontReturningShadowOffset;
- (struct CGRect)_labelFrame;
- (struct CGRect)promptBounds;
- (id)initWithPrompt:(id)arg1 navBar:(id)arg2;
- (void)clearWeakReference:(id)arg1;
- (void)setPrompt:(id)arg1;
- (id)prompt;
- (void)layoutSubviews;
- (void)dealloc;

@end

