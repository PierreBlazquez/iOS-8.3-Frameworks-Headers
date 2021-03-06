//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MPPProtobufferCoding.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class MPMediaItemCollection, MPMediaLibrary, MPMediaPlaylist, MPMediaQueryCriteria, MPMediaQuerySectionInfo, NSArray, NSDictionary, NSSet, NSString;

@interface MPMediaQuery : NSObject <MPPProtobufferCoding, NSSecureCoding, NSCopying>
{
    MPMediaLibrary *_mediaLibrary;
    MPMediaQueryCriteria *_criteria;
    int _isFilteringDisabled;
    NSArray *_staticEntities;
    unsigned int _staticEntityType;
}

+ (id)currentDevicePurchasesPlaylist;
+ (BOOL)supportsSecureCoding;
+ (void)initialize;
+ (id)activeGeniusPlaylist;
+ (id)geniusMixesQuery;
+ (id)videoPodcastsQuery;
+ (id)audioPodcastsQuery;
+ (id)movieRentalsQuery;
+ (id)moviesQuery;
+ (id)homeVideosQuery;
+ (id)tvShowsQuery;
+ (id)musicVideosQuery;
+ (id)videosQuery;
+ (id)albumArtistsQuery;
+ (id)genresQuery;
+ (id)composersQuery;
+ (id)compilationsQuery;
+ (id)audibleAudiobooksQuery;
+ (id)videoITunesUQuery;
+ (id)ITunesUAudioQuery;
+ (id)ITunesUQuery;
+ (id)podcastsQuery;
+ (id)playlistsQuery;
+ (id)songsQuery;
+ (id)artistsQuery;
+ (id)albumsQuery;
+ (BOOL)isFilteringDisabled;
+ (void)initFilteringDisabled;
+ (id)audiobooksQuery;
+ (void)setFilteringDisabled:(BOOL)arg1;
@property(nonatomic) BOOL ignoreSystemFilterPredicates;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *items;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)MPSD_hasDownloadingEntities;
- (BOOL)MPSD_hasDownloadableEntities;
- (id)MPSD_mediaQueryForDownloadingEntities;
- (id)MPSD_mediaQueryForDownloadableEntities;
@property(readonly, nonatomic) MPMediaItemCollection *collectionByJoiningCollections;
- (BOOL)_updatePredicateForProperty:(id)arg1 withPropertyPredicate:(id)arg2;
- (void)setFilterPropertyPredicate:(id)arg1;
@property(readonly, nonatomic) MPMediaPlaylist *containingPlaylist;
- (void)setFilterPredicate:(id)arg1 forProperty:(id)arg2;
- (void)removePredicatesForProperty:(id)arg1;
- (id)predicateForProperty:(id)arg1;
- (void)setCriteria:(id)arg1;
- (id)criteria;
- (void)_enumerateUnorderedCollectionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateCollectionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateUnorderedItemsUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateItemsUsingBlock:(CDUnknownBlockType)arg1;
- (id)valueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2;
- (id)valueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2;
@property(readonly, nonatomic) NSArray *collectionSections;
@property(readonly, nonatomic) NSArray *itemSections;
@property(readonly, nonatomic) BOOL willGroupEntities;
@property(readonly, nonatomic) BOOL excludesEntitiesWithBlankNames;
@property(nonatomic) BOOL useSections;
@property(nonatomic) BOOL sortItems;
@property(copy, nonatomic, getter=_orderingDirectionMappings, setter=_setOrderingDirectionMappings:) NSDictionary *orderingDirectionMappings;
@property(copy, nonatomic, getter=_orderingProperties, setter=_setOrderingProperties:) NSArray *orderingProperties;
@property(readonly, nonatomic) NSArray *collectionPersistentIdentifiers;
@property(readonly, nonatomic) NSArray *itemPersistentIdentifiers;
@property(readonly, nonatomic) unsigned int _countOfCollections;
@property(readonly, nonatomic) BOOL _hasCollections;
@property(readonly, nonatomic) BOOL _hasItems;
@property(copy, nonatomic) NSSet *collectionPropertiesToFetch;
@property(copy, nonatomic) NSSet *itemPropertiesToFetch;
@property(retain, nonatomic) MPMediaLibrary *mediaLibrary;
- (void)removeFilterPredicate:(id)arg1;
- (id)copyBySanitizingStaticEntities;
- (id)copyByRemovingStaticEntities;
- (id)initWithEntities:(id)arg1 entityType:(unsigned int)arg2;
- (void)_enumerateCollectionsInOrder:(BOOL)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_enumerateItemsInOrder:(BOOL)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_valueForAggregateFunction:(id)arg1 onProperty:(id)arg2 entityType:(unsigned int)arg3;
@property(readonly, nonatomic) MPMediaQuerySectionInfo *collectionSectionInfo;
@property(readonly, nonatomic) MPMediaQuerySectionInfo *itemSectionInfo;
- (unsigned int)groupingThreshold;
@property(readonly, nonatomic) BOOL specifiesPlaylistItems;
@property(readonly, nonatomic) NSArray *collections;
@property(nonatomic) int groupingType;
- (id)protobufferEncodableObject;
@property(retain, nonatomic) NSSet *filterPredicates;
- (void)setStaticEntities:(id)arg1 entityType:(unsigned int)arg2;
- (id)initWithCriteria:(id)arg1 library:(id)arg2;
- (BOOL)_isFilteringDisabled;
- (id)initWithFilterPredicates:(id)arg1;
@property(readonly, nonatomic) unsigned int _countOfItems;
- (void)addFilterPredicate:(id)arg1;
- (id)initWithProtobufferDecodableObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

