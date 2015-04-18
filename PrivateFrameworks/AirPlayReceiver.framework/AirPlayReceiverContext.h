//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet;

@interface AirPlayReceiverContext : NSObject
{
    struct AirPlayReceiverSessionPrivate *_session;
    unsigned char _receiverUIStarted;
    unsigned int _receiverUISessionID;
    unsigned char _audioSessionActive;
    unsigned char _sessionStarted;
    CDStruct_03e0893a _mainAudioCtx;
    CDStruct_03e0893a _altAudioCtx;
    struct IONotificationPort *_hidNotifier;
    unsigned int _hidIterator;
    NSMutableSet *_hidDevices;
    unsigned int _powerAssertion;
}

- (void)_handleMediaServicesWereReset:(id)arg1;
- (void)_handleAudioInterruption:(id)arg1;

@end
