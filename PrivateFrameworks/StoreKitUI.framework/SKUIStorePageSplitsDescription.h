//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SKUIStorePageSplit;

@interface SKUIStorePageSplitsDescription : NSObject <NSCopying>
{
    SKUIStorePageSplit *_bottomSplit;
    SKUIStorePageSplit *_leftSplit;
    SKUIStorePageSplit *_rightSplit;
    SKUIStorePageSplit *_topSplit;
}

@property(copy, nonatomic) SKUIStorePageSplit *topSplit; // @synthesize topSplit=_topSplit;
@property(copy, nonatomic) SKUIStorePageSplit *bottomSplit; // @synthesize bottomSplit=_bottomSplit;
@property(copy, nonatomic) SKUIStorePageSplit *rightSplit; // @synthesize rightSplit=_rightSplit;
@property(copy, nonatomic) SKUIStorePageSplit *leftSplit; // @synthesize leftSplit=_leftSplit;
@property(readonly, nonatomic) SKUIStorePageSplit *firstSplit;
- (void)sizeSplitsToFitWidth:(float)arg1 usingBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) int numberOfSplits;
- (void)enumerateSplitsUsingBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end
