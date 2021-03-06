//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, NSURL, SKUIImageViewElementCacheKey;

@interface SKUIImageViewElement : SKUIViewElement
{
    NSString *_alt;
    BOOL _enabled;
    SKUIImageViewElementCacheKey *_resourceCacheKey;
    NSString *_resourceName;
    struct CGSize _size;
    SKUIImageViewElementCacheKey *_transientResourceCacheKey;
    NSURL *_url;
}

@property(readonly, nonatomic) id transientResourceCacheKey; // @synthesize transientResourceCacheKey=_transientResourceCacheKey;
- (BOOL)rendersWithPerspective;
@property(readonly, nonatomic) id resourceCacheKey;
- (id)accessibilityText;
- (int)pageComponentType;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
@property(readonly, nonatomic) NSString *resourceName; // @synthesize resourceName=_resourceName;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_url;
- (BOOL)isEnabled;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;

@end

