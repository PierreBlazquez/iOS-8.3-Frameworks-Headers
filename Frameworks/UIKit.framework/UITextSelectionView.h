//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSTimer, UITextInteractionAssistant, UITextRangeView, UITextSelection;

@interface UITextSelectionView : UIView
{
    UITextInteractionAssistant *m_interactionAssistant;
    UITextSelection *m_selection;
    NSTimer *m_caretTimer;
    UIView *m_caretView;
    UITextRangeView *m_rangeView;
    BOOL m_caretBlinks;
    BOOL m_caretShowingNow;
    BOOL m_visible;
    BOOL m_activated;
    BOOL m_wasShowingCommands;
    BOOL m_delayShowingCommands;
    BOOL m_dictationReplacementsMode;
    int m_showingCommandsCounter;
    NSArray *m_replacements;
    BOOL m_deferSelectionCommands;
    struct __CFRunLoopObserver *m_observer;
}

- (void)configureForReplacementMode;
- (void)doneMagnifying;
- (void)prepareForMagnification;
- (void)updateSelectionCommands;
- (void)caretBlinkTimerFired:(id)arg1;
- (void)hideCaret:(int)arg1;
- (void)calculateAndShowReplacements:(id)arg1;
@property(retain, nonatomic) NSArray *replacements; // @synthesize replacements=m_replacements;
- (BOOL)updateCalloutBarRects:(id)arg1 effectsWindow:(id)arg2;
- (struct CGRect)clippedTargetRect:(struct CGRect)arg1;
- (void)showCommandsWithReplacements:(id)arg1;
- (void)updateSelectionRectsIfNeeded;
- (void)touchCaretBlinkTimer;
- (void)showCaret:(int)arg1;
@property(readonly, nonatomic) UIView *caretView; // @synthesize caretView=m_caretView;
- (void)clearRange;
- (void)clearCaretBlinkTimer;
- (void)clearCaret;
- (BOOL)shouldBeVisible;
- (void)inputViewDidChange;
- (void)inputViewWillChange;
- (void)hideSelectionCommandsAfterDelay:(double)arg1;
- (void)showCalloutBarAfterDelay:(double)arg1;
- (BOOL)affectedByScrollerNotification:(id)arg1;
- (void)deferredUpdateSelectionCommands;
- (void)appearOrFadeIfNecessary;
- (void)inputModeDidChange:(id)arg1;
- (void)viewAnimate:(id)arg1;
- (void)inputViewDidMove;
- (void)inputViewWillMove:(id)arg1;
- (void)windowDidResignOrBecomeKey;
- (void)didRotate:(id)arg1;
- (void)willRotate:(id)arg1;
- (void)inputViewDidAnimate;
- (void)inputViewWillAnimate;
- (void)scaleDidChange:(id)arg1;
- (void)scaleWillChange:(id)arg1;
- (void)selectionDidScroll:(id)arg1;
- (void)selectionWillScroll:(id)arg1;
- (void)textSelectionViewActivated:(id)arg1;
- (struct CGRect)selectionBoundingBox;
- (void)showReplacementsWithGenerator:(id)arg1 forDictation:(BOOL)arg2 afterDelay:(double)arg3;
@property(readonly, nonatomic) BOOL selectionCommandsShowing;
- (void)showSelectionCommandsAfterDelay:(double)arg1;
- (void)updateSelectionDots;
@property(readonly, nonatomic) UITextRangeView *rangeView;
- (void)updateBaseIsStartWithDocumentPoint:(struct CGPoint)arg1;
- (void)cancelDelayedCommandRequests;
- (void)configureForSelectionMode;
- (void)showSelectionCommands;
- (void)hideSelectionCommands;
- (void)configureForHighlightMode;
- (void)installIfNecessary;
- (id)initWithInteractionAssistant:(id)arg1;
- (void)layoutChangedByScrolling:(BOOL)arg1;
- (void)startCaretBlinkIfNeeded;
- (void)updateDocumentHasContent:(BOOL)arg1;
@property(nonatomic) BOOL visible; // @synthesize visible=m_visible;
@property(nonatomic) BOOL caretBlinks; // @synthesize caretBlinks=m_caretBlinks;
- (id)dynamicCaretList;
- (void)activate;
- (void)detach;
- (id)scrollView;
- (void)selectionChanged;
- (void)deactivate;
- (void)updateSelectionRects;
- (void)updateSelectionWithDocumentPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) UITextSelection *selection;
- (id)dynamicCaret;
- (void)deferredUpdateSelectionRects;
@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant; // @synthesize interactionAssistant=m_interactionAssistant;
- (void)invalidate;
- (void)removeFromSuperview;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;

@end
