//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class WDParagraph, WDParagraphProperties, WMParagraphStyle;

@interface WMParagraphStyleMapper : CMMapper
{
    WDParagraphProperties *wdParaProperties;
    WDParagraph *wdParagraph;
    WMParagraphStyle *mStyle;
}

- (id)labelStringWithGap:(id)arg1;
- (id)bulletLabelAtLevel:(id)arg1 forIndex:(int)arg2 bulletFormat:(int)arg3 listState:(id)arg4;
- (void)mapBulletAt:(id)arg1 forLevel:(id)arg2 forIndex:(int)arg3 listState:(id)arg4;
- (_Bool)checkListId:(long)arg1 level:(unsigned char)arg2;
- (void)destyleEmptyParagraph;
- (void)mapListStyleAt:(id)arg1 state:(id)arg2;
- (BOOL)isListItem;
- (id)initWithWDParagraph:(id)arg1 parent:(id)arg2 isInTextFrame:(BOOL)arg3;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)dealloc;

@end
