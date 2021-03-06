//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenReaderOutputServer/SCROHandler.h>

#import "SCROSBrailleDisplayManagerDelegate.h"

@class NSString, SCROBrailleDisplayManager;

@interface SCROBrailleHandler : SCROHandler <SCROSBrailleDisplayManagerDelegate>
{
    SCROBrailleDisplayManager *_brailleDisplayManager;
    BOOL _wantsInputCallbacks;
    BOOL _wantsDidDisplayCallbacks;
    struct {
        char didDisplay;
        char keypress;
        char keyWillMem;
        char keymem;
        char panLeft;
        char panRight;
        char showPreviousAnnouncement;
        char showNextAnnouncement;
        char configChanged;
        char playDisplayConnectionSound;
        char playBorderHitSound;
        char playCommandNotSupportedSound;
        char bluetoothDisplayLoadFailed;
        char tableLoadFailed;
        char displayModeChanged;
    } _callbacks;
}

- (id)initWithBrailleDisplayManager:(id)arg1;
- (int)handleGetValue:(id *)arg1 forKey:(int)arg2 withObject:(id)arg3 trusted:(BOOL)arg4;
- (int)handleSetValue:(id)arg1 forKey:(int)arg2 trusted:(BOOL)arg3;
- (int)handleRegisterCallbackForKey:(int)arg1 trusted:(BOOL)arg2;
- (int)handlePerformActionForKey:(int)arg1 trusted:(BOOL)arg2;
- (void)handlePlayCommandNotSupportedSound;
- (void)handlePlayBorderHitSound;
- (void)handleBrailleDidPanRight:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3;
- (void)handleBrailleDidPanLeft:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3;
- (void)handleBrailleKeyMemorize:(id)arg1;
- (void)handleBrailleKeyWillMemorize:(id)arg1;
- (void)handleBrailleKeypress:(id)arg1;
- (void)handleBrailleDriverDisconnected;
- (void)handleBrailleDriverDidLoad;
- (void)handleFailedToLoadBluetoothDevice:(id)arg1;
- (void)handleBrailleTableFailedToLoad:(id)arg1;
- (void)configurationDidChange;
- (void)handleBrailleDidShowNextAnnouncement:(id)arg1;
- (void)handleBrailleDidShowPreviousAnnouncement:(id)arg1;
- (void)handleBrailleDidDisplay:(id)arg1;
- (void)handleDisplayModeChanged:(id)arg1;
- (void)invalidate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

