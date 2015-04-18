//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIDatePicker;

@interface ABDatePickerViewController : UIViewController
{
    void *_context;
    UIDatePicker *_datePicker;
    id <ABDatePickerViewControllerDismissDelegate> _dismissDelegate;
}

+ (struct CGSize)datePickerSize;
@property(nonatomic) id <ABDatePickerViewControllerDismissDelegate> dismissDelegate; // @synthesize dismissDelegate=_dismissDelegate;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
@property(nonatomic) void *context; // @synthesize context=_context;
- (void)dealloc;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (float)ab_heightToFitForViewInPopoverView;

@end
