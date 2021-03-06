//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKeyboardEmojiSplit.h>

#import "UIKeyboardEmojiCategoryControl.h"

@class NSString, UIColor, UIKeyboardEmojiCategoryController;

@interface UIKeyboardEmojiSplitCategoryPicker : UIKeyboardEmojiSplit <UIKeyboardEmojiCategoryControl>
{
    UIKeyboardEmojiCategoryController *_categoryController;
    BOOL _whiteText;
    UIColor *_pressIndicatorColor;
    int _currentSelected;
    int _lastUsedCategory;
}

@property BOOL whiteText; // @synthesize whiteText=_whiteText;
- (id)symbolForRow:(int)arg1;
- (id)titleForRow:(int)arg1;
- (void)updateCategorySelectedIndicator:(int)arg1;
- (void)receiveNotifictaion:(id)arg1;
- (void)setRenderConfig:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;
- (void)setCategory:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)didMoveToWindow;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

