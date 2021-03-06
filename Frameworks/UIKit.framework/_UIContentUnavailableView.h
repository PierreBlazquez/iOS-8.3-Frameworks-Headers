//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSMutableArray, NSString, UIButton, UILabel, _UIBackdropView;

@interface _UIContentUnavailableView : UIView
{
    unsigned int _style;
    NSString *_title;
    _UIBackdropView *_backdrop;
    UIView *_containerView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIButton *_actionButton;
    NSLayoutConstraint *titleToMessageConstraint;
    NSLayoutConstraint *messageToButtonConstraint;
    UIView *_fromSnapshot;
    UIView *_toSnapshot;
    struct CGSize _fromSnapshotSize;
    NSMutableArray *_containerViewContraints;
    NSString *_message;
    NSString *_buttonTitle;
    CDUnknownBlockType _buttonAction;
    unsigned int _vibrantOptions;
}

@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(nonatomic) unsigned int vibrantOptions; // @synthesize vibrantOptions=_vibrantOptions;
- (void)windowDidRotateNotification:(id)arg1;
- (void)windowWillAnimateRotateNotification:(id)arg1;
- (void)windowWillRotateNotification:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType buttonAction; // @synthesize buttonAction=_buttonAction;
- (id)_buttonBackgroundImageForStyle:(unsigned int)arg1 controlState:(unsigned int)arg2;
- (void)_actionButtonPressed:(id)arg1;
- (float)_labelAlpha;
- (id)_flatTextColor;
- (id)_vibrantBaseColor;
- (BOOL)_hasVibrantText;
- (void)_updateViewHierarchy;
- (BOOL)_hasVibrantButton;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 style:(unsigned int)arg3 includeBackdrop:(BOOL)arg4;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 style:(unsigned int)arg3;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void)updateConstraints;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

