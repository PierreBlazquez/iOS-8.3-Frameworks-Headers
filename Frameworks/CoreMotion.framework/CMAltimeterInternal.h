//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

@interface CMAltimeterInternal : NSObject
{
    struct Dispatcher *fFilteredPressureDispatcher;
    CDUnknownBlockType fRelativeAltimeterHandler;
    NSOperationQueue *fRelativeAltimeterQueue;
    Sample_068dee23 fBaseAltimeterSample;
    float fBarometricBaseAltitude;
    _Bool fBaselineReceived;
    struct deque<float, std::__1::allocator<float>> fPressureSamples;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init;
- (void)dealloc;

@end

