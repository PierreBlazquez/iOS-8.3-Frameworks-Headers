//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class AVPlayerItemErrorLogEventInternal, NSDate, NSString;

@interface AVPlayerItemErrorLogEvent : NSObject <NSCopying>
{
    AVPlayerItemErrorLogEventInternal *_playerItemErrorLogEvent;
}

- (void)finalize;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSDate *date;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (void)dealloc;
@property(readonly, nonatomic) NSString *errorComment;
@property(readonly, nonatomic) NSString *errorDomain;
@property(readonly, nonatomic) int errorStatusCode;
@property(readonly, nonatomic) NSString *playbackSessionID;
@property(readonly, nonatomic) NSString *serverAddress;
@property(readonly, nonatomic) NSString *URI;

@end
