//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WatchKit/SPInterfaceObject.h>

@class NSArray, NSDictionary;

@interface SPInterfaceList : SPInterfaceObject
{
    NSArray *_rowControllers;
    NSDictionary *_rowDescriptions;
    id <SPInterfaceController> _controller;
    NSArray *_rowControllerProperties;
}

@property(retain, nonatomic) NSArray *rowControllerProperties; // @synthesize rowControllerProperties=_rowControllerProperties;
- (void)setNumberOfRows:(int)arg1 withRowType:(id)arg2;
@property(copy, nonatomic) NSArray *rowControllers; // @synthesize rowControllers=_rowControllers;
@property(copy, nonatomic) NSDictionary *rowDescriptions; // @synthesize rowDescriptions=_rowDescriptions;
- (void)setRowTypes:(id)arg1;
- (id)rowControllerAtIndex:(int)arg1;
- (void)_setupWithDescription:(id)arg1 forController:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SPInterfaceController> controller; // @synthesize controller=_controller;
@property(readonly, nonatomic) int numberOfRows;

@end

