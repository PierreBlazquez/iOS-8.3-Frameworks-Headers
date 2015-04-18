//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSFastEnumeration.h"

@class NSArray, NSOrderedSet;

@interface PFAdjustmentStack : NSObject <NSCopying, NSFastEnumeration>
{
    NSArray *_adjustments;
    NSOrderedSet *_maskUUIDs;
    unsigned int _formatVersion;
}

+ (BOOL)isValidEnvelopeDictionary:(id)arg1 errors:(id)arg2;
- (id)maskUUIDs;
- (id)adjustmentsWithIdentifier:(id)arg1;
- (id)firstAdjustmentWithIdentifier:(id)arg1;
- (id)adjustmentAtIndex:(unsigned int)arg1;
- (id)initWithAdjustments:(id)arg1;
- (id)initWithEnvelopeDictionary:(id)arg1;
- (id)envelopeDictionary;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (id)init;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;

@end
