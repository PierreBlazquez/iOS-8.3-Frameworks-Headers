//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableArray, OITSUProgressContext, TCProgressStage;

@interface TCProgressContext : NSObject
{
    OITSUProgressContext *m_parentProgressContext;
    TCProgressStage *m_currentStage;
    NSDate *m_lastReportTime;
    NSMutableArray *m_stackOfBranches;
}

+ (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3;
+ (void)advanceProgressInContext:(id)arg1 progress:(double)arg2;
+ (void)popBranch;
+ (void)pushBranch:(id)arg1;
+ (void)endBranch:(id)arg1;
+ (id)createBranchWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3;
+ (void)createContextForCurrentThreadWithParentContext:(id)arg1;
+ (id)stageForCurrentThread;
+ (id)contextForCurrentThread;
+ (void)removeContextForCurrentThread;
+ (void)addProgressObserver:(id)arg1 selector:(SEL)arg2;
+ (void)removeProgressObserver:(id)arg1;
+ (void)endStage;
+ (double)currentPosition;
+ (void)advanceProgress:(double)arg1;
+ (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2;
+ (void)setMessage:(id)arg1;
+ (void)setProgress:(double)arg1;
- (void)reportProgress:(double)arg1;
- (id)rootStage;
- (id)initWithParentContext:(id)arg1;
- (id)currentStage;
- (void)dealloc;

@end
