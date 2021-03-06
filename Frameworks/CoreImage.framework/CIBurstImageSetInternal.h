//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIBurstActionClassifier, CIBurstImageFaceAnalysisContext, CIBurstYUVImage, NSArray, NSCountedSet, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString;

@interface CIBurstImageSetInternal : NSObject
{
    NSObject<OS_dispatch_queue> *dq;
    NSObject<OS_dispatch_queue> *dq_yuvdump;
    NSObject<OS_dispatch_semaphore> *sem;
    NSMutableArray *clusterArray;
    int temporalOrder;
    int maxNumPendingFrames;
    BOOL enableAnalysis;
    int dummyAnalysisCount;
    BOOL enableFaceCore;
    BOOL enableDumpYUV;
    NSString *burstCoverSelection;
    BOOL isAction;
    BOOL isPortrait;
    CIBurstImageFaceAnalysisContext *faceAnalysisContext;
    CIBurstYUVImage *overrideImage;
    NSDictionary *overrideProps;
    NSMutableArray *allImageIdentifiers;
    NSCountedSet *faceIDCounts;
    NSMutableDictionary *statsByImageIdentifier;
    NSMutableDictionary *clusterByImageIdentifier;
    NSString *burstLogFileName;
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *burstLogFileHandle;
    CIBurstActionClassifier *actionClassifier;
    int curClusterIndexToProcess;
    NSMutableArray *bestImageIdentifiersArray;
    NSString *burstId;
    NSString *_versionString;
    int _version;
}

+ (id)defaultVersionString;
- (id)initWithOptions:(id)arg1;
@property int version; // @synthesize version=_version;
- (void)dealloc;
@property NSString *burstCoverSelection; // @synthesize burstCoverSelection;
@property BOOL enableDumpYUV; // @synthesize enableDumpYUV;
@property BOOL enableFaceCore; // @synthesize enableFaceCore;
@property int dummyAnalysisCount; // @synthesize dummyAnalysisCount;
@property BOOL enableAnalysis; // @synthesize enableAnalysis;
@property int maxNumPendingFrames; // @synthesize maxNumPendingFrames;
@property NSString *burstLogFileName; // @synthesize burstLogFileName;
@property NSMutableDictionary *clusterByImageIdentifier; // @synthesize clusterByImageIdentifier;
@property NSMutableDictionary *statsByImageIdentifier; // @synthesize statsByImageIdentifier;
@property CIBurstActionClassifier *actionClassifier; // @synthesize actionClassifier;
@property NSMutableArray *allImageIdentifiers; // @synthesize allImageIdentifiers;
@property NSCountedSet *faceIDCounts; // @synthesize faceIDCounts;
@property NSMutableArray *clusterArray; // @synthesize clusterArray;
- (BOOL)isAction;
- (BOOL)isPortrait;
- (BOOL)isFaceDetectionForced;
- (id)imageClusterForIdentifier:(id)arg1;
- (void)addImageFromIOSurface:(struct __IOSurface *)arg1 properties:(id)arg2 identifier:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)bestImageIdentifiers;
@property NSArray *bestImageIdentifiersArray; // @synthesize bestImageIdentifiersArray;
- (void)selectCoverPhotoFromMultiple:(id)arg1 burstSize:(int)arg2;
- (id)findBestImage:(id)arg1 useActionScores:(_Bool)arg2;
- (void)performEmotionalRejectionOnCluster:(id)arg1;
- (void)computeAllImageScores;
- (float)computeActionSelectionThreshold;
- (float)computeBeginningVsEndAEMatrixDiffVsAverageAdjacent;
- (float)computeCameraTravelDistance;
@property int temporalOrder; // @synthesize temporalOrder;
- (int)computeEmotion:(id)arg1;
- (void)addYUVImage:(id)arg1 properties:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)processClusters:(BOOL)arg1;
- (id)burstDocumentDirectory;
@property(retain, nonatomic) NSString *burstId; // @synthesize burstId;
@property NSString *versionString; // @synthesize versionString=_versionString;

@end

