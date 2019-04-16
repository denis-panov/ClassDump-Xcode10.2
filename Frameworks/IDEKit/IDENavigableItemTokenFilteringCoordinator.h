//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDENavigableItemCoordinator.h>

#import <IDEKit/DVTFilteredDataViewingContext-Protocol.h>

@class IDENICFilterProxy, IDENavigableItem, NSArray, NSSet, NSString;
@protocol DVTFilteredDataSource;

@interface IDENavigableItemTokenFilteringCoordinator : IDENavigableItemCoordinator <DVTFilteredDataViewingContext>
{
    BOOL _isInvalidating;
    int _currentFilteringGeneration;
    int _filteringGenerationForLastShowChildrenUnderMatchChange;
    IDENICFilterProxy *_filterProxy;
    NSSet *_filterProxyItems;
    NSSet *_matches;
    BOOL _showChildrenUnderMatchAlways;
    BOOL _performingFiltering;
    BOOL _isFiltered;
    NSArray *_highlightFragments;
    IDENavigableItem *_rootNavigableItem;
    id <DVTFilteredDataSource> _dataSource;
}

+ (id)filteringLogAspect;
@property BOOL isFiltered; // @synthesize isFiltered=_isFiltered;
@property(retain) id <DVTFilteredDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property BOOL performingFiltering; // @synthesize performingFiltering=_performingFiltering;
@property(nonatomic) BOOL showChildrenUnderMatchAlways; // @synthesize showChildrenUnderMatchAlways=_showChildrenUnderMatchAlways;
@property(retain, nonatomic) IDENavigableItem *rootNavigableItem; // @synthesize rootNavigableItem=_rootNavigableItem;
@property(copy, nonatomic) NSArray *highlightFragments; // @synthesize highlightFragments=_highlightFragments;
- (void).cxx_destruct;
- (void)suspendFiltering;
- (void)resumeFiltering;
- (id)_filteredItemProxyForItems:(id)arg1;
- (void)showMatches:(id)arg1 added:(id)arg2 removed:(id)arg3;
- (void)_printChildItemsTree:(id)arg1;
- (void)_printArrangedChildItemsTree:(id)arg1;
- (id)_printChildItemsTreeRecursive:(id)arg1 arrangedChildItems:(BOOL)arg2 level:(int)arg3;
- (int)_filterCurrentGeneration;
- (int)_lastFilteringGeneration;
- (void)_incrementFilteringGeneration;
- (void)_forgetItems:(id)arg1;
- (void)_refreshChildItemsForItems:(id)arg1;
- (BOOL)_filteredNavItemWasVisible:(id)arg1;
- (BOOL)_filteredNavItemIsVisible:(id)arg1;
- (BOOL)_filteredNavItemVisibility:(id)arg1 forFilterGeneration:(int)arg2 showChildrenUnderMatchAlways:(BOOL)arg3;
- (id)_visibleChildItemsForItem:(id)arg1;
- (id)_navItemsForRepresentedObjects:(id)arg1;
@property(readonly) long long filterProgress;
- (id)_arrangedChildItemsOfItem:(id)arg1;
- (void)_invalidateArrangedChildrenOfItems:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

