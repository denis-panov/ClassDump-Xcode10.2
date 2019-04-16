//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSRulerView.h>

#import <DVTKit/DVTTextSidebar-Protocol.h>

@class DVTTextAnnotation, NSColor, NSCursor, NSFont, NSMutableIndexSet, NSString, NSTimer, NSTrackingArea;

@interface DVTTextSidebarView : NSRulerView <DVTTextSidebar>
{
    double _sidebarWidth;
    double _foldbarWidth;
    NSColor *_sidebarBackgroundColor;
    NSColor *_sidebarEdgeColor;
    NSColor *_foldbarBackgroundColor;
    NSFont *_lineNumberFont;
    NSColor *_lineNumberTextColor;
    DVTTextAnnotation *_clickedAnnotation;
    DVTTextAnnotation *_currentlyRolledOverAnnotation;
    unsigned long long _origLineNumberOfAnnotationBeingDragged;
    NSTimer *_foldingHoverTimer;
    struct CGPoint _mouseLocationForContextualMenu;
    unsigned long long _hitLineNumberForContextualMenu;
    unsigned short _lineNumberDigitGlyphs[10];
    struct CGSize _lineNumberDigitGlyphAdvancements[10];
    NSTrackingArea *_trackingArea;
    unsigned long long _currentLineNumberReported;
    BOOL _showsSidebar;
    BOOL _showsFoldbar;
    BOOL _drawsLineNumbers;
    BOOL _clickedAnnotationHasTraveled;
    NSMutableIndexSet *_annotationToolTipTags;
    double _annotationToolTipChangeFlag;
}

@property(readonly) unsigned long long lastLineNumberControlClicked; // @synthesize lastLineNumberControlClicked=_hitLineNumberForContextualMenu;
@property(readonly) struct CGPoint lastPointControlClicked; // @synthesize lastPointControlClicked=_mouseLocationForContextualMenu;
@property(copy, nonatomic) NSColor *foldbarBackgroundColor; // @synthesize foldbarBackgroundColor=_foldbarBackgroundColor;
@property(copy, nonatomic) NSColor *sidebarEdgeColor; // @synthesize sidebarEdgeColor=_sidebarEdgeColor;
@property(copy, nonatomic) NSColor *sidebarBackgroundColor; // @synthesize sidebarBackgroundColor=_sidebarBackgroundColor;
@property(copy, nonatomic) NSColor *lineNumberTextColor; // @synthesize lineNumberTextColor=_lineNumberTextColor;
@property(retain, nonatomic) NSFont *lineNumberFont; // @synthesize lineNumberFont=_lineNumberFont;
@property(nonatomic) BOOL drawsLineNumbers; // @synthesize drawsLineNumbers=_drawsLineNumbers;
@property(nonatomic) double sidebarWidth; // @synthesize sidebarWidth=_sidebarWidth;
@property(nonatomic) BOOL showsFoldbar; // @synthesize showsFoldbar=_showsFoldbar;
@property(nonatomic) BOOL showsSidebar; // @synthesize showsSidebar=_showsSidebar;
- (void).cxx_destruct;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (id)_clickedAnnotation:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (BOOL)mouseUpOnAnnotationSidebarMarkerAtPoint:(struct CGPoint)arg1 bounds:(struct CGRect)arg2 event:(id)arg3;
- (BOOL)dragAnnotationSidebarMarkerAtPoint:(struct CGPoint)arg1 draggableBounds:(struct CGRect)arg2 flipped:(BOOL)arg3 event:(id)arg4;
- (void)mouseDownOnAnnotation:(id)arg1;
- (void)getParagraphRect:(struct CGRect *)arg1 firstLineRect:(struct CGRect *)arg2 forLineNumber:(unsigned long long)arg3;
- (struct CGRect)sidebarMarkerRectForTextAnnotation:(id)arg1;
- (id)sidebarMarkerParentView;
- (id)viewForPopover;
- (void)_foldingHovered;
- (void)viewDidMoveToWindow;
- (void)_updateCurrentMouseLineOver:(BOOL)arg1 withEvent:(id)arg2;
- (void)didRemoveAnnotation:(id)arg1;
- (void)_updateCurrentAnnotationRolloverStatusWithEvent:(id)arg1;
- (void)_beginRolloverOnAnnotation:(id)arg1 event:(id)arg2;
- (void)_endRolloverOnAnnotation:(id)arg1 event:(id)arg2;
- (id)lastMarkerControlClicked;
- (id)menuForEvent:(id)arg1;
- (id)annotationAtSidebarPoint:(struct CGPoint)arg1;
- (unsigned long long)lineNumberForPoint:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)prepareContentInRect:(struct CGRect)arg1;
- (void)_scrollToMatchContentView;
- (void)_drawLineNumbersInSidebarRect:(struct CGRect)arg1 foldedIndexes:(unsigned long long *)arg2 count:(unsigned long long)arg3 linesToInvert:(id)arg4 linesToHighlight:(id)arg5 linesToReplace:(id)arg6 textView:(id)arg7 getParaRectBlock:(CDUnknownBlockType)arg8;
- (void)_drawSidebarMarkersForAnnotations:(id)arg1 atIndexes:(id)arg2 textView:(id)arg3 getParaRectBlock:(CDUnknownBlockType)arg4;
- (unsigned long long)_drawFoldingRibbonForLine:(unsigned long long)arg1 foldbarRect:(struct CGRect)arg2 paraRect:(struct CGRect)arg3 lineNumberFontSize:(double)arg4 textView:(id)arg5;
- (struct CGRect)foldbarRect;
- (struct CGRect)lineNumbersRect;
- (struct CGRect)executionCountsRect;
- (struct CGRect)sidebarRect;
@property(readonly) NSCursor *sidebarCursor;
- (void)setLineNumberFont:(id)arg1 size:(double)arg2;
@property double foldbarWidth; // @synthesize foldbarWidth=_foldbarWidth;
- (void)recalculateSidebarWidthToFit;
- (void)_updateRulerThickness;
- (BOOL)acceptsFirstResponder;
- (void)updateTrackingAreas;
- (void)setOrientation:(unsigned long long)arg1;
- (void)_fontAndColorSourceTextSettingsChanged:(id)arg1;
- (void)dealloc;
- (id)initWithScrollView:(id)arg1 orientation:(unsigned long long)arg2;
- (void)_reloadColors;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

