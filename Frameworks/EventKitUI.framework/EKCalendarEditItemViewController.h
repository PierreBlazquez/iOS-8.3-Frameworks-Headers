//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEditItemViewController.h>

#import "EKCalendarChooserDelegate.h"

@class EKCalendar, EKCalendarChooser, EKEventStore, NSString;

@interface EKCalendarEditItemViewController : EKEditItemViewController <EKCalendarChooserDelegate>
{
    EKEventStore *_store;
    EKCalendarChooser *_chooser;
    EKCalendar *_selectedCalendar;
    unsigned int _entityType;
    BOOL _limitToSource;
}

- (void).cxx_destruct;
- (void)loadView;
- (struct CGSize)preferredContentSize;
@property(nonatomic) BOOL limitToSource; // @synthesize limitToSource=_limitToSource;
- (id)initWithFrame:(struct CGRect)arg1 store:(id)arg2 styleProvider:(id)arg3;
- (void)calendarChooserSelectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 store:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 store:(id)arg2 styleProvider:(id)arg3 entityType:(unsigned int)arg4;
@property(retain, nonatomic) EKCalendar *selectedCalendar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
