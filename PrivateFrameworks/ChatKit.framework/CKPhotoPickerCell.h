//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class PLRoundProgressView, UIImageView;

@interface CKPhotoPickerCell : UICollectionViewCell
{
    BOOL _isVideo;
    UIImageView *_imageView;
    PLRoundProgressView *_progressView;
    UIImageView *_videoImageView;
}

@property(nonatomic) BOOL isVideo; // @synthesize isVideo=_isVideo;
@property(retain, nonatomic) UIImageView *videoImageView; // @synthesize videoImageView=_videoImageView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)updateProgress:(double)arg1;
@property(retain, nonatomic) PLRoundProgressView *progressView; // @synthesize progressView=_progressView;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

