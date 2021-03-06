//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSDictionary, NSString;

@interface PLPhotoEditModel : NSObject <NSCopying>
{
    NSString *_effectFilterName;
    int _effectFilterVersion;
    BOOL _smartToneEnabled;
    float _smartToneLevel;
    float _autoSmartToneLevel;
    NSString *_autoSmartToneIdentifier;
    float _brightnessLevelOffset;
    float _contrastLevelOffset;
    float _exposureLevelOffset;
    float _shadowsLevelOffset;
    float _blackPointLevelOffset;
    float _highlightsLevelOffset;
    BOOL _smartColorEnabled;
    float _autoSmartColorLevel;
    NSString *_autoSmartColorIdentifier;
    float _smartColorLevel;
    float _colorContrastLevelOffset;
    float _colorVibrancyLevelOffset;
    float _colorCastLevelOffset;
    BOOL _smartBWEnabled;
    float _smartBWLevel;
    float _bwStrengthLevelOffset;
    float _bwNeutralGammaLevelOffset;
    float _bwToneLevelOffset;
    float _bwHueLevelOffset;
    float _bwGrainLevelOffset;
    BOOL _whiteBalanceEnabled;
    float _whiteBalanceFaceI;
    float _whiteBalanceFaceQ;
    float _whiteBalanceFaceStrength;
    float _whiteBalanceFaceWarmth;
    float _straightenAngle;
    struct CGRect _normalizedCropRect;
    int _cropConstraintWidth;
    int _cropConstraintHeight;
    int _appliedOrientation;
    BOOL _autoCropped;
    NSDictionary *_smartToneStatistics;
    NSDictionary *_smartColorStatistics;
    NSDictionary *_smartBWStatistics;
    NSDictionary *_autoWhiteBalanceSettings;
    NSString *_autoWhiteBalanceIdentifier;
    NSArray *_redEyeCorrections;
    NSArray *_autoRedEyeCorrections;
    NSArray *_legacyAutoEnhanceFilters;
    BOOL _legacyAutoEnhanceIsOn;
}

