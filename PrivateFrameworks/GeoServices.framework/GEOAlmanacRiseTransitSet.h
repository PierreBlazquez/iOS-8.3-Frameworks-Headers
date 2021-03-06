//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface GEOAlmanacRiseTransitSet : NSObject
{
    double _julianDay;
    struct CAARiseTransitSetDetails _riseTransitSet;
    NSDate *_sunrise;
    NSDate *_transit;
    NSDate *_sunset;
}

@property(readonly, nonatomic) struct CAARiseTransitSetDetails riseTransitSet; // @synthesize riseTransitSet=_riseTransitSet;
@property(readonly, nonatomic) double julianDay; // @synthesize julianDay=_julianDay;
@property(readonly, nonatomic) NSDate *sunset;
@property(readonly, nonatomic) NSDate *sunrise;
- (id)initWithJulianDay:(double)arg1 riseTransitSet:(struct CAARiseTransitSetDetails)arg2;
- (id)_dateFromOffset:(double)arg1 ofJulianDay:(double)arg2;
@property(readonly, nonatomic) NSDate *transit;
- (id).cxx_construct;
- (void)dealloc;

@end

