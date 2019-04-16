//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEViewController.h>

@class DVTBorderedView, DVTGradientImageButton, DVTOutlineViewWithCustomGridDrawing, DVTScrollView, DVTSearchField, IDEBuildRunPhaseOptionsView, IDEBuildSchemeAction, IDEScheme, IDEWorkspace, NSBox, NSString, NSView;

@interface IDEBuildRunPhaseSheetController : IDEViewController
{
    DVTOutlineViewWithCustomGridDrawing *_outlineView;
    DVTGradientImageButton *_addButton;
    DVTGradientImageButton *_deleteButton;
    DVTBorderedView *_topBorderedView;
    DVTSearchField *_searchField;
    NSBox *_backgroundProvidingBox;
    IDEScheme *_runContext;
    IDEWorkspace *_workspace;
    IDEBuildSchemeAction *_runPhase;
    NSString *_filterString;
    id _buildablesDidChangeNotificationToken;
    DVTScrollView *_buildTargetsScrollView;
    NSView *_controlBar;
    IDEBuildRunPhaseOptionsView *_buildOptionsView;
}

+ (void)initialize;
@property __weak IDEBuildRunPhaseOptionsView *buildOptionsView; // @synthesize buildOptionsView=_buildOptionsView;
@property __weak NSView *controlBar; // @synthesize controlBar=_controlBar;
@property __weak DVTScrollView *buildTargetsScrollView; // @synthesize buildTargetsScrollView=_buildTargetsScrollView;
@property(retain) IDEBuildSchemeAction *runPhase; // @synthesize runPhase=_runPhase;
@property(retain) IDEScheme *runContext; // @synthesize runContext=_runContext;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
- (void).cxx_destruct;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)filteredBuildables:(id)arg1;
- (id)filteredBuildActionEntries;
- (BOOL)doesFilterStringIncludeName:(id)arg1;
- (BOOL)outlineView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)deleteBlueprintsAction:(id)arg1;
- (void)addBlueprintsAction:(id)arg1;
@property(retain) IDEWorkspace *workspace;
- (void)primitiveInvalidate;
- (void)loadView;
- (void)_updateDeleteButton;
- (BOOL)_getItemsToDelete:(id *)arg1;
- (void)updateBoundContent;
- (void)updateBoundIDEWorkspaceBinding;
- (void)updateBoundIDERunContextBinding;
- (id)dvt_extraBindings;

@end

