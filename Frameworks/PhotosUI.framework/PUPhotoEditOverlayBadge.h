//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface PUPhotoEditOverlayBadge : UIView
{
    NSString *_text;
    UILabel *_label;
    struct UIEdgeInsets _insets;
}

@property(readonly, nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)_updateLabel;
- (struct CGSize)intrinsicContentSize;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)initWithFrame:(struct CGRect)arg1;

@end

