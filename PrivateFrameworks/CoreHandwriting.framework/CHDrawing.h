//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface CHDrawing : NSObject <NSCopying>
{
    struct CJKChar _drawing;
}

- (unsigned int)pointCount;
- (unsigned int)strokeCount;
- (vector_55d7bafa)strokeIndicesSortedByMinXCoordinate;
- (id)sortedDrawing;
- (Matrix_273a43f8)orientationRepresentationForSampling:(unsigned int)arg1 convolutionWidth:(unsigned int)arg2;
- (Matrix_273a43f8)bitmapRepresentationForSize:(struct CGSize)arg1 drawingAlgorithm:(int)arg2;
- (Matrix_273a43f8)bitmapRepresentationForSize:(struct CGSize)arg1;
- (id)xyRepresentation;
- (struct _NSRange)matchingStrokePrefixRangeForDrawing:(id)arg1;
- (BOOL)isPrefixForDrawing:(id)arg1;
@property(nonatomic) struct CJKChar drawing; // @synthesize drawing=_drawing;
- (struct CGPoint)pointForStrokeIndex:(unsigned int)arg1 pointIndex:(unsigned int)arg2;
- (unsigned int)pointCountForStrokeIndex:(unsigned int)arg1;
- (void)endStroke;
- (void).cxx_destruct;
- (void)clear;
- (id).cxx_construct;
- (void)addPoint:(struct CGPoint)arg1;
- (void)setLineHeight:(double)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGRect)bounds;

@end
