//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIDocumentPasswordViewDelegate.h"
#import "UIWebPDFViewDelegate.h"
#import "UIWebPDFViewPrivateDelegate.h"
#import "_UIRotatingAlertControllerDelegate.h"
#import "_UIWebDoubleTapDelegate.h"
#import "_UIWebRotationDelegate.h"

@class NSArray, NSDictionary, NSMapTable, NSObject<UIWebPDFViewHandlerDelegate>, UIAlertView, UIColor, UIDocumentPasswordView, UIView, UIWebPDFLabelView, UIWebPDFView, WebPDFNSNumberFormatter, _UIHighlightView, _UIRotatingAlertController;

@interface UIWebPDFViewHandler : NSObject <UIWebPDFViewPrivateDelegate, UIDocumentPasswordViewDelegate, _UIRotatingAlertControllerDelegate, UIWebPDFViewDelegate, _UIWebDoubleTapDelegate, _UIWebRotationDelegate>
{
    UIWebPDFView *_pdfView;
    BOOL _scalesPageToFit;
    float _initialZoomScale;
    NSObject<UIWebPDFViewHandlerDelegate> *_pdfHandlerDelegate;
    _UIHighlightView *_linkHighlightView;
    UIWebPDFLabelView *_pageLabelView;
    BOOL _showPageLabels;
    BOOL _showsShadowsForHTMLContent;
    BOOL _cachedScrollViewShadowsState;
    UIDocumentPasswordView *_passwordEntryView;
    NSMapTable *_searchControllers;
    UIColor *_backgroundColorForUnRenderedContent;
    BOOL _hideActivityIndicatorForUnRenderedContent;
    BOOL _hidePageViewsUntilReadyToRender;
    WebPDFNSNumberFormatter *_labelViewFormatter;
    struct _PDFHistoryItem _pendingHistoryItemRestore;
    _UIRotatingAlertController *_linkActionSheet;
    NSDictionary *_linkActionInfo;
    NSArray *_linkActions;
    struct CGRect _rectOfInterest;
    BOOL _rectOfInterestConsidersHeight;
    UIAlertView *_currentAlert;
}

