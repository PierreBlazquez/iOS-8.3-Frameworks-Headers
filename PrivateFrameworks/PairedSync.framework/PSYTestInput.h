//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface PSYTestInput : NSObject <NSSecureCoding>
{
    int _action;
}

+ (id)testInputWithAction:(int)arg1;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) int action; // @synthesize action=_action;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
