//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEventDetailItem.h>

@class NSArray;

@interface EKEventAlarmDetailItem : EKEventDetailItem
{
    unsigned int _disclosedSubitem;
    NSArray *_alarms;
    BOOL _hasLeaveNowAlarm;
    BOOL _canHaveLeaveNowAlarm;
}

- (void).cxx_destruct;
- (void)reset;
- (BOOL)_alarmsAreCreatable;
- (BOOL)_alarmsAreEditable;
- (void)_updateAlarms;
- (void)setEvent:(id)arg1 store:(id)arg2;
- (BOOL)editItemViewControllerShouldShowDetachAlert;
- (BOOL)editItemViewControllerCommit:(id)arg1;
- (unsigned int)numberOfSubitems;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned int)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 forWidth:(float)arg2;
- (id)cellForSubitemAtIndex:(unsigned int)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;

@end
