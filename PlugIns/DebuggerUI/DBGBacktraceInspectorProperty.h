//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEInspectorProperty.h>

#import <DebuggerUI/DBGBacktraceInspectorViewControllerDelegate-Protocol.h>

@class DBGBacktraceInspectorViewController, IDEInspectorKeyPath, NSMutableArray, NSProgressIndicator, NSString, NSTextField, NSView;

@interface DBGBacktraceInspectorProperty : IDEInspectorProperty <DBGBacktraceInspectorViewControllerDelegate>
{
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_errorMessageKeyPath;
    NSMutableArray *_frameModelControllers;
    NSView *_errorView;
    NSTextField *_errorTextField;
    NSView *_loadingView;
    NSProgressIndicator *_loadingProgressView;
}

+ (void)initialize;
@property(nonatomic) __weak NSProgressIndicator *loadingProgressView; // @synthesize loadingProgressView=_loadingProgressView;
@property(retain, nonatomic) NSView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak NSTextField *errorTextField; // @synthesize errorTextField=_errorTextField;
@property(retain, nonatomic) NSView *errorView; // @synthesize errorView=_errorView;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_addLoadingView;
- (void)_displayFramesFromThread:(id)arg1;
- (void)_displayErrorMessage:(id)arg1;
- (void)_updateStackFrames;
- (id)_selectedItemErrorMessage;
- (id)_selectedItemThread;
- (void)backtraceInspectorViewController:(id)arg1 didChangeStackCompressionEnabled:(BOOL)arg2;
@property(readonly) DBGBacktraceInspectorViewController *inspectorViewController;
- (void)refresh;
- (void)propertyViewWillUninstallFromWindow;
- (void)propertyViewDidInstallIntoWindow;
- (void)setupRefreshTriggersAndConfigure;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
