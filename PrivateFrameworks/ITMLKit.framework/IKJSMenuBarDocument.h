//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import "IKJSMenuBarDocument.h"

@interface IKJSMenuBarDocument : IKJSObject <IKJSMenuBarDocument>
{
    id <IKJSMenuBarDocumentAppBridge> _appBridge;
}

- (void)setDocument:(id)arg1 forElement:(id)arg2:(id)arg3;
- (id)getDocumentForElement:(id)arg1;
@property(nonatomic) __weak id <IKJSMenuBarDocumentAppBridge> appBridge; // @synthesize appBridge=_appBridge;
- (void).cxx_destruct;

@end

