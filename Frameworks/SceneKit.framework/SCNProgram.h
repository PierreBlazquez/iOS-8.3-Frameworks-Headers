//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSMutableDictionary, NSString;

@interface SCNProgram : NSObject <NSCopying, NSSecureCoding>
{
    id _reserved;
    NSString *_vertexShader;
    NSString *_fragmentShader;
    NSString *_name;
    id _delegate;
    NSMutableDictionary *_semanticInfos;
    BOOL _opaque;
}

+ (BOOL)supportsSecureCoding;
+ (id)program;
+ (id)SCNJSExportProtocol;
@property(nonatomic, getter=isOpaque) BOOL opaque;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)name;
- (void)setName:(id)arg1;
@property(nonatomic) id <SCNProgramDelegate> delegate;
- (id)copy;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)setSemantic:(id)arg1 forSymbol:(id)arg2;
- (id)_allSymbolsWithSceneKitSemantic;
- (id)_optionsForSymbol:(id)arg1;
- (void)_customDecodingOfSCNProgram:(id)arg1;
- (void)_customEncodingOfSCNProgram:(id)arg1;
- (id)semanticForSymbol:(id)arg1;
- (void)setSemantic:(id)arg1 forSymbol:(id)arg2 options:(id)arg3;
- (void)setSemanticInfos:(id)arg1;
@property(copy, nonatomic) NSString *fragmentShader;
@property(copy, nonatomic) NSString *vertexShader;

@end

