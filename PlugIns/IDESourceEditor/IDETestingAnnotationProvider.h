//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTAnnotationProvider.h>

#import <IDESourceEditor/DVTTextAnnotationDelegate-Protocol.h>
#import <IDESourceEditor/IDETestsInFileObserver-Protocol.h>
#import <IDESourceEditor/_TtP21IDESourceEditorPlugin38IDETestingAnnotationActionMenuDelegate_-Protocol.h>

@class IDEAnnotationContext, NSString, NSURL, _TtC21IDESourceEditorPlugin30IDETestingAnnotationActionMenu;

@interface IDETestingAnnotationProvider : DVTAnnotationProvider <_TtP21IDESourceEditorPlugin38IDETestingAnnotationActionMenuDelegate_, DVTTextAnnotationDelegate, IDETestsInFileObserver>
{
    IDEAnnotationContext *_context;
    NSURL *_fileURL;
    _TtC21IDESourceEditorPlugin30IDETestingAnnotationActionMenu *_currentActionMenu;
}

+ (id)annotationProviderForContext:(id)arg1 error:(id *)arg2;
@property(retain) _TtC21IDESourceEditorPlugin30IDETestingAnnotationActionMenu *currentActionMenu; // @synthesize currentActionMenu=_currentActionMenu;
@property(retain) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain) IDEAnnotationContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)testingAnnotationActionMenuDidClose:(id)arg1;
- (void)testingAnnotationActionMenu:(id)arg1 didSelectTestCollection:(id)arg2;
- (void)annotation:(id)arg1 willDrawInTextSidebarView:(id)arg2 withAnnotationsInSameLine:(id)arg3;
- (id)contextMenuItemsForAnnotation:(id)arg1 inTextSidebarView:(id)arg2;
- (BOOL)shouldMoveCursorForAnnotation:(id)arg1;
- (void)didEndRolloverOnAnnotation:(id)arg1 inTextSidebarView:(id)arg2 event:(id)arg3;
- (void)didBeginRolloverOnAnnotation:(id)arg1 inTextSidebarView:(id)arg2 event:(id)arg3;
- (BOOL)_shouldAllowLaunchingTests;
- (void)didClickAnnotation:(id)arg1 inTextSidebar:(id)arg2 event:(id)arg3;
- (void)_runTestCollection:(id)arg1 contextPrefix:(id)arg2;
- (void)allTestablesChanged;
- (void)testsChanged:(id)arg1;
- (void)testLocationsInFileUpdated:(id)arg1;
- (void)providerWillUninstall;
- (void)_clearAnnotations;
@property(readonly, copy) NSString *description;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 fileURL:(id)arg2;
- (id)_createAnnotationForTestLocation:(id)arg1 usingTestManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

