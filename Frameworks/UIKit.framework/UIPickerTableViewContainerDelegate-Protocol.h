//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class UIPickerTableView, UITableView;

@protocol UIPickerTableViewContainerDelegate
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (BOOL)_usesCheckSelection;
- (BOOL)_soundsEnabled;
- (void)_sendCheckedRow:(int)arg1 inTableView:(UITableView *)arg2 checked:(BOOL)arg3;

@optional
- (void)pickerTableView:(UIPickerTableView *)arg1 didChangeSelectionBarRowFrom:(int)arg2 to:(int)arg3;
- (void)_pickerTableViewDidChangeContentOffset:(UIPickerTableView *)arg1;
@end
