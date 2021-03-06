//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface MPArtworkResizeUtility : NSObject
{
    NSObject<OS_dispatch_queue> *_artworkResizingAccessQueue;
    NSOperationQueue *_artworkResizingOperationQueue;
    NSMapTable *_artworkResizingOperations;
}

- (void).cxx_destruct;
- (id)init;
- (id)resizeImage:(id)arg1 scaledFittingSize:(struct CGSize)arg2 useExactFittingSizeAsDestinationSize:(BOOL)arg3 saveToDestinationURL:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)cancelResizeImage:(id)arg1;
@property(retain, nonatomic) NSMapTable *artworkResizingOperations; // @synthesize artworkResizingOperations=_artworkResizingOperations;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *artworkResizingAccessQueue; // @synthesize artworkResizingAccessQueue=_artworkResizingAccessQueue;
@property(retain, nonatomic) NSOperationQueue *artworkResizingOperationQueue; // @synthesize artworkResizingOperationQueue=_artworkResizingOperationQueue;

@end

