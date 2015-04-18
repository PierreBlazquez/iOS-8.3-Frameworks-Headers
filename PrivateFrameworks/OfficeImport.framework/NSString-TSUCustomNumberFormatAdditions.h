//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (TSUCustomNumberFormatAdditions)
+ (id)customNumberFormatDecimalFormatStringWithDigits:(unsigned int)arg1 digitString:(id)arg2 includeDecimalSeparator:(BOOL)arg3;
+ (id)customNumberFormatDecimalTokenDisplayStringWithDigits:(unsigned int)arg1 digitString:(id)arg2;
+ (id)customNumberFormatIntegerFormatStringWithDigits:(unsigned int)arg1 digitString:(id)arg2;
+ (id)customNumberFormatIntegerTokenDisplayStringWithDigits:(unsigned int)arg1 separator:(BOOL)arg2 digitString:(id)arg3;
+ (id)customNumberFormatDecimalTokenRepresentedStringWithDigits:(unsigned int)arg1 digitString:(id)arg2;
+ (id)customNumberFormatIntegerTokenRepresentedStringWithDigits:(unsigned int)arg1 separator:(BOOL)arg2 digitString:(id)arg3;
+ (id)customNumberFormatTokenStringOfType:(int)arg1 content:(id)arg2;
- (unsigned short)spaceCharacterInCustomNumberFormatSpaceToken;
- (unsigned short)scaleCharacterInCustomNumberFormatScaleToken;
- (id)formatStringFromCustomNumberFormatScaleToken;
- (int)fractionAccuracyFromCustomNumberFormatFractionToken;
- (id)currencyCodeFromCustomNumberFormatCurrencyToken;
- (id)digitPlaceholderStringInDigitToken;
- (unsigned int)numberOfDigitsInCustomNumberFormatDecimalToken;
- (id)stringByInsertingFormatGroupingSeparators;
- (BOOL)customFormatIntegerTokenUsesSeparator;
- (unsigned int)numberOfDigitsInCustomNumberFormatIntegerToken;
- (BOOL)isSpecialCustomNumberFormatToken;
- (BOOL)isSpecialCustomNumberFormatTokenOfType:(int)arg1;
@end
