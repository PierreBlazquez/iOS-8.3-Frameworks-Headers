//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/PDSlideChild.h>

@class PDNotesMaster;

@interface PDNotesSlide : PDSlideChild
{
    PDNotesMaster *mNotesMaster;
}

- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4;
- (void)setNotesMaster:(id)arg1;
- (id)masterPlaceholderOfType:(int)arg1;
- (id)notesMaster;
- (void)doneWithContent;
- (id)parentSlideBase;
- (id)init;
- (void)dealloc;

@end

