//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SiriUI/SiriUIClearBackgroundCell.h>

@class SiriUIKeyline, UIImageView, UILabel, UIView;

@interface SiriUIContentCollectionViewCell : SiriUIClearBackgroundCell
{
    SiriUIKeyline *_keyline;
    UIImageView *_chevronView;
    BOOL _hasChevron;
    int _verticalAlignment;
    UIView *_accessoryView;
    UILabel *_textLabel;
    int _keylineType;
    struct UIOffset _textOffset;
    struct UIOffset _accessoryOffset;
    struct UIEdgeInsets _textAndAccessoryInsets;
}

+ (id)reuseIdentifier;
@property(nonatomic) int verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) BOOL hasChevron; // @synthesize hasChevron=_hasChevron;
@property(nonatomic) int keylineType; // @synthesize keylineType=_keylineType;
@property(readonly, nonatomic) SiriUIKeyline *keyline; // @synthesize keyline=_keyline;
@property(nonatomic) struct UIOffset accessoryOffset; // @synthesize accessoryOffset=_accessoryOffset;
@property(nonatomic) struct UIEdgeInsets textAndAccessoryInsets; // @synthesize textAndAccessoryInsets=_textAndAccessoryInsets;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
@property(nonatomic) struct UIOffset textOffset; // @synthesize textOffset=_textOffset;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
