//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface SKShader : NSObject <NSCopying, NSCoding>
{
    _Bool _builtInUniformsDirty;
    _Bool _programIsDirty;
    double _prevUniformUpdateTime;
    NSMutableArray *_uniforms;
    NSMutableDictionary *_uniformData;
    NSString *_source;
    struct xglProgram *_xglProgram;
}

+ (id)shaderWithFileNamed:(id)arg1;
+ (id)shaderWithSource:(id)arg1;
+ (id)shaderWithSource:(id)arg1 uniforms:(id)arg2;
+ (id)shader;
- (id)initWithSource:(id)arg1;
- (void).cxx_destruct;
@property(copy) NSString *source;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isValid;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_getShaderCompilationLog;
@property struct xglProgram *_xglProgram;
@property(readonly) NSArray *_textureUniforms;
- (struct xglProgram *)_syncUniformsForTime:(double)arg1;
- (void)removeUniformNamed:(id)arg1;
- (id)uniformNamed:(id)arg1;
- (void)addUniform:(id)arg1;
@property(copy) NSArray *uniforms;
- (struct xglProgram *)_updateUniforms;
- (void)_createProgram;
- (id)initWithSource:(id)arg1 uniforms:(id)arg2;

@end

