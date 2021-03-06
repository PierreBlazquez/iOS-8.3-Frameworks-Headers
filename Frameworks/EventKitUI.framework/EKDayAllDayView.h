//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class EKEvent, NSMutableArray, UILabel, UIScrollView;

@interface EKDayAllDayView : UIView
{
    int _orientation;
    NSMutableArray *_occurrenceViews;
    UILabel *_allDay;
    BOOL _allDayLabelHighlighted;
    UIScrollView *_scroller;
    float _occurrenceInset;
    BOOL _allowSelection;
    BOOL _showSelection;
    EKEvent *_selectedEvent;
    BOOL _usesSmallText;
    UIView *_dividerLineViewTop;
    UIView *_dividerLineViewBottom;
    BOOL _showsBorderLines;
    BOOL _showsLabel;
    id <EKDayAllDayViewDelegate> _delegate;
    float _fixedHeight;
    int _maxVisibleRows;
    EKEvent *_dimmedOccurrence;
}

+ (id)unscaledAllDayFont;
+ (id)allDayLabelBoldFont;
+ (id)allDayLabelFont;
@property(readonly, nonatomic) float naturalHeight;
- (void).cxx_destruct;
- (void)setOrientation:(int)arg1;
- (void)setBorderColor:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
@property(nonatomic) __weak id <EKDayAllDayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) int maxVisibleRows; // @synthesize maxVisibleRows=_maxVisibleRows;
@property(nonatomic) BOOL showsLabel; // @synthesize showsLabel=_showsLabel;
- (void)setAllDayLabelColor:(id)arg1;
@property(nonatomic) BOOL showsSelection;
@property(nonatomic) float fixedHeight; // @synthesize fixedHeight=_fixedHeight;
- (void)removeAllOccurrenceViews;
@property(nonatomic) BOOL showsBorderLines; // @synthesize showsBorderLines=_showsBorderLines;
- (float)_borderLineWidth;
- (float)_allDayAreaHeightForEventCount:(int)arg1;
- (float)_height;
- (void)addViewToScroller:(id)arg1;
- (BOOL)isAllDayLabelHighlighted;
- (void)setAllDayLabelHighlighted:(BOOL)arg1;
- (float)firstEventYOffset;
- (void)updateLabelFont;
- (float)nextAvailableOccurrenceViewYOrigin;
- (void)setOccurrenceInset:(float)arg1 labelInset:(float)arg2;
@property(retain, nonatomic) EKEvent *dimmedOccurrence; // @synthesize dimmedOccurrence=_dimmedOccurrence;
@property(nonatomic) BOOL allowsOccurrenceSelection;
- (void)setOccurrences:(id)arg1;
- (void)configureOccurrenceViewForGestureController:(id)arg1;
- (id)occurrenceViewForEvent:(id)arg1;
- (void)dayOccurrenceViewClicked:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)selectEvent:(id)arg1;
- (id)selectedEvent;
- (BOOL)containsEvent:(id)arg1;
- (void)_configureOccurrenceViewMarginAndPadding:(id)arg1;
- (id)occurrenceViews;

@end

