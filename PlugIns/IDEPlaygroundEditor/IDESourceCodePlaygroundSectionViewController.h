//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEViewController.h>

#import <IDEPlaygroundEditor/DVTSourceTextViewQuickEditDataSource-Protocol.h>
#import <IDEPlaygroundEditor/IDEPlaygroundSectionViewController-Protocol.h>

@class DVTNotificationToken, DVTObservingToken, IDEPlaygroundEditor, IDEPlaygroundLayoutManager, IDEPlaygroundSourceTextScrollView, IDEPlaygroundTextView, IDESourceCodePlaygroundSection, IDESourceCodePlaygroundSectionContainerView, IDESourceCodePlaygroundSectionExecutionResultVisualization, NSArray, NSString;

@interface IDESourceCodePlaygroundSectionViewController : IDEViewController <IDEPlaygroundSectionViewController, DVTSourceTextViewQuickEditDataSource>
{
    IDEPlaygroundLayoutManager *_layoutManager;
    IDESourceCodePlaygroundSectionContainerView *_containerView;
    DVTNotificationToken *_textViewFrameChangeNotificationToken;
    DVTObservingToken *_boxContentIsDisclosedObserveingToken;
    BOOL _initialSetupDone;
    BOOL _resizingContainerView;
    IDESourceCodePlaygroundSection *_playgroundSection;
    IDEPlaygroundEditor *_playgroundEditor;
    IDEPlaygroundSourceTextScrollView *_scrollView;
    IDEPlaygroundTextView *_textView;
    IDESourceCodePlaygroundSectionExecutionResultVisualization *_executionResultVisualization;
}

@property(readonly) IDESourceCodePlaygroundSectionExecutionResultVisualization *executionResultVisualization; // @synthesize executionResultVisualization=_executionResultVisualization;
@property(readonly) IDEPlaygroundTextView *textView; // @synthesize textView=_textView;
@property(readonly) IDEPlaygroundSourceTextScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly) IDEPlaygroundEditor *playgroundEditor; // @synthesize playgroundEditor=_playgroundEditor;
@property(readonly) IDESourceCodePlaygroundSection *playgroundSection; // @synthesize playgroundSection=_playgroundSection;
- (void).cxx_destruct;
- (id)filesInTextView:(id)arg1;
- (void)primitiveInvalidate;
- (void)contentViewDidCompleteLayout;
@property(readonly) NSArray *currentSelectedDocumentLocations;
- (void)loadView;
- (void)_resizeContainerViewAccordingToTextContainer;
- (id)initWithSourceCodePlaygroundSection:(id)arg1 editor:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

