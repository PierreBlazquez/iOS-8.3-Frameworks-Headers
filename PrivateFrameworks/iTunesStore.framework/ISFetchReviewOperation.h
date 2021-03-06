//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class ISReview, NSURL;

@interface ISFetchReviewOperation : ISOperation
{
    int _assetType;
    BOOL _backgroundReview;
    unsigned long long _itemIdentifier;
    unsigned int _softwareVersionIdentifier;
    ISReview *_review;
    NSURL *_url;
}

@property unsigned int softwareVersionIdentifier; // @synthesize softwareVersionIdentifier=_softwareVersionIdentifier;
- (void)_fetchReviewInformation;
@property(getter=isBackgroundReview) BOOL backgroundReview; // @synthesize backgroundReview=_backgroundReview;
@property int assetType; // @synthesize assetType=_assetType;
@property unsigned long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(retain) ISReview *review; // @synthesize review=_review;
- (void)run;
@property(retain) NSURL *url; // @synthesize url=_url;
- (void)dealloc;

@end

