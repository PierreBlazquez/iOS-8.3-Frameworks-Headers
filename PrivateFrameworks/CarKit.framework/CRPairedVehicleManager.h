//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSXPCConnection;

@interface CRPairedVehicleManager : NSObject
{
    NSXPCConnection *_serviceConnection;
    id <CRCarKitService> _service;
    NSMutableArray *_outstandingSemaphores;
}

@property(retain, nonatomic) NSXPCConnection *serviceConnection; // @synthesize serviceConnection=_serviceConnection;
@property(retain, nonatomic) id <CRCarKitService> service; // @synthesize service=_service;
- (id)pairedVehicles;
- (id)allVehicles;
- (void)_blockOnServiceSemaphore:(id)arg1;
- (id)_serviceSemaphore;
@property(retain, nonatomic) NSMutableArray *outstandingSemaphores; // @synthesize outstandingSemaphores=_outstandingSemaphores;
- (id)saveVehicle:(id)arg1;
- (id)vehicleForBluetoothAddress:(id)arg1;
- (BOOL)removeVehicle:(id)arg1;
- (void).cxx_destruct;
- (id)init;

@end
