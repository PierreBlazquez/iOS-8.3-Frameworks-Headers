//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SpriteKit/SKAction.h>

@interface SKFalloff : SKAction
{
    struct SKCFalloff *_mycaction;
}

+ (id)falloffBy:(float)arg1 duration:(double)arg2;
+ (id)falloffTo:(float)arg1 duration:(double)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
