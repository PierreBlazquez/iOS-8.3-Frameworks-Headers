//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SiriUIKeyline, UIButton;

@interface SiriUIObjectPickerButtonView : UIView
{
    SiriUIKeyline *_topKeyline;
    SiriUIKeyline *_bottomKeyline;
    BOOL _showsTopKeyline;
    UIButton *_button;
}

+ (float)defaultHeight;
@property(nonatomic) BOOL showsTopKeyline; // @synthesize showsTopKeyline=_showsTopKeyline;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UIButton *button; // @synthesize button=_button;

@end
