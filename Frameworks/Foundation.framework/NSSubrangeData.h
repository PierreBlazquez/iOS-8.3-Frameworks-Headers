//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

@interface NSSubrangeData : NSData
{
    unsigned int _reserved:3;
    unsigned int _retainCount:29;
    struct _NSRange _range;
    NSData *_data;
}

- (void)getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (void)getBytes:(void *)arg1 length:(unsigned int)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const void *)bytes;
- (unsigned int)length;
- (id)init;
- (void)dealloc;
- (void)getBytes:(void *)arg1;
- (id)initWithData:(id)arg1 range:(struct _NSRange)arg2;
- (BOOL)_isCompact;

@end
