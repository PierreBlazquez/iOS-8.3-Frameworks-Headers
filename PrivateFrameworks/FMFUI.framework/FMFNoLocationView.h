//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSLayoutConstraint, UIImage, UIImageView, UILabel;

@interface FMFNoLocationView : UIView
{
    BOOL _blockLabelUpdates;
    id <FMFNoLocationViewDelegate> _delegate;
    NSLayoutConstraint *_topInsetConstraint;
    NSLayoutConstraint *_bottomInsetConstraint;
    UIImage *_offlineProfileImage;
    UIImageView *_offlineProfileImageView;
    UIImageView *_personImageView;
    UILabel *_detailsLabel;
    UIView *_blur;
    UIView *_insetView;
}

- (void)updateLabel;
@property(retain, nonatomic) UIView *insetView; // @synthesize insetView=_insetView;
@property(retain, nonatomic) UIImageView *offlineProfileImageView; // @synthesize offlineProfileImageView=_offlineProfileImageView;
@property(retain, nonatomic) NSLayoutConstraint *bottomInsetConstraint; // @synthesize bottomInsetConstraint=_bottomInsetConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topInsetConstraint; // @synthesize topInsetConstraint=_topInsetConstraint;
@property(nonatomic) BOOL blockLabelUpdates; // @synthesize blockLabelUpdates=_blockLabelUpdates;
@property(retain, nonatomic) UIImage *offlineProfileImage; // @synthesize offlineProfileImage=_offlineProfileImage;
@property(retain, nonatomic) UILabel *detailsLabel; // @synthesize detailsLabel=_detailsLabel;
- (void)updateConstriantsForInsets;
- (void)updateLabelNotification:(id)arg1;
- (void)updatePersonImageViewImage;
- (void)addLayoutConstraints;
@property(retain, nonatomic) UIImageView *personImageView; // @synthesize personImageView=_personImageView;
@property(retain, nonatomic) UIView *blur; // @synthesize blur=_blur;
- (void).cxx_destruct;
@property(nonatomic) __weak id <FMFNoLocationViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setAlpha:(float)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
