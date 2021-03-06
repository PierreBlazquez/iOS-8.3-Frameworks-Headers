//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewSubviewReusing.h"

@class NSString, UIColor, UIImage, UILabel, UITableView, _UITableViewHeaderFooterViewLabel;

@interface UITableViewHeaderFooterView : UIView <UITableViewSubviewReusing>
{
    int _tableViewStyle;
    UIImage *_backgroundImage;
    struct CGRect _frame;
    int _textAlignment;
    UITableView *_tableView;
    float _maxTitleWidth;
    NSString *_reuseIdentifier;
    UIView *_backgroundView;
    _UITableViewHeaderFooterViewLabel *_label;
    _UITableViewHeaderFooterViewLabel *_detailLabel;
    UIView *_contentView;
    UIColor *_tintColor;
    struct UIEdgeInsets _separatorInset;
    struct {
        unsigned int isHeader:1;
        unsigned int labelBackgroundColorNeedsUpdate:1;
        unsigned int detailLabelBackgroundColorNeedsUpdate:1;
        unsigned int floating:1;
        unsigned int stripPadding:1;
        unsigned int isTopHeader:1;
    } _headerFooterFlags;
}

+ (id)_defaultTextColorForTableViewStyle:(int)arg1 isSectionHeader:(BOOL)arg2;
+ (id)_defaultFontForTableViewStyle:(int)arg1 isSectionHeader:(BOOL)arg2;
+ (id)_defaultPlainHeaderFooterFont;
@property(nonatomic) float maxTitleWidth; // @synthesize maxTitleWidth=_maxTitleWidth;
@property(nonatomic, getter=_isTopHeader, setter=_setTopHeader:) BOOL topHeader;
@property(nonatomic, getter=_stripPadding, setter=_setStripPadding:) BOOL stripPadding;
@property(nonatomic) BOOL floating;
- (void)_updateDetailLabelBackgroundColorIfNeeded;
- (struct CGRect)_detailLabelFrame;
- (void)_updateLabelBackgroundColorIfNeeeded;
- (void)_updateContentAndBackgroundView;
- (void)_updateLayerContents;
- (struct CGSize)_detailTextSizeForWidth:(float)arg1;
- (struct CGSize)_textSizeForWidth:(float)arg1;
- (id)_label:(BOOL)arg1;
- (void)_updateDetailLabelBackgroundColor;
- (void)_updateLabelBackgroundColor;
- (BOOL)_useDetailText;
@property(nonatomic) BOOL sectionHeader;
- (struct CGRect)_backgroundRect;
- (void)_invalidateDetailLabelBackgroundColor;
- (void)_invalidateLabelBackgroundColor;
- (void)_setupBackgroundView;
@property(nonatomic, getter=_rightMarginWidth, setter=_setRightMarginWidth:) float rightMarginWidth;
@property(nonatomic) int tableViewStyle;
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1 stripPaddingForAbuttingView:(BOOL)arg2 isTopHeader:(BOOL)arg3;
@property(nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)setNeedsUpdateConstraints;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(nonatomic) int textAlignment;
@property(nonatomic, getter=_marginWidth, setter=_setMarginWidth:) float marginWidth;
- (void)_tableViewDidUpdateMarginWidth;
@property(retain, nonatomic) UIView *backgroundView;
@property(readonly, retain, nonatomic) UILabel *detailTextLabel;
@property(readonly, retain, nonatomic) UILabel *textLabel;
@property(copy, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (void)prepareForReuse;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)_setBackgroundViewColor:(id)arg1;
- (void)_setupLabelAppearance;
- (struct CGRect)_labelFrame;
- (void)_updateBackgroundImage;
- (id)_scriptingInfo;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (BOOL)_transparentFocusContainer;
@property(retain, nonatomic) UIColor *tintColor;
@property(readonly, retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *text;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)frame;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (void)setOpaque:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

