//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EDCollection;

@interface EDPivotItem : NSObject
{
    unsigned int mRepeatedItemCounts;
    int mType;
    EDCollection *mItemIndexes;
}

+ (id)pivotItem;
- (id)itemIndexes;
- (void)setRepeatedItemCounts:(unsigned int)arg1;
- (unsigned int)repeatedItemCounts;
- (int)type;
- (void)setType:(int)arg1;
- (id)init;
- (void)dealloc;

@end

