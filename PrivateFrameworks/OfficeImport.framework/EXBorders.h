//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EXBorders : NSObject
{
}

+ (int)edBorderStyleFromXmlBorderStyleString:(id)arg1;
+ (id)edBordersFromXmlBordersElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (int)edDiagStyleFromXmlElement:(struct _xmlNode *)arg1;
+ (id)edBorderFromXmlElement:(struct _xmlNode *)arg1 diagonalType:(int)arg2 state:(id)arg3;
+ (void)initialize;

@end
