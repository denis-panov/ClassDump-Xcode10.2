//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <InterfaceBuilderKit/IBWindowController.h>

@class IBEditor, IBEditorScrollView, IBFieldEditor, IBHitDetectionMap, IBMenuValidationProxy, IBNavigationMenuController, NSEvent, NSWindow;

@interface IBEditorWindowController : IBWindowController
{
    id editedObject;
    IBFieldEditor *fieldEditor;
    IBEditor *activeEditor;
    NSEvent *lastMouseDown;
    NSEvent *lastMouseUp;
    IBHitDetectionMap *cursorMap;
    IBHitDetectionMap *decoratorActionMap;
    IBMenuValidationProxy *validationProxy;
    IBNavigationMenuController *navigationMenuController;
    id lastObjectSelectedWithModifedClick;
    BOOL blockMouseEventsTillMouseUp;
    BOOL trackingWindowGeometry;
    BOOL actuallyTrackedWindowGeometry;
    BOOL isLiveResizing;
    BOOL cursorRectsArePendingValidation;
    BOOL shouldSelectDeepestObjectOnNextMouseUp;
    BOOL shouldPruneToSingleSelectionOnNextMouseUp;
    NSWindow *mainWindowBeforeLastMouseDown;
    BOOL wasMainWindowBeforeProcessingEvent;
    BOOL wasMainWindowBeforeLastMouseDown;
    BOOL inDragOperation;
    BOOL editorDidAcceptDragInfo;
    BOOL didOpen;
    IBEditorScrollView *editorViewManagingScrollView;
}