@property(nonatomic) NSObject<UIWebPDFViewHandlerDelegate> *pdfHandlerDelegate; // @synthesize pdfHandlerDelegate=_pdfHandlerDelegate;
@property(nonatomic) BOOL showPageLabels; // @synthesize showPageLabels=_showPageLabels;
- (void)revealSearchResult:(id)arg1 andZoomIn:(BOOL)arg2;
- (void)updateViewHierarchyForDocumentViewTabSwitch:(id)arg1;
- (void)removeViewFromSuperview;
- (id)findOnPageHighlighter;
- (void)clearSearchControllerForHighlighter:(id)arg1;
- (id)searchControllerForHighlighter:(id)arg1;
- (void)didEndEditingPassword:(id)arg1 inView:(id)arg2;
- (void)didBeginEditingPassword:(id)arg1 inView:(id)arg2;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;
- (void)_resultRects:(id)arg1 andResultViews:(id)arg2 forSearchResult:(id)arg3 inViewCoordinates:(id)arg4;
- (void)scrollToPageNumber:(int)arg1 animate:(BOOL)arg2;
- (id)createPageLabel;
- (id)_getLabelViewFormatter;
- (void)updateViewHierarchyForDocumentViewTabSwitch:(id)arg1 restoringZoomScale:(float)arg2 andScrollPt:(struct CGPoint)arg3;
- (void)_updateViewHierarchyForDocumentView:(id)arg1 ignoreIfSame:(BOOL)arg2;
- (void)updatePageNumberLabelWithUserScrolling:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_showPasswordEntryViewForFile:(id)arg1;
- (void)_postdidDetermineDocumentBounds;
- (struct CGRect)_frameForDocumentBounds:(struct CGRect)arg1;
- (void)restoreStateFromPendingHistoryItem;
- (void)adjustZoomScalesForScrollView;
- (void)_adjustContentOffsetForKeyboardIfNeeded;
- (void)_showPasswordErrorAlert;
- (void)_showLinkSheet:(id)arg1;
- (void)performAction:(id)arg1 fromAlertController:(id)arg2;
- (id)_actionsForInteractionInfo:(id)arg1;
- (id)_actionForType:(int)arg1;
- (void)highlightRect:(struct CGRect)arg1;
- (void)_completeLinkClickWithURLString:(id)arg1;
- (void)_completeLinkClickWithURL:(id)arg1;
- (void)_notifyDelegateDidClickLink:(id)arg1;
- (void)_notifyDelegateWillClickLink:(id)arg1;
- (id)createLinkHighlight;
- (void)_adjustZoomScalesForScrollViewInternal:(id)arg1;
- (float)_pinValueForVerticalEdge:(unsigned int)arg1 inScrollView:(id)arg2;
- (unsigned int)_verticalEdgeForContentOffsetInScrollView:(id)arg1;
- (void)_ensurePDFViewInHierarchyForWebDocView:(id)arg1;
- (void)_createPDFViewIfNeeded:(id)arg1;
- (void)_removePDFViewIfWebDocViewIsNotSamePDF:(id)arg1;
- (void)_removePDFViewIfWebDocViewIsNotPDF:(id)arg1;
- (struct CGRect)_rectForPasswordView:(id)arg1;
- (void)_replacePDFViewIfPresentWithWebDocView:(id)arg1;
- (id)_getPDFDocumentViewForWebView:(id)arg1;
- (id)_scroller:(id)arg1;
- (struct CGRect)_rectForPdfView:(struct CGRect)arg1;
- (void)clearLinkHighlight;
- (void)clearActionSheet;
- (void)clearAllViews;
- (void)_setSearchControllerDocumentToSearch:(id)arg1;
- (void)clearPageLabel;
@property(nonatomic) BOOL hideActivityIndicatorForUnRenderedContent; // @synthesize hideActivityIndicatorForUnRenderedContent=_hideActivityIndicatorForUnRenderedContent;
@property(retain, nonatomic) UIColor *backgroundColorForUnRenderedContent; // @synthesize backgroundColorForUnRenderedContent=_backgroundColorForUnRenderedContent;
@property(nonatomic) BOOL hidePageViewsUntilReadyToRender; // @synthesize hidePageViewsUntilReadyToRender=_hidePageViewsUntilReadyToRender;
- (void)handleLongPressOnLink:(id)arg1 atPoint:(struct CGPoint)arg2 inRect:(struct CGRect)arg3 contentRect:(struct CGRect)arg4;
- (void)handleLinkClick:(id)arg1 inRect:(struct CGRect)arg2;
- (void)resetZoom:(id)arg1;
- (void)pdfView:(id)arg1 zoomToRect:(struct CGRect)arg2 forPoint:(struct CGPoint)arg3 considerHeight:(BOOL)arg4;
- (void)didDetermineDocumentBounds:(id)arg1;
- (id)passwordForPDFView:(id)arg1;
- (void)ensureCorrectPagesAreInstalled:(BOOL)arg1;
- (void)didScroll:(id)arg1;
@property(readonly, nonatomic) UIView *frontView;
- (id)_absoluteUrlRelativeToDocumentURL:(id)arg1;
- (BOOL)considerHeightOfRectOfInterestForRotation;
- (struct CGRect)activeRectForRectOfInterest:(struct CGRect)arg1;
- (float)heightToKeepVisible;
- (float)minimumVerticalContentOffset;
- (struct CGRect)rectOfInterestForRotation;
- (void)updateBoundariesOfScrollView:(id)arg1 withScales:(CDStruct_869f9c67)arg2;
- (CDStruct_869f9c67)scalesForContainerSize:(struct CGSize)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)handleScrollToAnchor:(id)arg1;
- (void)updateViewHierarchyForDocumentViewLoadComplete:(id)arg1;
- (void)updateViewHierarchyForDocumentViewNewLoad:(id)arg1;
- (void)updateViewHierarchyForFirstNonEmptyLayoutInFrame:(id)arg1;
- (void)rotateEnclosingScrollViewToFrame:(struct CGRect)arg1;
@property(nonatomic) BOOL scalesPageToFit; // @synthesize scalesPageToFit=_scalesPageToFit;
- (void)updateViewSettings;
@property(readonly, nonatomic) UIWebPDFView *pdfView;
- (struct CGRect)presentationRectInHostViewForSheet:(id)arg1;
- (struct CGRect)initialPresentationRectInHostViewForSheet:(id)arg1;
- (id)hostViewForSheet:(id)arg1;
- (BOOL)considerHeightForDoubleTap;
- (CDStruct_869f9c67)doubleTapScalesForSize:(struct CGSize)arg1;
- (struct CGRect)rectOfInterestForPoint:(struct CGPoint)arg1;
- (struct CGRect)visibleContentRect;
- (float)currentDocumentScale;
- (float)zoomedDocumentScale;
- (id)enclosingScrollView;
- (float)minimumScaleForSize:(struct CGSize)arg1;
- (void)restoreStateFromHistoryItem:(id)arg1 forWebView:(id)arg2;
- (void)saveStateToHistoryItem:(id)arg1 forWebView:(id)arg2;
- (id)contentView;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)init;
- (void)dealloc;

@end
