//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <Xcode3UI/Xcode3BuildPhaseViewController.h>

@class DVTBorderedView, DVTGradientImageButton, DVTStackView_ML, DVTTableView, NSButton, NSScrollView, NSString, _TtC8Xcode3UI50Xcode3PegasusShellScriptBuildPhaseSourceEditorView;

__attribute__((visibility("hidden")))
@interface _TtC8Xcode3UI48Xcode3PegasusShellScriptBuildPhaseViewController : Xcode3BuildPhaseViewController
{
    // Error parsing type: , name: canRemoveInputFiles
    // Error parsing type: , name: canRemoveOutputFiles
    // Error parsing type: , name: canRemoveInputFileLists
    // Error parsing type: , name: canRemoveOutputFileLists
    // Error parsing type: , name: frameChangeToken
    // Error parsing type: , name: delayedUpdateLayoutInvocation
    // Error parsing type: , name: scriptChangeDelayedInvocation
    // Error parsing type: , name: scriptSourceEditorView
    // Error parsing type: , name: scriptBorderedView
    // Error parsing type: , name: inputFileTableView
    // Error parsing type: , name: inputFileScrollView
    // Error parsing type: , name: inputFileBorderedView
    // Error parsing type: , name: addInputFileButton
    // Error parsing type: , name: removeInputFilesButton
    // Error parsing type: , name: inputFileListTableView
    // Error parsing type: , name: inputFileListScrollView
    // Error parsing type: , name: inputFileListBorderedView
    // Error parsing type: , name: addInputFileListButton
    // Error parsing type: , name: removeInputFileListsButton
    // Error parsing type: , name: outputFileTableView
    // Error parsing type: , name: outputFileScrollView
    // Error parsing type: , name: outputFileBorderedView
    // Error parsing type: , name: addOutputFileButton
    // Error parsing type: , name: removeOutputFilesButton
    // Error parsing type: , name: outputFileListTableView
    // Error parsing type: , name: outputFileListScrollView
    // Error parsing type: , name: outputFileListBorderedView
    // Error parsing type: , name: addOutputFileListButton
    // Error parsing type: , name: removeOutputFileListsButton
    // Error parsing type: , name: showEnvironmentVariablesCheckBox
    // Error parsing type: , name: runScriptOnlyWhenInstallingCheckBox
    // Error parsing type: , name: stackView
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)removeFiles:(id)arg1;
- (void)addFile:(id)arg1;
- (BOOL)tableView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)viewDidLoad;
@property(nonatomic, readonly) NSString *nibName;
- (void)primitiveInvalidate;
- (id)initWithCoder:(id)arg1;
- (id)initWithBuildPhase:(id)arg1;
@property(nonatomic, retain) DVTStackView_ML *stackView; // @synthesize stackView;
@property(nonatomic, retain) NSButton *runScriptOnlyWhenInstallingCheckBox; // @synthesize runScriptOnlyWhenInstallingCheckBox;
@property(nonatomic, retain) NSButton *showEnvironmentVariablesCheckBox; // @synthesize showEnvironmentVariablesCheckBox;
@property(nonatomic, retain) DVTGradientImageButton *removeOutputFileListsButton; // @synthesize removeOutputFileListsButton;
@property(nonatomic, retain) DVTGradientImageButton *addOutputFileListButton; // @synthesize addOutputFileListButton;
@property(nonatomic, retain) DVTBorderedView *outputFileListBorderedView; // @synthesize outputFileListBorderedView;
@property(nonatomic, retain) NSScrollView *outputFileListScrollView; // @synthesize outputFileListScrollView;
@property(nonatomic, retain) DVTTableView *outputFileListTableView; // @synthesize outputFileListTableView;
@property(nonatomic, retain) DVTGradientImageButton *removeOutputFilesButton; // @synthesize removeOutputFilesButton;
@property(nonatomic, retain) DVTGradientImageButton *addOutputFileButton; // @synthesize addOutputFileButton;
@property(nonatomic, retain) DVTBorderedView *outputFileBorderedView; // @synthesize outputFileBorderedView;
@property(nonatomic, retain) NSScrollView *outputFileScrollView; // @synthesize outputFileScrollView;
@property(nonatomic, retain) DVTTableView *outputFileTableView; // @synthesize outputFileTableView;
@property(nonatomic, retain) DVTGradientImageButton *removeInputFileListsButton; // @synthesize removeInputFileListsButton;
@property(nonatomic, retain) DVTGradientImageButton *addInputFileListButton; // @synthesize addInputFileListButton;
@property(nonatomic, retain) DVTBorderedView *inputFileListBorderedView; // @synthesize inputFileListBorderedView;
@property(nonatomic, retain) NSScrollView *inputFileListScrollView; // @synthesize inputFileListScrollView;
@property(nonatomic, retain) DVTTableView *inputFileListTableView; // @synthesize inputFileListTableView;
@property(nonatomic, retain) DVTGradientImageButton *removeInputFilesButton; // @synthesize removeInputFilesButton;
@property(nonatomic, retain) DVTGradientImageButton *addInputFileButton; // @synthesize addInputFileButton;
@property(nonatomic, retain) DVTBorderedView *inputFileBorderedView; // @synthesize inputFileBorderedView;
@property(nonatomic, retain) NSScrollView *inputFileScrollView; // @synthesize inputFileScrollView;
@property(nonatomic, retain) DVTTableView *inputFileTableView; // @synthesize inputFileTableView;
@property(nonatomic, retain) DVTBorderedView *scriptBorderedView; // @synthesize scriptBorderedView;
@property(nonatomic, retain) _TtC8Xcode3UI50Xcode3PegasusShellScriptBuildPhaseSourceEditorView *scriptSourceEditorView; // @synthesize scriptSourceEditorView;
@property(nonatomic) BOOL canRemoveOutputFileLists; // @synthesize canRemoveOutputFileLists;
@property(nonatomic) BOOL canRemoveInputFileLists; // @synthesize canRemoveInputFileLists;
@property(nonatomic) BOOL canRemoveOutputFiles; // @synthesize canRemoveOutputFiles;
@property(nonatomic) BOOL canRemoveInputFiles; // @synthesize canRemoveInputFiles;

@end

