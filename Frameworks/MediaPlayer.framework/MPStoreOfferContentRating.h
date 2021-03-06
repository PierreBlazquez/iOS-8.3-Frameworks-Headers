//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDictionary, NSString;

@interface MPStoreOfferContentRating : NSObject <NSCoding>
{
    NSDictionary *_dictionary;
    int _ratingLevel;
    NSString *_ratingDescription;
    NSString *_ratingLabel;
    unsigned int _ratingSystem;
}

+ (BOOL)supportsSecureCoding;
+ (unsigned int)ratingSystemFromString:(id)arg1;
@property(nonatomic) unsigned int ratingSystem; // @synthesize ratingSystem=_ratingSystem;
@property(copy, nonatomic) NSString *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
@property(copy, nonatomic) NSString *ratingDescription; // @synthesize ratingDescription=_ratingDescription;
- (id)valueForProperty:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) int ratingLevel; // @synthesize ratingLevel=_ratingLevel;
- (BOOL)_isRatingSystemForMusic:(unsigned int)arg1;
- (BOOL)_isRatingSystemForTV:(unsigned int)arg1;
- (BOOL)_isRatingSystemForMovies:(unsigned int)arg1;
- (BOOL)_isRatingSystemForApps:(unsigned int)arg1;
@property(readonly, nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property(readonly, nonatomic) id mediaPropertyContentRatingValue;
@property(readonly, nonatomic, getter=isRestrictedContent) BOOL restrictedContent;
@property(readonly, nonatomic, getter=isRestrictedPurchase) BOOL restrictedPurchase;

@end

