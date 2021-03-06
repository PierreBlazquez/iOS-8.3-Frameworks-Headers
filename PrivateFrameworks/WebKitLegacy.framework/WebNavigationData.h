//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WebNavigationDataPrivate;

@interface WebNavigationData : NSObject
{
    WebNavigationDataPrivate *_private;
}

- (id)clientRedirectSource;
- (BOOL)hasSubstituteData;
- (id)initWithURLString:(id)arg1 title:(id)arg2 originalRequest:(id)arg3 response:(id)arg4 hasSubstituteData:(BOOL)arg5 clientRedirectSource:(id)arg6;
- (id)originalRequest;
- (id)response;
- (id)title;
- (id)url;
- (void)dealloc;

@end

