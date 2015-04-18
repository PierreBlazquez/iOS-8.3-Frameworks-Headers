//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIView;

@interface UIBookViewController : UIViewController
{
    id <UIBookViewControllerDelegate> _delegate;
    UIView *_contentView;
    UIViewController *_evenPage;
    UIViewController *_oddPage;
    UIViewController *_newEvenPage;
    UIViewController *_newOddPage;
    int _turnCount;
    int _animatedPageTurns;
    float _turnMargin;
    struct UIEdgeInsets _contentInset;
    double _turnDuration;
}

- (void)_startCurlAnimation;
- (void)_setupCurlFilters;
@property(nonatomic) double turnDuration; // @synthesize turnDuration=_turnDuration;
@property(nonatomic) float turnMargin; // @synthesize turnMargin=_turnMargin;
@property(retain, nonatomic) UIViewController *evenPage; // @synthesize evenPage=_evenPage;
@property(retain, nonatomic) UIViewController *oddPage; // @synthesize oddPage=_oddPage;
- (void)turnPages:(int)arg1 animated:(BOOL)arg2;
- (void)_turnAllPagesNonAnimated;
- (void)_turnSinglePageAnimated;
- (void)_positionPage:(id)arg1 isLeft:(BOOL)arg2;
- (void)_setNewPage:(id)arg1 isLeft:(BOOL)arg2;
- (void)_setupContentViewIfNecessary;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)view;
@property(nonatomic) id <UIBookViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end
