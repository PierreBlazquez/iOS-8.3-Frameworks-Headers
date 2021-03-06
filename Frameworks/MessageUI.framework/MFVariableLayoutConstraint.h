//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MFVariableLayoutConstraint : NSObject
{
    BOOL _cachedInterpolatedValueIsValid;
    float _cachedInterpolatedValue;
    float _medianValue;
    CDUnknownBlockType _interpolationFormula;
}

+ (int)_medianContentSizeIndex;
+ (id)medianContentSizeCategory;
- (void)dealloc;
- (float)interpolatedValue;
- (id)initWithMedianConstraintValue:(float)arg1 interpolationFormula:(CDUnknownBlockType)arg2;
@property(nonatomic) CDUnknownBlockType interpolationFormula; // @synthesize interpolationFormula=_interpolationFormula;
@property(nonatomic) float medianValue; // @synthesize medianValue=_medianValue;
- (void)_didReceiveContentSizeCategoryNameDidChageNotification:(id)arg1;

@end

