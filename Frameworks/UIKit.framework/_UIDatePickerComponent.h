//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface _UIDatePickerComponent : NSObject
{
    unsigned int _equivalentUnit;
    NSString *_formatString;
    unsigned int _calendarUnit;
    float _width;
    struct _NSRange _unitRange;
}

+ (id)componentsFromDateFormatString:(id)arg1 locale:(id)arg2 desiredUnits:(int)arg3;
+ (id)componentsFromDateFormatString:(id)arg1 locale:(id)arg2;
- (id)_initWithFormatString:(id)arg1 calendarUnit:(unsigned int)arg2;
@property(nonatomic) struct _NSRange unitRange; // @synthesize unitRange=_unitRange;
@property(readonly, nonatomic) unsigned int equivalentUnit;
@property(readonly, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;
@property(readonly, nonatomic) unsigned int calendarUnit; // @synthesize calendarUnit=_calendarUnit;
@property(nonatomic) float width; // @synthesize width=_width;
- (id)description;
- (void)dealloc;

@end
