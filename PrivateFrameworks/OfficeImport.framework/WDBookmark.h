//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/WDRun.h>

@class NSString;

@interface WDBookmark : WDRun
{
    NSString *mName;
    int mBookmarkType;
}

- (void)setBookmarkType:(int)arg1;
- (id)initWithParagraph:(id)arg1 name:(id)arg2 type:(int)arg3;
- (int)runType;
- (int)bookmarkType;
- (id)name;
- (void)setName:(id)arg1;
- (void)dealloc;

@end

