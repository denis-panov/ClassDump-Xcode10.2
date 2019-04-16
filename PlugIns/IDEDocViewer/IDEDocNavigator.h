//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEOutlineBasedNavigator.h>

#import <IDEDocViewer/_TtP6DVTKit30DVTExplorerNavigatorCommonCore_-Protocol.h>

@class DVTObservingToken, NSArray, NSMutableSet, NSSet, NSString;
@protocol DVTExplorerNavigatorCommonCoreDelegate;

@interface IDEDocNavigator : IDEOutlineBasedNavigator <_TtP6DVTKit30DVTExplorerNavigatorCommonCore_>
{
    NSSet *_expandedItems;
    BOOL _restoringState;
    DVTObservingToken *_selectedItemWatcher;
    id <DVTExplorerNavigatorCommonCoreDelegate> delegate;
    id _selectedItem;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (void)initialize;
@property(retain) id selectedItem; // @synthesize selectedItem=_selectedItem;
@property(retain, nonatomic) id <DVTExplorerNavigatorCommonCoreDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)nameArraysForItems:(id)arg1;
- (id)itemsForNameArrays:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (id)stateSavingExpandedItems;
- (void)setStateSavingExpandedItems:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)primitiveInvalidate;
- (void)focusSearchField;
- (void)updateWithImplementationSpecifics:(id)arg1;
- (void)updateWithURL:(id)arg1;
- (void)updateWithDomainObjects:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *contextMenuSelectedNavItems;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly) BOOL canRevertWithEmptyStateDictionary;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy) NSSet *expandedItems; // @dynamic expandedItems;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSMutableSet *mutableExpandedItems; // @dynamic mutableExpandedItems;
@property(readonly) Class superclass;

@end
