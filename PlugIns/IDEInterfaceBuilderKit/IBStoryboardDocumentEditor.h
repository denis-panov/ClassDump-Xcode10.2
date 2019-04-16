//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/IBAbstractDocumentEditor.h>

@class DVTDelayedInvocation, DVTNotificationToken, IBCancellationToken;

@interface IBStoryboardDocumentEditor : IBAbstractDocumentEditor
{
    DVTNotificationToken *_didAddConnectionObserver;
    DVTNotificationToken *_willRemoveConnectionObserver;
    DVTNotificationToken *_didRemoveConnectionObserver;
    DVTNotificationToken *_didReorderConnectionObserver;
    DVTNotificationToken *_didBecomeKeyObservingToken;
    DVTNotificationToken *_didBecomeMainObservingToken;
    IBCancellationToken *_segueSourceTargetIndicatorCancellationToken;
    DVTDelayedInvocation *_segueSourceHighlightInvocation;
}

- (void).cxx_destruct;
- (void)refactorToStoryboardPrimitive:(id)arg1;
- (void)refactorToStoryboard:(id)arg1;
- (id)primarySceneObjectsForSelectedObjects;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)typeForTopLevelPastingWithPasteboard:(id)arg1;
- (void)selectionProviderWasClicked:(id)arg1;
- (BOOL)memberCanBeSelected:(id)arg1;
- (void)deselectMembers:(id)arg1;
- (void)setCurrentSelectedItems:(id)arg1;
- (id)canvasViewController;
- (Class)structureViewControllerClass;
- (Class)canvasViewControllerClass;
- (void)unregisterWithDocument;
- (void)registerWithDocument;
- (void)recordUsageStatisticsWithReport:(id)arg1;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (id)document;

@end

