//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEEditor.h>

#import <XCSUI/DVTReplacementViewDelegate-Protocol.h>

@class DVTObservingToken, DVTReplacementView, NSArray, NSDictionary, NSString, XCSIntegration;

@interface XCSUIIntegrationReportEditor_Tests : IDEEditor <DVTReplacementViewDelegate>
{
    DVTObservingToken *_reportObserver;
    DVTObservingToken *_selectedLocationsObserver;
    XCSIntegration *_integration;
    NSString *_reportType;
    DVTReplacementView *_replacementView;
    NSDictionary *_testKeyPathsAndTests;
    NSArray *_currentSelectedDocumentLocations;
    NSArray *_currentSelectedItems;
}

+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
@property(copy, nonatomic) NSArray *currentSelectedItems; // @synthesize currentSelectedItems=_currentSelectedItems;
@property(copy, nonatomic) NSArray *currentSelectedDocumentLocations; // @synthesize currentSelectedDocumentLocations=_currentSelectedDocumentLocations;
@property(retain, nonatomic) NSDictionary *testKeyPathsAndTests; // @synthesize testKeyPathsAndTests=_testKeyPathsAndTests;
@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property(retain, nonatomic) NSString *reportType; // @synthesize reportType=_reportType;
- (void).cxx_destruct;
- (id)reportDocument;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

