//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties, WDFont;

@interface WDSymbol : WDRun
{
    WDCharacterProperties *mProperties;
    WDFont *mFont;
    unsigned short mCharacter;
}

- (void)setCharacter:(unsigned short)arg1;
- (id)initWithParagraph:(id)arg1;
- (unsigned short)character;
- (int)runType;
- (id)properties;
- (id)font;
- (void)setFont:(id)arg1;
- (void)dealloc;
- (void)clearProperties;

@end

