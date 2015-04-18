//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CHDDataValuesCollection : NSObject
{
    struct __CFData *mPackedValues;
    unsigned int mDataValueCount;
    struct __CFDictionary *mIndexToDataValueMap;
    _Bool mContainsStringValue;
}

- (_Bool)containsStringValue;
- (id)dataValueWithIndex:(unsigned int)arg1;
- (id)contentFormatAtIndex:(unsigned int)arg1 resources:(id)arg2;
- (_Bool)addDataValue:(id)arg1;
- (void)resetWithDataPointCount:(unsigned int)arg1;
- (struct CHDDataPoint *)dataPointWithIndex:(unsigned int)arg1;
- (void)setupBufferForValues:(unsigned int)arg1;
- (struct CHDDataPoint *)dataPointAtIndex:(unsigned int)arg1;
- (id)initWithDataPointCount:(unsigned int)arg1;
- (void)finishReading;
- (_Bool)addDataPoint:(struct CHDDataPoint *)arg1;
- (id)dataValueAtIndex:(unsigned int)arg1;
- (void)cleanup;
- (id)init;
- (unsigned int)count;
- (void)dealloc;

@end
