//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath;

@interface MPPlayableContentCallbackContext : NSObject
{
    BOOL _serviced;
    NSIndexPath *_indexPath;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (id)initWithIndexPath:(id)arg1;
@property(nonatomic) BOOL serviced; // @synthesize serviced=_serviced;

@end

