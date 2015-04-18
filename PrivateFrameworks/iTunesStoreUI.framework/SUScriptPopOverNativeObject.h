//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptNativeObject.h>

@class SUDOMElement, UIBarButtonItem;

@interface SUScriptPopOverNativeObject : SUScriptNativeObject
{
    BOOL _redisplayAfterRotation;
    UIBarButtonItem *_sourceButtonItem;
    SUDOMElement *_sourceDOMElement;
}

@property(retain, nonatomic) UIBarButtonItem *sourceButtonItem; // @synthesize sourceButtonItem=_sourceButtonItem;
- (BOOL)_isAffectedByWindowNotification:(id)arg1;
@property(retain, nonatomic) SUDOMElement *sourceDOMElement; // @synthesize sourceDOMElement=_sourceDOMElement;
- (void)setupNativeObject;
- (void)_windowWillRotateNotification:(id)arg1;
- (void)_windowDidRotateNotification:(id)arg1;
- (void)destroyNativeObject;
- (void)dealloc;

@end
