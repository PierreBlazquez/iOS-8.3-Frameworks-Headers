//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface EDProtection : NSObject <NSCopying>
{
    _Bool mHidden;
    _Bool mLocked;
}

+ (id)protectionWithHidden:(_Bool)arg1 locked:(_Bool)arg2;
- (BOOL)isEqualToProtection:(id)arg1;
- (id)initWithHidden:(_Bool)arg1 locked:(_Bool)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isLocked;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (_Bool)isHidden;

@end
