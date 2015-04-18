//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSVSystemDialogOptions, NSArray, NSMutableArray;

@interface MSVSystemDialog : NSObject
{
    NSMutableArray *_textFields;
    struct __CFUserNotification *_presentedUserNotification;
    struct __CFRunLoopSource *_activeRunLoopSource;
    CDUnknownBlockType _pendingCompletion;
    MSVSystemDialogOptions *_options;
}

+ (id)passwordAlertWithOptions:(id)arg1;
+ (id)systemDialogWithOptions:(id)arg1;
- (void)clearTextFields;
- (void)addTextFieldWithTitle:(id)arg1 secure:(BOOL)arg2;
@property(copy, nonatomic) CDUnknownBlockType pendingCompletion;
@property(nonatomic) struct __CFRunLoopSource *activeRunLoopSource;
@property(nonatomic) struct __CFUserNotification *presentedUserNotification;
- (void)addTextField:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (void)presentWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) MSVSystemDialogOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) NSArray *textFields; // @synthesize textFields=_textFields;
- (void)dealloc;

@end
