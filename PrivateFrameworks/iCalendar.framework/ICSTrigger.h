//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iCalendar/ICSProperty.h>

@interface ICSTrigger : ICSProperty
{
}

- (id)travelRelativeDuration;
- (id)initWithDuration:(id)arg1 travelRelativeDuration:(id)arg2;
- (void)fixAlarmTrigger;
- (id)initWithDuration:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDuration:(id)arg1;
- (BOOL)isDurationBased;
- (id)initWithDate:(id)arg1;

@end

