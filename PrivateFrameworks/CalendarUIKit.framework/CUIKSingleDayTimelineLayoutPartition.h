//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface CUIKSingleDayTimelineLayoutPartition : NSObject
{
    NSMutableArray *_stackOfOccurrences;
    float _initialLeftBoundary;
    float _rightBoundary;
    double _topBoundaryTime;
}

@property(nonatomic) float initialLeftBoundary; // @synthesize initialLeftBoundary=_initialLeftBoundary;
@property(readonly, nonatomic) float freeSpaceLeftBoundary;
@property(readonly, nonatomic) float freeSpaceWidth;
@property(nonatomic) float rightBoundary; // @synthesize rightBoundary=_rightBoundary;
@property(nonatomic) double topBoundaryTime; // @synthesize topBoundaryTime=_topBoundaryTime;
@property(readonly, nonatomic) NSArray *stackedOccurrences;
- (void)pushOccurrence:(id)arg1;
- (void)popOccurrence;
- (id)peekOccurrence;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