+ (float)_referenceValueOfType:(int)arg1 fromLevels:(CDStruct_869f9c67)arg2;
+ (void)_loadSubfilterReferenceLevelsIfNeeded;
+ (void)_loadReferenceLevelsFromCIFilterWithName:(id)arg1 attributeKeys:(id)arg2 intoLevelStructs:(CDStruct_183601bc **)arg3;
+ (id)_identityModel;
+ (float)referenceWhiteBalanceFaceWarmthLevelOfType:(int)arg1;
+ (float)referenceWhiteBalanceFaceStrengthLevelOfType:(int)arg1;
+ (float)referenceWhiteBalanceFaceQLevelOfType:(int)arg1;
+ (float)referenceWhiteBalanceFaceILevelOfType:(int)arg1;
+ (float)referenceSmartBWLevelOfType:(int)arg1;
+ (float)referenceSmartColorLevelOfType:(int)arg1;
+ (float)referenceSmartToneLevelOfType:(int)arg1;
+ (float)referenceBWGrainLevelOfType:(int)arg1;
+ (float)referenceBWHueLevelOfType:(int)arg1;
+ (float)referenceBWToneLevelOfType:(int)arg1;
+ (float)referenceBWNeutralGammaLevelOfType:(int)arg1;
+ (float)referenceBWStrengthLevelOfType:(int)arg1;
+ (float)referenceColorCastLevelOfType:(int)arg1;
+ (float)referenceColorVibrancyLevelOfType:(int)arg1;
+ (float)referenceColorContrastLevelOfType:(int)arg1;
+ (float)referenceBlackPointLevelOfType:(int)arg1;
+ (float)referenceShadowsLevelOfType:(int)arg1;
+ (float)referenceHighlightsLevelOfType:(int)arg1;
+ (float)referenceExposureLevelOfType:(int)arg1;
+ (float)referenceContrastLevelOfType:(int)arg1;
+ (float)referenceBrightnessLevelOfType:(int)arg1;
+ (int)identityOrientation;
+ (int)identityCropConstraint;
+ (float)referenceStraightenAngleOfType:(int)arg1;
+ (struct CGRect)identityNormalizedCropRect;
- (id)pl_aggregateKeysForPreviousPhotoEditModel:(id)arg1;
- (id)pl_aggregateNameForEffectFilter;
@property(readonly, nonatomic) BOOL hasAnyAutoEnhancement;
@property(readonly, nonatomic) BOOL hasRedEyeCorrections;
@property(readonly, nonatomic) BOOL hasIdentityCrop;
- (BOOL)isIdentityModel;
- (BOOL)isCropConstraintEqualToPhotoEditModel:(id)arg1;
- (id)_debugDictionaryRepresentation;
@property(readonly, nonatomic, getter=isCropConstrained) BOOL cropConstrained;
- (BOOL)isRedEyeCorrectionEqualToPhotoEditModel:(id)arg1;
- (BOOL)isGeometryEqualToPhotoEditModel:(id)arg1;
- (BOOL)isSmartBWPrecisionEqualToPhotoEditModel:(id)arg1;
- (BOOL)isSmartColorPrecisionEqualToPhotoEditModel:(id)arg1;
- (BOOL)isSmartTonePrecisionEqualToPhotoEditModel:(id)arg1;
- (BOOL)isEffectFilterEqualToPhotoEditModel:(id)arg1;
- (BOOL)isVisuallyEqualToPhotoEditModel:(id)arg1;
- (BOOL)_shouldEarlyExitComparisonToModel:(id)arg1 returnValue:(char *)arg2;
@property(readonly, copy, nonatomic) NSString *autoWhiteBalanceIdentifier; // @synthesize autoWhiteBalanceIdentifier=_autoWhiteBalanceIdentifier;
@property(readonly, copy, nonatomic) NSDictionary *autoWhiteBalanceSettings; // @synthesize autoWhiteBalanceSettings=_autoWhiteBalanceSettings;
@property(readonly, copy, nonatomic) NSString *autoSmartColorIdentifier; // @synthesize autoSmartColorIdentifier=_autoSmartColorIdentifier;
@property(readonly, copy, nonatomic) NSString *autoSmartToneIdentifier; // @synthesize autoSmartToneIdentifier=_autoSmartToneIdentifier;
@property(readonly, nonatomic, getter=isAutoCropped) BOOL autoCropped; // @synthesize autoCropped=_autoCropped;
@property(readonly, nonatomic) float autoSmartColorLevel; // @synthesize autoSmartColorLevel=_autoSmartColorLevel;
@property(readonly, nonatomic) float autoSmartToneLevel; // @synthesize autoSmartToneLevel=_autoSmartToneLevel;
- (void)_copyValuesFromModel:(id)arg1 interpolationStartModel:(id)arg2 progress:(float)arg3;
@property(readonly, copy, nonatomic) NSDictionary *smartBWStatistics; // @synthesize smartBWStatistics=_smartBWStatistics;
@property(readonly, nonatomic) float smartBWLevel; // @synthesize smartBWLevel=_smartBWLevel;
@property(readonly, copy, nonatomic) NSDictionary *smartColorStatistics; // @synthesize smartColorStatistics=_smartColorStatistics;
@property(readonly, nonatomic) float smartColorLevel; // @synthesize smartColorLevel=_smartColorLevel;
@property(readonly, copy, nonatomic) NSDictionary *smartToneStatistics; // @synthesize smartToneStatistics=_smartToneStatistics;
@property(readonly, nonatomic) float smartToneLevel; // @synthesize smartToneLevel=_smartToneLevel;
- (BOOL)isGeometryIdentity;
@property(readonly, nonatomic) int effectFilterVersion; // @synthesize effectFilterVersion=_effectFilterVersion;
@property(readonly, copy, nonatomic) NSString *effectFilterName; // @synthesize effectFilterName=_effectFilterName;
@property(readonly, nonatomic) float whiteBalanceFaceWarmth; // @synthesize whiteBalanceFaceWarmth=_whiteBalanceFaceWarmth;
@property(readonly, nonatomic) float whiteBalanceFaceStrength; // @synthesize whiteBalanceFaceStrength=_whiteBalanceFaceStrength;
@property(readonly, nonatomic) float whiteBalanceFaceQ; // @synthesize whiteBalanceFaceQ=_whiteBalanceFaceQ;
@property(readonly, nonatomic) float whiteBalanceFaceI; // @synthesize whiteBalanceFaceI=_whiteBalanceFaceI;
@property(readonly, nonatomic, getter=isWhiteBalanceEnabled) BOOL whiteBalanceEnabled; // @synthesize whiteBalanceEnabled=_whiteBalanceEnabled;
@property(readonly, nonatomic) float bwGrainLevelOffset; // @synthesize bwGrainLevelOffset=_bwGrainLevelOffset;
@property(readonly, nonatomic) float bwHueLevelOffset; // @synthesize bwHueLevelOffset=_bwHueLevelOffset;
@property(readonly, nonatomic) float bwToneLevelOffset; // @synthesize bwToneLevelOffset=_bwToneLevelOffset;
@property(readonly, nonatomic) float bwNeutralGammaLevelOffset; // @synthesize bwNeutralGammaLevelOffset=_bwNeutralGammaLevelOffset;
@property(readonly, nonatomic) float bwStrengthLevelOffset; // @synthesize bwStrengthLevelOffset=_bwStrengthLevelOffset;
@property(readonly, nonatomic, getter=isSmartBWEnabled) BOOL smartBWEnabled; // @synthesize smartBWEnabled=_smartBWEnabled;
@property(readonly, nonatomic) float colorCastLevelOffset; // @synthesize colorCastLevelOffset=_colorCastLevelOffset;
@property(readonly, nonatomic) float colorVibrancyLevelOffset; // @synthesize colorVibrancyLevelOffset=_colorVibrancyLevelOffset;
@property(readonly, nonatomic) float colorContrastLevelOffset; // @synthesize colorContrastLevelOffset=_colorContrastLevelOffset;
@property(readonly, nonatomic, getter=isSmartColorEnabled) BOOL smartColorEnabled; // @synthesize smartColorEnabled=_smartColorEnabled;
@property(readonly, nonatomic) float blackPointLevelOffset; // @synthesize blackPointLevelOffset=_blackPointLevelOffset;
@property(readonly, nonatomic) float shadowsLevelOffset; // @synthesize shadowsLevelOffset=_shadowsLevelOffset;
@property(readonly, nonatomic) float highlightsLevelOffset; // @synthesize highlightsLevelOffset=_highlightsLevelOffset;
@property(readonly, nonatomic) float exposureLevelOffset; // @synthesize exposureLevelOffset=_exposureLevelOffset;
@property(readonly, nonatomic) float contrastLevelOffset; // @synthesize contrastLevelOffset=_contrastLevelOffset;
@property(readonly, nonatomic) float brightnessLevelOffset; // @synthesize brightnessLevelOffset=_brightnessLevelOffset;
@property(readonly, nonatomic, getter=isSmartToneEnabled) BOOL smartToneEnabled; // @synthesize smartToneEnabled=_smartToneEnabled;
@property(readonly, copy, nonatomic) NSArray *legacyAutoEnhanceFilters; // @synthesize legacyAutoEnhanceFilters=_legacyAutoEnhanceFilters;
@property(readonly, nonatomic) BOOL legacyAutoEnhanceIsOn; // @synthesize legacyAutoEnhanceIsOn=_legacyAutoEnhanceIsOn;
@property(readonly, copy, nonatomic) NSArray *autoRedEyeCorrections; // @synthesize autoRedEyeCorrections=_autoRedEyeCorrections;
@property(readonly, copy, nonatomic) NSArray *redEyeCorrections; // @synthesize redEyeCorrections=_redEyeCorrections;
- (BOOL)isEqualToPhotoEditModel:(id)arg1;
- (struct CGSize)pl_dataCropConstraintSizeForImageGeometry:(id)arg1;
- (BOOL)pl_isCropConstraintEnabled;
- (struct CGRect)pl_dataCropRectForImageGeometry:(id)arg1 straightenAngle:(float)arg2;
- (BOOL)pl_isCropEnabled;
@property(readonly, nonatomic) int cropConstraintWidth; // @synthesize cropConstraintWidth=_cropConstraintWidth;
@property(readonly, nonatomic) int cropConstraintHeight; // @synthesize cropConstraintHeight=_cropConstraintHeight;
@property(readonly, nonatomic) float straightenAngle; // @synthesize straightenAngle=_straightenAngle;
@property(readonly, nonatomic) struct CGRect normalizedCropRect; // @synthesize normalizedCropRect=_normalizedCropRect;
@property(readonly, nonatomic) int appliedOrientation; // @synthesize appliedOrientation=_appliedOrientation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)description;
- (id)init;
- (void)dealloc;

@end

