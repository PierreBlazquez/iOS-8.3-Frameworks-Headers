//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface PKRegion : NSObject <NSCopying, NSCoding>
{
    int _shape;
    _Bool _isExclusive;
    // Error parsing type: {vec4="v"}, name: _halfExtent
    struct shared_ptr<PKCPathHolder> _path;
    int _regionOp;
    int _shape2;
    // Error parsing type: {vec4="v"}, name: _halfExtent2
    struct shared_ptr<PKCPathHolder> _path2;
}

+ (id)infiniteRegion;
- (void).cxx_destruct;
- (id)initWithPath:(struct CGPath *)arg1;
- (id).cxx_construct;
- (id)initWithSize:(struct CGSize)arg1;
- (BOOL)containsPoint:(struct CGPoint)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) struct CGPath *path;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)containsPoints:(const float *)arg1 locationStride:(int)arg2 results:(char *)arg3 resultsStride:(int)arg4 count:(int)arg5;
- (id)regionByIntersectionWithRegion:(id)arg1;
- (id)regionByUnionWithRegion:(id)arg1;
- (id)regionByDifferenceFromRegion:(id)arg1;
- (id)inverseRegion;
- (id)initWithRadius:(float)arg1;

@end

