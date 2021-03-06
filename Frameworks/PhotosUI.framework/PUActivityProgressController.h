//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PUActivityProgressViewController, UIAlertController, UIView;

@interface PUActivityProgressController : NSObject
{
    PUActivityProgressViewController *_progressViewController;
    UIAlertController *_alertController;
    UIView *_containerView;
    UIView *_dimmingView;
    UIView *_progressContainerView;
    double _whenDidShow;
    BOOL _didShow;
    BOOL _didHide;
    NSString *_title;
    CDUnknownBlockType _cancellationHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType cancellationHandler; // @synthesize cancellationHandler=_cancellationHandler;
- (void)setProgress:(double)arg1;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)init;
- (id)_newProgressContainerView;
- (void)hideAnimated:(BOOL)arg1 allowDelay:(BOOL)arg2;
- (void)showAnimated:(BOOL)arg1 allowDelay:(BOOL)arg2;

@end

