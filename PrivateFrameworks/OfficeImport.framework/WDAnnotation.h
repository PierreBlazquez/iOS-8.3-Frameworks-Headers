//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/WDRun.h>

@class WDAnnotationData, WDCharacterRun;

@interface WDAnnotation : WDRun
{
    int mType;
    WDCharacterRun *mReference;
    BOOL mReferencePopertiesFixed;
    WDAnnotationData *mData;
    WDAnnotation *mOtherEndOfRangedAnnotation;
}

- (void)setOwner:(id)arg1;
- (id)otherEndOfRangedAnnotation;
- (int)annotationType;
- (id)initWithParagraph:(id)arg1 type:(int)arg2;
- (void)useDataFromOtherEnd;
- (void)setOtherEndOfRangedAnnotation:(id)arg1;
- (void)setReferencePropertiesFixed;
- (BOOL)referencePropertiesFixed;
- (id)reference;
- (int)runType;
- (id)owner;
- (void)setDate:(id)arg1;
- (id)data;
- (id)text;
- (id)date;
- (void)dealloc;

@end
