//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SceneKit/SCNGeometry.h>

@interface SCNTube : SCNGeometry
{
    id _reserved;
    float _tubeinnerRadius;
    float _tubeouterRadius;
    float _tubeheight;
    float _tuberadialSpan;
    int _tubeheightSegmentCount;
    int _tuberadialSegmentCount;
    int _tubeprimitiveType;
}

+ (BOOL)supportsSecureCoding;
+ (id)tubeWithInnerRadius:(float)arg1 outerRadius:(float)arg2 height:(float)arg3;
+ (id)SCNJSExportProtocol;
- (int)primitiveType;
@property(nonatomic) float height;
@property(nonatomic) float innerRadius;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)copy;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(nonatomic) float outerRadius;
- (id)presentationTube;
@property(nonatomic) int radialSegmentCount;
- (void)setRadialSpan:(float)arg1;
- (float)radialSpan;
- (id)initWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;
@property(nonatomic) int heightSegmentCount;
- (id)initPresentationParametricGeometryWithParametricGeometryRef:(struct __C3DParametricGeometry *)arg1;
- (void)_syncObjCModel:(struct __C3DParametricGeometry *)arg1;
- (void)setPrimitiveType:(int)arg1;
- (void)_setupObjCModelFrom:(id)arg1;
- (struct __C3DGeometry *)__createCFObject;
- (BOOL)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(float *)arg2;
- (BOOL)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
- (id)presentationGeometry;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1;

@end

