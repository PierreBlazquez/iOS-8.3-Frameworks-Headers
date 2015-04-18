//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableData.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@interface MFMutableData : NSMutableData <NSCopying, NSMutableCopying>
{
    void *_bytes;
    unsigned int _length;
    unsigned int _mappedLength;
    unsigned int _capacity;
    unsigned int _threshold;
    char *_path;
    int _fd;
    unsigned int _flushFrom;
    BOOL _flush;
    BOOL _immutable;
    BOOL _vm;
}

- (id)initWithLength:(unsigned int)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned int)arg2;
- (void)mf_makeImmutable;
- (void)setMappingThreshold:(unsigned int)arg1;
- (id)_initWithFd:(int)arg1 path:(id)arg2 mutable:(BOOL)arg3;
- (void)_flushToDisk:(unsigned int)arg1 capacity:(unsigned int)arg2;
- (void)_mapMutableData:(BOOL)arg1;
- (BOOL)mf_immutable;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (void *)mutableBytes;
- (id)initWithContentsOfURL:(id)arg1;
- (void)appendData:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithContentsOfFile:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithBytesNoCopy:(void *)arg1 length:(unsigned int)arg2 freeWhenDone:(BOOL)arg3;
- (id)initWithBytes:(const void *)arg1 length:(unsigned int)arg2;
- (void)setLength:(unsigned int)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (void)appendBytes:(const void *)arg1 length:(unsigned int)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const void *)bytes;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithCapacity:(unsigned int)arg1;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToFile:(id)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (unsigned int)length;
- (id)init;
- (void)dealloc;
- (id)initWithContentsOfMappedFile:(id)arg1;

@end
