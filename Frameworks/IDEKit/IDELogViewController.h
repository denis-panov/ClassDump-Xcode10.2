//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEViewController.h>

#import <IDEKit/DVTFindBarFindable-Protocol.h>
#import <IDEKit/IDEBuildResultsOutlineDelegate-Protocol.h>

@class DVTObservingToken, IDEActivityLogSection, IDEBuildResultsOutlineLogic, IDEEditor, NSArray, NSBox, NSPopUpButton, NSString, XCBuildResultsOutlineView;
@protocol IDELogViewControllerDelegate;

@interface IDELogViewController : IDEViewController <DVTFindBarFindable, IDEBuildResultsOutlineDelegate>
{
    BOOL _showAllResults;
    BOOL _showBySteps;
    BOOL _lastFindResult;
    IDEActivityLogSection *_activityLogSection;
    IDEEditor *_editor;
    id <IDELogViewControllerDelegate> _delegate;
    DVTObservingToken *_activityLogSectionUpdateToken;
    NSPopUpButton *_scopeBarMessagesPopup;
    IDEBuildResultsOutlineLogic *_outlineLogic;
    XCBuildResultsOutlineView *_buildResultsOutlineView;
    XCBuildResultsOutlineView *_buildIssuesOutlineView;
    NSBox *_containerView;
    NSArray *_currentSelectedDocumentLocations;
    NSArray *_currentSelectedItems;
    IDEActivityLogSection *_lastFindResultSection;
    struct _NSRange _lastFindResultRange;
}

@property(retain) IDEActivityLogSection *lastFindResultSection; // @synthesize lastFindResultSection=_lastFindResultSection;
@property struct _NSRange lastFindResultRange; // @synthesize lastFindResultRange=_lastFindResultRange;
@property BOOL lastFindResult; // @synthesize lastFindResult=_lastFindResult;
@property(copy) NSArray *currentSelectedItems; // @synthesize currentSelectedItems=_currentSelectedItems;
@property(copy) NSArray *currentSelectedDocumentLocations; // @synthesize currentSelectedDocumentLocations=_currentSelectedDocumentLocations;
@property(retain) NSBox *containerView; // @synthesize containerView=_containerView;
@property(retain) XCBuildResultsOutlineView *buildIssuesOutlineView; // @synthesize buildIssuesOutlineView=_buildIssuesOutlineView;
@property(retain) XCBuildResultsOutlineView *buildResultsOutlineView; // @synthesize buildResultsOutlineView=_buildResultsOutlineView;
@property(retain) IDEBuildResultsOutlineLogic *outlineLogic; // @synthesize outlineLogic=_outlineLogic;
@property BOOL showBySteps; // @synthesize showBySteps=_showBySteps;
@property(nonatomic) BOOL showAllResults; // @synthesize showAllResults=_showAllResults;
@property(retain) NSPopUpButton *scopeBarMessagesPopup; // @synthesize scopeBarMessagesPopup=_scopeBarMessagesPopup;
@property(retain) DVTObservingToken *activityLogSectionUpdateToken; // @synthesize activityLogSectionUpdateToken=_activityLogSectionUpdateToken;
@property(retain) id <IDELogViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) IDEEditor *editor; // @synthesize editor=_editor;
@property(retain) IDEActivityLogSection *activityLogSection; // @synthesize activityLogSection=_activityLogSection;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)selectSection:(id)arg1 withTranscriptTextRange:(struct _NSRange)arg2;
- (void)selectMessageOrSection:(id)arg1;
- (void)updateOutlineControllerWithSearchString:(id)arg1;
- (id)attributesForScopeBarMenuItems;
- (id)activeView;
- (void)_updateShownView;
- (id)configureOutlineView:(id)arg1;
- (void)showAllMessages:(id)arg1;
- (void)doubleClickDocumentLocation:(id)arg1;
- (void)processNewSelectedIndexPaths:(id)arg1;
- (void)_setShowSteps:(BOOL)arg1 showWarnings:(BOOL)arg2 showErrors:(BOOL)arg3 showAnalyzerResults:(BOOL)arg4;
- (void)_updateShowSteps:(BOOL)arg1 showWarnings:(BOOL)arg2 showErrors:(BOOL)arg3 showAnalyzerResults:(BOOL)arg4;
- (void)setLogEditorScopeState:(int)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

