//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WKObject.h"

@class NSString;

@interface WKWebProcessPlugInNodeHandle : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::InjectedBundleNodeHandle> _nodeHandle;
}

+ (id)nodeHandleWithJSValue:(id)arg1 inContext:(id)arg2;
@property(readonly) struct InjectedBundleNodeHandle *_nodeHandle;
@property(readonly, nonatomic) WKWebProcessPlugInNodeHandle *HTMLTableCellElementCellAbove;
- (BOOL)isTextField;
@property(readonly, nonatomic) BOOL HTMLTextAreaElementIsUserEdited;
@property(readonly, nonatomic) BOOL HTMLInputElementIsUserEdited;
@property(nonatomic) BOOL HTMLInputElementIsAutoFilled;
@property(readonly, nonatomic) struct CGRect elementBounds;
- (id)htmlIFrameElementContentFrame;
@property(readonly) struct Object *_apiObject;
- (id).cxx_construct;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

