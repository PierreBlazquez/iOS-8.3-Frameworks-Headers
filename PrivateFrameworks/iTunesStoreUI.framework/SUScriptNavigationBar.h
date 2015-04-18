//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSArray, NSString, SUScriptButton, SUScriptNavigationItem;

@interface SUScriptNavigationBar : SUScriptObject
{
}

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;
@property(retain) SUScriptButton *rightButton;
@property(retain) SUScriptButton *leftButton;
@property(readonly) int barStyleDefault;
@property(readonly) int barStyleBlack;
@property(copy) id translucent;
@property(readonly) SUScriptNavigationItem *topNavigationItem;
- (void)setTopNavigationItem:(id)arg1;
@property(retain) id <SUScriptNavigationItem> rightItem;
@property(retain) id <SUScriptNavigationItem> leftItem;
- (void)setBackNavigationItem:(id)arg1;
@property(readonly) SUScriptNavigationItem *backNavigationItem;
- (id)buttonWithTitle:(id)arg1 style:(id)arg2 target:(id)arg3 action:(id)arg4;
- (id)_copyTopNavigationItem;
- (void)setRightItem:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftItem:(id)arg1 animated:(BOOL)arg2;
- (id)_topNavigationItem;
- (void)tearDownUserInterface;
- (id)_nativeNavigationBar;
- (id)initWithNativeNavigationBar:(id)arg1;
- (void)setRightButton:(id)arg1 animated:(BOOL)arg2;
- (void)setLeftButton:(id)arg1 animated:(BOOL)arg2;
- (id)attributeKeys;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)setNavigationItems:(id)arg1;
@property int barStyle;
@property(readonly) NSArray *navigationItems;
@property(retain) NSString *prompt;
- (id)init;

@end
