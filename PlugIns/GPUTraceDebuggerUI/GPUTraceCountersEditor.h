//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEDebugGaugeReportEditor.h>

#import <GPUTraceDebuggerUI/IDEDebugGaugeReportContentDelegate-Protocol.h>

@class DVTObservingToken, DVTStackView_AppKitAutolayout, GPUDebuggerController, GPUDebuggingAddition, GPUTraceCounterGraphEditor, NSArray, NSString;

@interface GPUTraceCountersEditor : IDEDebugGaugeReportEditor <IDEDebugGaugeReportContentDelegate>
{
    DVTObservingToken *_activeDebuggerControllerObserverToken;
    GPUDebuggingAddition *_debuggingAddition;
    DVTStackView_AppKitAutolayout *_mainStackView;
    NSString *_outlineItemUUIDToOpen;
    GPUDebuggerController *_debuggerController;
    GPUTraceCounterGraphEditor *_counterGraphEditor;
    NSArray *_selectedDocumentLocations;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)keyPathsForValuesAffectingCurrentSelectedItems;
+ (id)keyPathsForValuesAffectingCurrentSelectedDocumentLocations;
@property(readonly, nonatomic) NSArray *selectedDocumentLocations; // @synthesize selectedDocumentLocations=_selectedDocumentLocations;
@property(retain, nonatomic) GPUTraceCounterGraphEditor *counterGraphEditor; // @synthesize counterGraphEditor=_counterGraphEditor;
@property(readonly, nonatomic) __weak GPUDebuggerController *debuggerController; // @synthesize debuggerController=_debuggerController;
- (void).cxx_destruct;
- (void)GPUDebugger_zoomOutCounterGraph:(id)arg1;
- (void)GPUDebugger_zoomInCounterGraph:(id)arg1;
- (void)GPUDebugger_hideEmptyCounters:(id)arg1;
- (void)GPUDebugger_showEmptyCounters:(id)arg1;
- (void)GPUDebugger_selectPrevItem:(id)arg1;
- (void)GPUDebugger_selectNextItem:(id)arg1;
- (void)GPUDebugger_scaleToFit:(id)arg1;
- (void)GPUDebugger_exportCounters:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (id)currentSelectedDocumentLocations;
- (void)exportCounters;
- (void)selectDocumentLocations:(id)arg1;
- (void)selectAPIItem:(id)arg1 selectionRange:(struct _NSRange)arg2 apiItemSelected:(BOOL)arg3 itemData:(id)arg4;
- (void)showOutlineItemInCurrentEditor:(id)arg1;
- (void)_constructCountersEditor;
- (void)addSectionsToView:(id)arg1;
- (void)_setup;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)reset;
- (void)primitiveInvalidate;
- (BOOL)hasDefaultTopSection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

