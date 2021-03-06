//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSDictionary, NSString;

@interface SKTextureAtlas : NSObject <NSCoding>
{
    NSDictionary *_textureDict;
    NSString *_atlasName;
}

+ (id)atlasWithDictionary:(id)arg1;
+ (id)getSupportedPostfixes;
+ (void)preloadTextureAtlases:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (BOOL)canUseObjectForAtlas:(id)arg1;
+ (id)atlasNamed:(id)arg1;
+ (id)findTextureNamed:(id)arg1;
- (void)unload;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) NSArray *textureNames;
- (id)findTextureNamedFromAtlas:(id)arg1;
- (void)parseAtlasPropertyList:(id)arg1 withPath:(id)arg2;
- (void)loadTextures;
- (void)preload;
- (void)preloadWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)_copyImageData;
- (id)textureNamed:(id)arg1;

@end

