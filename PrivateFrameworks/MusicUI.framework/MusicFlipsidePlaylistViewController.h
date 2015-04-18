//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicUI/MusicPlaylistSongsViewController.h>

#import "MPURatingControlDelegate.h"
#import "MusicFlipsideRating.h"

@class NSIndexPath, NSString;

@interface MusicFlipsidePlaylistViewController : MusicPlaylistSongsViewController <MusicFlipsideRating, MPURatingControlDelegate>
{
    id <MPURatingControlDelegate> _ratingDelegate;
    NSIndexPath *_ratingItemIndexPath;
    float _maximumDurationWidth;
}

+ (BOOL)_shouldShowActions;
+ (BOOL)_shouldDisplayActions;
+ (BOOL)shouldPushNowPlayingOnSelection;
- (void)_flipsidePlaylist_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updateDownloadabilityStateWithCanReloadActionRowsSynchronously:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_createTableViewBackgroundView;
@property(nonatomic) BOOL showingRating;
@property(readonly, nonatomic) float maximumDurationWidth; // @synthesize maximumDurationWidth=_maximumDurationWidth;
@property(nonatomic) __weak id <MPURatingControlDelegate> ratingDelegate;
- (BOOL)shouldShowActionCellConfiguration:(Class)arg1;
- (void)setShowingRating:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithDataSource:(id)arg1 cellConfigurationClass:(Class)arg2;
- (void)ratingDidChangeForRatingControl:(id)arg1;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)reloadData;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
