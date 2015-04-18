//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "WKObject.h"

@class NSString;

@interface _WKFrameHandle : NSObject <WKObject, NSCopying, NSSecureCoding>
{
    struct ObjectStorage<API::FrameHandle> _frameHandle;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long _frameID;
@property(readonly) struct Object *_apiObject;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
