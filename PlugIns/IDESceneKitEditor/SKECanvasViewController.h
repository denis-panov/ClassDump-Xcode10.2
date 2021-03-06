//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEViewController.h>

#import <IDESceneKitEditor/NSMenuDelegate-Protocol.h>

@class DVTBorderedView, DVTGradientImageButton, DVTNotificationToken, DVTObservingToken, DVTScopeBarView, NSArrayController, NSButton, NSPopUpButton, NSProgressIndicator, NSString, NSView, SCNNode, SCNScene, SKEDisplayOptionPopupController, SKEPopUpButton, SKESceneEditor, SKESceneView;

@interface SKECanvasViewController : IDEViewController <NSMenuDelegate>
{
    SKESceneView *_sceneView;
    DVTScopeBarView *_scopeBarView;
    DVTBorderedView *_bottomBarView;
    NSProgressIndicator *_loadingProgress;
    NSView *_runtimeSceneView;
    NSButton *_export;
    NSButton *_reset;
    NSView *_loadingView;
    id _observer;
    SKEDisplayOptionPopupController *_displayOptionController;
    SCNScene *_editScene;
    SCNNode *_savedPointOfView;
    NSPopUpButton *_povPopUpButton;
    NSArrayController *_povArrayController;
    SKEPopUpButton *_cameraModePopUp;
    DVTGradientImageButton *_playPauseResumeButton;
    DVTGradientImageButton *_stopButton;
    DVTObservingToken *_documentControllerSelectedNodesObservingToken;
    DVTNotificationToken *_documentChangedToken;
    DVTObservingToken *_debugOptionsChangedToken;
    DVTObservingToken *_jitteringChangedToken;
    DVTObservingToken *_defaultLightingChangedToken;
    DVTObservingToken *_sceneViewAuthoringDisplayChangedToken;
    // Error parsing type: {?="columns"[4]}, name: _perspectiveTransform
    SKESceneEditor *_sceneEditor;
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
@property(retain, nonatomic) SKESceneEditor *sceneEditor; // @synthesize sceneEditor=_sceneEditor;
@property(readonly, nonatomic) SKESceneView *sceneView; // @synthesize sceneView=_sceneView;
- (void).cxx_destruct;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (id)document;
- (void)onExportScene:(id)arg1;
- (void)onResetScene:(id)arg1;
- (void)setCurrentTime:(double)arg1;
- (double)currentTime;
- (double)endTime;
- (double)startTime;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)toggleSelectionMode:(id)arg1;
- (void)editingSpaceDidChange:(id)arg1;
- (void)manipulatorModeDidChange:(id)arg1;
- (void)authoringDisplayMaskDidChange:(id)arg1;
- (void)authoringDisplayMaskToggleTag:(long long)arg1;
- (void)toggleDefaultLighting:(id)arg1;
- (void)stopDidChange:(id)arg1;
- (void)playPauseDidChange:(id)arg1;
- (void)toggleJittering:(id)arg1;
- (void)_updateManipulation;
- (void)setSelectionModeIsSurroundToSelect:(BOOL)arg1;
- (BOOL)selectionModeIsSurroundToSelect;
- (void)setEditingSpace:(long long)arg1;
- (long long)editingSpace;
- (void)setAuthoringDisplayMask:(long long)arg1;
- (void)updateAuthoringDisplayMaskMenu:(id)arg1;
- (void)updateAuthoringDisplayMaskMenu:(id)arg1 withMask:(long long)arg2;
- (long long)authoringDisplayMask;
- (void)setSceneIsPlaying:(BOOL)arg1;
- (void)updatePlayerButtonsState;
- (BOOL)sceneIsPlaying;
- (BOOL)enableAutomaticDefaultLighting;
- (void)setEnableAutomaticDefaultLighting:(BOOL)arg1;
- (BOOL)autoenablesDefaultLighting;
- (id)cloneScene:(id)arg1;
- (void)makeSceneViewTakeBackgroundColorOfScene;
- (void)manipulatorOptionsButtonClicked:(id)arg1;
- (void)displayButtonClicked:(id)arg1;
- (id)scopeBarViewDragRectsForView:(id)arg1;
- (void)aspectRatioDidChange:(id)arg1;
- (void)cameraModeDidChange:(id)arg1;
- (void)updateBottomBarColorSchemeTheme;
- (void)configureScopeBarView;
- (id)toolbarImageNamed:(id)arg1;
@property(readonly, nonatomic) DVTScopeBarView *scopeBarView;
- (void)documentControllerSelectedNodesDidChange:(id)arg1;
- (void)primitiveInvalidate;
- (void)updateSelectedPointOfView;
- (void)menuNeedsUpdate:(id)arg1;
- (void)sceneDidChange;
- (void)hideLoadingIndicator;
- (void)userDidSelectCamera:(id)arg1;
- (void)userDidSelectAuthCamera:(id)arg1;
- (void)updateRuntimeHeader;
- (void)takeFocus;
- (void)viewDidLoad;
- (void)updateResetButton;
- (void)awakeFromNib;
- (void)setButtonTitleFor:(id)arg1 toString:(id)arg2 withColor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

