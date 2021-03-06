//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@class UIViewController;

@interface _UIRotatingAlertController : UIAlertController
{
    id <_UIRotatingAlertControllerDelegate> _rotatingSheetDelegate;
    unsigned int _arrowDirections;
    BOOL _isRotating;
    BOOL _readyToPresentAfterRotation;
    UIViewController *_presentedViewControllerWhileRotating;
    id <UIPopoverPresentationControllerDelegate> _popoverPresentationControllerDelegateWhileRotating;
}

@property(nonatomic) unsigned int arrowDirections; // @synthesize arrowDirections=_arrowDirections;
@property(nonatomic) id <_UIRotatingAlertControllerDelegate> rotatingSheetDelegate; // @synthesize rotatingSheetDelegate=_rotatingSheetDelegate;
- (void)_updateSheetPositionAfterRotation;
- (void)_didRotateAndLayout;
- (BOOL)presentSheetFromRect:(struct CGRect)arg1;
- (BOOL)presentSheet;
- (void)doneWithSheet;
- (void)didRotate;
- (void)willRotate;
- (id)init;
- (void)dealloc;

@end

