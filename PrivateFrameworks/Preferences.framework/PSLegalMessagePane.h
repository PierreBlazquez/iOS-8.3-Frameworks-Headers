//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Preferences/PSEditingPane.h>

#import "UIWebViewDelegate.h"

@class NSString, UIWebView;

@interface PSLegalMessagePane : PSEditingPane <UIWebViewDelegate>
{
    UIWebView *_webView;
}

- (id)htmlFileLocation;
- (id)scrollViewToBeInsetted;
- (BOOL)handlesDoneButton;
- (void)viewDidBecomeVisible;
- (void)layoutInsetContent:(struct CGRect)arg1;
- (BOOL)shouldInsetContent;
- (id)markupString;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