- (void)showSelectionMenuForEvent:(id)arg1;
- (id)navigationMenuController;
- (void)invalidateCursorRects;
- (void)unscheduleCursorRectValidation;
- (void)validateCursorRects:(id)arg1;
- (void)addDecoratorActionRect:(struct CGRect)arg1 forEditor:(id)arg2;
- (void)addDecoratorActionRect:(struct CGRect)arg1 withOrderingKey:(id)arg2;
- (void)addCursorRect:(struct CGRect)arg1 cursor:(id)arg2 forObject:(id)arg3;
- (void)userAddCursorRect:(struct CGRect)arg1 cursor:(id)arg2 forView:(id)arg3;
- (void)resetCursorRects;
- (void)rebuildCursorRects;
- (void)flagsChanged:(id)arg1;
- (void)forwardEvent:(id)arg1;
- (BOOL)interceptEvent:(id)arg1;
- (BOOL)isWindowAnAncestorOfOrItselfTheMainWindow;
- (id)mainWindowBeforeLastMouseDown;
- (void)setMainWindowBeforeLastMouseDown:(id)arg1;
- (BOOL)actionAreaInterceptedEvent:(id)arg1;
- (BOOL)interceptDecoratorActionEvent:(id)arg1;
- (void)cursorUpdate:(id)arg1;
- (void)cursorUpdateWithPoint:(struct CGPoint)arg1;
- (BOOL)shouldInterceptEvent:(id)arg1 eventWasForWindow:(char *)arg2;
- (void)openEditorWithMouseEvent:(id)arg1;
- (void)selectNextObjectWithEvent:(id)arg1;
- (BOOL)wouldObjectSelect:(id)arg1 onLeftMouseDownWithModifierFlags:(unsigned long long)arg2;
- (void)openEditorWithSingleMouseDown:(id)arg1;
- (CDStruct_7610d3a3)activationActionForClickObject:(id)arg1 withModifierFlags:(unsigned long long)arg2 isRightMouse:(BOOL)arg3;
- (id)intendedTargetInCurrentContextStartingFromObject:(id)arg1;
- (void)openEditorWithDoubleLeftMouseDown:(id)arg1;
- (id)firstInitiallySelectableObjectAtOrAbove:(id)arg1;
- (id)openedEditorForObject:(id)arg1;
- (id)windowTitleForDocumentDisplayName:(id)arg1;
- (BOOL)openEditorWithKeyEvent:(id)arg1;
- (id)nextTabTargetRelativeToObject:(id)arg1 forEvent:(id)arg2;
- (id)tabOrderedChidren;
- (BOOL)isEventForFieldEditor:(id)arg1;
- (BOOL)isEventForWindow:(id)arg1;
- (BOOL)isPointInScrollArea:(struct CGPoint)arg1;
- (BOOL)isPointInEditableArea:(struct CGPoint)arg1;
- (BOOL)isPointInToolbar:(struct CGPoint)arg1;
- (BOOL)isPointInContentArea:(struct CGPoint)arg1;
- (id)themeView;
- (void)windowWillClose:(id)arg1;
- (void)windowFinishedLiveResizing;
- (void)windowStartedLiveResizing;
- (BOOL)windowShouldZoom:(id)arg1 toFrame:(struct CGRect)arg2;
- (id)transformToWindowSpaceFromTransformToUserSpace:(id)arg1;
- (id)transformToUserSpaceFromTransformToWindowSpace:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (void)dragTarget:(id)arg1 didAcceptDraggedObjects:(id)arg2 fromDragInfo:(id)arg3;
- (id)dropTargetForDragInfo:(id)arg1 allowedDraggingOperations:(unsigned long long *)arg2;
- (BOOL)shouldBlockDragsUntilHoldFromDragginEntered;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)setLastDragTarget:(id)arg1 fromDraggingInfo:(id)arg2;
- (void)setInDragOperation:(BOOL)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)pasteExcludingConnections:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)delete:(id)arg1;
- (BOOL)isObjectRemovalValid;
- (id)pasteTarget;
- (id)cutCopyDeleteDuplicateTarget;
- (void)selectNone:(id)arg1;
- (void)changeColor:(id)arg1;
- (void)changeFont:(id)arg1;
- (void)tellEditorsViewWillDraw;
- (void)drawEditorStack;
- (void)tellEditorViewWillDraw:(id)arg1;
- (void)drawEditorStack:(id)arg1;
- (void)trackMeasurementsWithEvent:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)toggleMeasurementLinesFromObjects:(id)arg1 toObject:(id)arg2 withEvent:(id)arg3;
- (void)makeSureOverlayIsOnTop;
- (void)stringEditorView:(id)arg1 didEndEditing:(id)arg2;
- (void)editStringValue:(id)arg1 forEditor:(id)arg2 inView:(id)arg3 withCell:(id)arg4 inRect:(struct CGRect)arg5 userInfo:(id)arg6;
- (void)configureFieldEditor:(id)arg1 forEditingStringValue:(id)arg2 forEditor:(id)arg3 inView:(id)arg4 withCell:(id)arg5 inRect:(struct CGRect)arg6 userInfo:(id)arg7;
- (id)currentlyOpenFieldEditorForEditor:(id)arg1 userInfo:(id *)arg2;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)closeFieldEditor;
- (void)cascade;
- (void)windowDidMove:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)windowDidResignMain:(id)arg1;
- (void)willClose;
- (void)didOpen;
- (void)deactivate;
- (void)activate;
- (void)willChangeEditorStack;
- (void)selectPreviousSibling:(id)arg1;
- (void)selectNextSibling:(id)arg1;
- (void)selectChild:(id)arg1;
- (void)selectParent:(id)arg1;
- (BOOL)canSelectSibling;
- (BOOL)canSelectChild;
- (BOOL)canSelectParent;
- (void)selectionDidChange;
- (id)connectionEndPointsForEvent:(id)arg1;
- (id)springLoadedObjectAtPoint:(struct CGPoint)arg1;
- (void)setDocumentEdited:(BOOL)arg1;
- (void)deselectObjects:(id)arg1;
- (id)editors;
- (id)editedObjects;
- (id)selection;
- (void)setWindow:(id)arg1;
- (void)setDocument:(id)arg1;
- (id)overlayView;
- (BOOL)shouldUpdateColorPanel;
- (id)selectedColorsForColorPanel;
- (id)selectedFontsForFontPanel;
- (id)lastMouseUp;
- (void)setLastMouseUp:(id)arg1;
- (id)lastMouseDown;
- (void)setLastMouseDown:(id)arg1;
- (id)editorView;
- (void)setActiveEditor:(id)arg1;
- (id)baseEditor;
- (id)activeEditor;
- (id)objects;
- (BOOL)wouldEditObject:(id)arg1;
- (id)editedObject;
- (BOOL)isLiveResizing;
@property(retain) IBEditorScrollView *editorViewManagingScrollView; // @dynamic editorViewManagingScrollView;
- (void)setLastObjectSelectedWithModifedClick:(id)arg1;
- (id)lastObjectSelectedWithModifedClick;
- (void)dealloc;
- (id)initWithWindow:(id)arg1 andObject:(id)arg2;

@end

