//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DOMElement, NSString, UIImage, UIWebView;

@interface SUDOMElement : NSObject
{
    DOMElement *_element;
    UIImage *_image;
    UIWebView *_webView;
}

+ (struct CGRect)frameForDOMElement:(id)arg1;
@property(readonly, nonatomic) DOMElement *element; // @synthesize element=_element;
- (void)setProperty:(id)arg1 value:(id)arg2;
- (id)initWithDOMElement:(id)arg1;
@property(readonly, nonatomic) UIImage *imageRepresentation;
- (id)newImageView;
- (id)newLabelForElementWithText:(id)arg1;
- (struct CGRect)_frame;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(readonly, nonatomic) NSString *innerText;
@property(readonly, nonatomic) struct CGRect frame;
- (void)dealloc;

@end

