//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString;

@interface PRSFeedback : NSObject <NSCopying, NSCoding, NSSecureCoding>
{
    NSString *_input;
    int _timestamp;
}

+ (id)JSONDictionaryForFeedbackArray:(id)arg1 enableFeedbackDebugLogging:(BOOL)arg2;
+ (BOOL)supportsSecureCoding;
- (id)initWithInput:(id)arg1 timestamp:(int)arg2;
- (id)initWithFeedback:(id)arg1;
- (id)plist;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *input; // @synthesize input=_input;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)validate;
@property(readonly, nonatomic) NSString *type;
@property(nonatomic) int timestamp; // @synthesize timestamp=_timestamp;
- (id)description;
- (id)copy;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
