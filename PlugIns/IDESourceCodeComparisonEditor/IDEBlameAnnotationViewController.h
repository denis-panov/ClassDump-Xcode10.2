//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSViewController.h>

#import <IDESourceCodeComparisonEditor/IDEBlameAnnotationViewDelegate-Protocol.h>
#import <IDESourceCodeComparisonEditor/IDESourceControlLogDetailDelegate-Protocol.h>
#import <IDESourceCodeComparisonEditor/NSPopoverDelegate-Protocol.h>
#import <IDESourceCodeComparisonEditor/_TtP29IDESourceCodeComparisonEditor23BlameActionMenuDelegate_-Protocol.h>

@class DVTSourceControlBlameItem, DVTSourceControlWorkingCopy, IDEBlameAnnotationBorderedView, IDESourceCodeBlameController, NSButton, NSColor, NSDateFormatter, NSString, NSView, _TtC29IDESourceCodeComparisonEditor15BlameActionMenu;

@interface IDEBlameAnnotationViewController : NSViewController <_TtP29IDESourceCodeComparisonEditor23BlameActionMenuDelegate_, IDEBlameAnnotationViewDelegate, NSPopoverDelegate, IDESourceControlLogDetailDelegate>
{
    NSDateFormatter *_dateFormatter;
    BOOL _highlighted;
    unsigned long long _mouseOver;
    IDEBlameAnnotationBorderedView *_borderedView;
    NSView *_primaryView;
    long long _fontSize;
    _TtC29IDESourceCodeComparisonEditor15BlameActionMenu *_actionMenu;
    IDESourceCodeBlameController *_blameController;
    NSButton *_actionButton;
    NSColor *_titleColor;
    NSColor *_subtitleColor;
    NSColor *_subtitleLinkColor;
    DVTSourceControlWorkingCopy *_workingCopy;
}

+ (id)defaultViewNibName;
@property(retain, nonatomic) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy=_workingCopy;
@property(retain, nonatomic) NSColor *subtitleLinkColor; // @synthesize subtitleLinkColor=_subtitleLinkColor;
@property(retain, nonatomic) NSColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(retain, nonatomic) NSColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) IDESourceCodeBlameController *blameController; // @synthesize blameController=_blameController;
@property(nonatomic) long long fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) IDEBlameAnnotationBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain, nonatomic) NSView *primaryView; // @synthesize primaryView=_primaryView;
- (void).cxx_destruct;
- (void)openBlameView;
- (void)goToDiff:(id)arg1;
- (void)goToCompare:(id)arg1;
- (void)goToRevision:(id)arg1;
- (id)viewWindow;
- (void)compareToCurrentRevision;
- (BOOL)detailShouldShowOpenBlameView;
- (void)openComparisonViewForRevision:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setMouseOver:(unsigned long long)arg1;
- (void)popoverDidClose;
- (void)popoverDidShow;
- (void)showInfoPanel;
- (id)blameAnnotationView;
- (void)refreshDisplay:(BOOL)arg1;
- (BOOL)_uncommitted;
- (void)setRepresentedObject:(id)arg1;
- (id)nibName;
- (void)dealloc;
@property(readonly, nonatomic) DVTSourceControlBlameItem *blameItem;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

