//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

@class DTTimelineGraph, NSMutableArray;

__attribute__((visibility("hidden")))
@interface _DTTimelineDocumentView : NSView
{
    DTTimelineGraph *_timelineGraph;
    NSMutableArray *_childrenAccessibilityRows;
}

@property(retain, nonatomic) NSMutableArray *childrenAccessibilityRows; // @synthesize childrenAccessibilityRows=_childrenAccessibilityRows;
@property(nonatomic) __weak DTTimelineGraph *timelineGraph; // @synthesize timelineGraph=_timelineGraph;
- (void).cxx_destruct;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)rebuildAccessibilitySelection;
- (void)rebuildAccessibility;
- (id)accessibilityHelp;
- (void)setAccessibilitySelectedRows:(id)arg1;
- (id)accessibilitySelectedRows;
- (id)accessibilityLabel;
- (id)accessibilityIdentifier;
- (id)accessibilityTitleUIElement;
- (id)accessibilityRole;
- (id)accessibilityContents;
- (long long)accessibilityColumnCount;
- (long long)accessibilityRowCount;
- (id)accessibilityRows;
- (id)accessibilityChildren;
- (BOOL)isAccessibilitySelectorAllowed:(SEL)arg1;
- (BOOL)isAccessibilityElement;

@end

