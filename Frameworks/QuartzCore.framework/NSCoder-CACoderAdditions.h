//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCoder.h"

@interface NSCoder (CACoderAdditions)
- (id)CA_decodeObjectForKey:(id)arg1;
- (void)CA_encodeObject:(id)arg1 forKey:(id)arg2 conditional:(BOOL)arg3;
- (BOOL)CA_decodeCGFloatArray:(float *)arg1 count:(unsigned long)arg2 forKey:(id)arg3;
- (void)CA_encodeCGFloatArray:(const float *)arg1 count:(unsigned long)arg2 forKey:(id)arg3;
@end
