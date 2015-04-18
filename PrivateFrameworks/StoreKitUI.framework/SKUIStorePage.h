//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSData, NSHTTPURLResponse, NSMutableDictionary, NSString, NSURL, SKUIArtwork, SKUIProductPage, SKUIUber, SSMetricsConfiguration;

@interface SKUIStorePage : NSObject <NSCopying>
{
    SKUIArtwork *_backgroundArtwork;
    NSData *_itmlData;
    NSHTTPURLResponse *_itmlResponse;
    SSMetricsConfiguration *_metricsConfiguration;
    NSString *_metricsPageDescription;
    NSArray *_pageComponents;
    NSString *_pageType;
    NSURL *_pageURL;
    SKUIProductPage *_productPage;
    NSString *_title;
    SKUIUber *_uber;
    NSMutableDictionary *_values;
}

@property(retain, nonatomic) SKUIUber *uber; // @synthesize uber=_uber;
@property(copy, nonatomic) SKUIProductPage *productPage; // @synthesize productPage=_productPage;
@property(copy, nonatomic) NSString *pageType; // @synthesize pageType=_pageType;
@property(copy, nonatomic) NSArray *pageComponents; // @synthesize pageComponents=_pageComponents;
@property(copy, nonatomic) NSString *metricsPageDescription; // @synthesize metricsPageDescription=_metricsPageDescription;
@property(retain, nonatomic) SSMetricsConfiguration *metricsConfiguration; // @synthesize metricsConfiguration=_metricsConfiguration;
@property(retain, nonatomic) NSHTTPURLResponse *ITMLResponse; // @synthesize ITMLResponse=_itmlResponse;
@property(retain, nonatomic) NSData *ITMLData; // @synthesize ITMLData=_itmlData;
@property(retain, nonatomic) SKUIArtwork *backgroundArtwork; // @synthesize backgroundArtwork=_backgroundArtwork;
- (id)valueForPageKey:(id)arg1;
- (void)setValue:(id)arg1 forPageKey:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *pageURL; // @synthesize pageURL=_pageURL;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end
