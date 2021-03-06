//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSString;

@interface UIKBGeometry : NSObject <NSCoding, NSCopying>
{
    NSString *m_name;
    CDStruct_d5a6e384 m_x;
    CDStruct_d5a6e384 m_y;
    CDStruct_d5a6e384 m_w;
    CDStruct_d5a6e384 m_h;
    CDStruct_d5a6e384 m_paddingTop;
    CDStruct_d5a6e384 m_paddingLeft;
    CDStruct_d5a6e384 m_paddingBottom;
    CDStruct_d5a6e384 m_paddingRight;
    BOOL m_explicitlySpecified;
}

+ (id)geometryWithOriginValue:(CDStruct_d5a6e384)arg1 sizeValue:(CDStruct_d5a6e384)arg2;
+ (id)codeStringForValue:(CDStruct_d5a6e384)arg1;
+ (id)geometryWithRect:(struct CGRect)arg1;
+ (void)performOperations:(CDUnknownBlockType)arg1 withScale:(float)arg2;
+ (id)geometry;
- (id)initWithName:(id)arg1 rect:(CDStruct_14b8080e)arg2 padding:(CDStruct_14b8080e)arg3;
- (BOOL)usesAutomaticMetrics;
- (BOOL)usesPercentages;
- (id)overrideGeometry:(id)arg1;
- (struct CGRect)paddedFrameWithContainingFrame:(struct CGRect)arg1;
@property(nonatomic) BOOL explicitlySpecified; // @synthesize explicitlySpecified=m_explicitlySpecified;
@property(nonatomic, setter=setPaddingRight:) CDStruct_d5a6e384 paddingRight; // @synthesize paddingRight=m_paddingRight;
@property(nonatomic, setter=setPaddingBottom:) CDStruct_d5a6e384 paddingBottom; // @synthesize paddingBottom=m_paddingBottom;
- (struct CGRect)frameWithContainingFrame:(struct CGRect)arg1;
- (struct CGRect)paddedFrameWithResolvedFrame:(struct CGRect)arg1;
@property(nonatomic, setter=setH:) CDStruct_d5a6e384 h; // @synthesize h=m_h;
@property(nonatomic, setter=setW:) CDStruct_d5a6e384 w; // @synthesize w=m_w;
- (id)shortDescription;
@property(nonatomic, setter=setPaddingLeft:) CDStruct_d5a6e384 paddingLeft; // @synthesize paddingLeft=m_paddingLeft;
@property(nonatomic, setter=setPaddingTop:) CDStruct_d5a6e384 paddingTop; // @synthesize paddingTop=m_paddingTop;
@property(nonatomic, setter=setY:) CDStruct_d5a6e384 y; // @synthesize y=m_y;
@property(nonatomic, setter=setX:) CDStruct_d5a6e384 x; // @synthesize x=m_x;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *name; // @synthesize name=m_name;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (struct CGRect)frame;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

