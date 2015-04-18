//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@interface PKPGSVHeaderContext : NSObject
{
    UIView *_headerView;
    UIView *_subheaderView;
    struct UIEdgeInsets _headerMargins;
    struct UIEdgeInsets _subheaderMargins;
}

+ (void)animateDisappearanceForLayer:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)animateAppearanceForLayer:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (id)createUpdatedHeaderContextForGroupStackView:(id)arg1 passType:(unsigned int)arg2 currentContext:(id)arg3 allowSubheader:(BOOL)arg4;
@property(readonly, nonatomic) float headerHeight;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;
@property(nonatomic) struct UIEdgeInsets subheaderMargins; // @synthesize subheaderMargins=_subheaderMargins;
@property(nonatomic) struct UIEdgeInsets headerMargins; // @synthesize headerMargins=_headerMargins;
@property(readonly, nonatomic) float totalHeight;
- (struct CGPoint)positionForSubheaderViewInContainerFrame:(struct CGRect)arg1;
- (struct CGPoint)positionForHeaderViewInContainerFrame:(struct CGRect)arg1;
- (float)_subheaderHeight;
- (struct CGRect)boundsForSubheaderViewInContainerFrame:(struct CGRect)arg1;
- (struct CGRect)boundsForHeaderViewInContainerFrame:(struct CGRect)arg1;
- (id)initWithHeaderView:(id)arg1 headerMargins:(struct UIEdgeInsets)arg2 subheaderView:(id)arg3 subheaderMargins:(struct UIEdgeInsets)arg4;
@property(readonly, nonatomic) UIView *subheaderView; // @synthesize subheaderView=_subheaderView;
- (float)_headerHeight;

@end
