//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEGeniusResultsFinder.h>

#import <XCSUI/IDETestsInTestableObserver-Protocol.h>

@class IDEActivityLogUnitTestSection, IDEWorkspace, NSString;

@interface XCSUIIntegrationReportGeniusResultsFinder_Logs : IDEGeniusResultsFinder <IDETestsInTestableObserver>
{
    IDEWorkspace *_workspace;
    IDEActivityLogUnitTestSection *_unitTestSection;
}

+ (Class)editorDocumentClass;
- (void).cxx_destruct;
- (void)testablesChanged:(id)arg1;
- (void)testsChanged:(id)arg1;
- (void)allTestablesChanged;
- (void)findGeniusResultsForEditorDocument:(id)arg1 selectedDocumentLocations:(id)arg2;
- (void)_proceedFindingResults;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

