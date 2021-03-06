//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIScreen, _UIReplicantContentView, _UISlotIdWrapper;

@interface _UIReplicantView : UIView
{
    _UISlotIdWrapper *_slotIdWrapper;
    UIScreen *_screen;
    struct CGSize _snapshotSize;
    _UIReplicantContentView *_contentView;
}

+ (id)snapshotWithScreen:(id)arg1 defer:(BOOL)arg2;
+ (id)snapshotWindows:(id)arg1 withRect:(struct CGRect)arg2;
+ (id)snapshotContext;
+ (id)_pendingSnapshotOfTarget:(id)arg1 snapshotBlock:(CDUnknownBlockType)arg2;
+ (id)snapshotWithView:(id)arg1 fromRect:(struct CGRect)arg2 capInsets:(struct UIEdgeInsets)arg3 defer:(BOOL)arg4;
+ (Class)layerClass;
- (struct CGAffineTransform)_appliedTransform;
- (id)_copyResizableSnapshotViewFromRect:(struct CGRect)arg1 withCapInsets:(struct UIEdgeInsets)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

