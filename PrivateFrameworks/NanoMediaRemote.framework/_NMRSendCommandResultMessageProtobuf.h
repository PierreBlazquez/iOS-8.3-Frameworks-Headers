//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface _NMRSendCommandResultMessageProtobuf : PBCodable <NSCopying>
{
    struct {
        unsigned int *list;
        unsigned int count;
        unsigned int size;
    } _handlerReturnStatus;
    double _timestamp;
    unsigned int _errorCode;
    struct {
        unsigned int timestamp:1;
        unsigned int errorCode:1;
    } _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setHandlerReturnStatus:(unsigned int *)arg1 count:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned int *handlerReturnStatus;
- (void)clearHandlerReturnStatus;
- (unsigned int)handlerReturnStatusAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int handlerReturnStatusCount;
- (void)addHandlerReturnStatus:(unsigned int)arg1;
@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) BOOL hasErrorCode;
@property(nonatomic) BOOL hasTimestamp;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end
