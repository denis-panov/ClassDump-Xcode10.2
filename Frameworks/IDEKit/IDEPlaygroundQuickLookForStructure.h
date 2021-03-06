//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSViewController.h>

#import <IDEKit/DVTOutlineViewDelegate-Protocol.h>
#import <IDEKit/DVTTableRowViewMouseInsideDelegate-Protocol.h>
#import <IDEKit/IDEPlaygroundQuickLookProvider-Protocol.h>
#import <IDEKit/NSPopoverDelegate-Protocol.h>

@class DVTOutlineView, IDELogEntryQuickLookNode, IDEPlaygroundQuickLookPopover, NSAttributedString, NSButtonCell, NSLayoutConstraint, NSString, NSView;

@interface IDEPlaygroundQuickLookForStructure : NSViewController <DVTOutlineViewDelegate, NSPopoverDelegate, DVTTableRowViewMouseInsideDelegate, IDEPlaygroundQuickLookProvider>
{
    NSButtonCell *_quickLookCell;
    IDEPlaygroundQuickLookPopover *_quickLookPopover;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    DVTOutlineView *_outlineView;
    IDELogEntryQuickLookNode *_rootNode;
}

@property(readonly) IDELogEntryQuickLookNode *rootNode; // @synthesize rootNode=_rootNode;
@property __weak DVTOutlineView *outlineView; // @synthesize outlineView=_outlineView;
@property __weak NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property __weak NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
- (void).cxx_destruct;
- (void)outlineView:(id)arg1 rowPreviouslyUnderMouse:(long long)arg2 rowCurrentlyUnderMouse:(long long)arg3;
- (id)outlineView:(id)arg1 rowViewForItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)popoverShouldClose:(id)arg1;
- (void)popoverDidShow:(id)arg1;
- (void)tableRowView:(id)arg1 mouseInside:(BOOL)arg2;
- (void)_showQuickLookForNode:(id)arg1 atRow:(long long)arg2;
- (void)_toggleQuickLookForClickedRow:(id)arg1;
- (double)outlineView:(id)arg1 heightOfRowByItem:(id)arg2;
- (void)_updatePreferredSize;
- (id)quickLookViewForResultsView;
- (id)quickLookViewForNaturalSize;
@property(readonly, copy) NSAttributedString *attributedTitle;
@property(readonly) NSView *iconView;
- (void)loadView;
- (void)dealloc;
- (id)initWithStructure:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

