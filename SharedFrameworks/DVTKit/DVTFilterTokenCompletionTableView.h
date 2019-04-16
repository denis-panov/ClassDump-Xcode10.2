//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSTableView.h>

@class NSTrackingArea;

@interface DVTFilterTokenCompletionTableView : NSTableView
{
    BOOL _lastMousePositionWasOverList;
    NSTrackingArea *_trackMouseMoveArea;
}

- (void).cxx_destruct;
- (id)_accessibilityDescription;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)_accessibilityWantsToBeList;
- (void)drawRow:(long long)arg1 clipRect:(struct CGRect)arg2;
- (BOOL)_rowIsSelectableByUser:(long long)arg1;
- (long long)_rowFromMouseEvent:(id)arg1;
- (void)_performCancelForCell:(id)arg1;
- (void)_performClickForCell:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)updateTrackingAreas;
- (BOOL)selectionShouldUsePrimaryColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

