//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

@class NSColor, NSEvent, XCSUIBotSummaryStackedBarGraph, XCSUIBotSummaryStackedBarGraphColumn;

@protocol XCSUIBotSummaryStackedBarGraphDelegate
- (NSColor *)emptyColumnColor;
- (void)mouseExitedGraph:(XCSUIBotSummaryStackedBarGraph *)arg1 event:(NSEvent *)arg2;
- (void)mouseClickedOnGraph:(XCSUIBotSummaryStackedBarGraph *)arg1 column:(XCSUIBotSummaryStackedBarGraphColumn *)arg2 event:(NSEvent *)arg3;
- (void)mouseMovedOverGraph:(XCSUIBotSummaryStackedBarGraph *)arg1 column:(XCSUIBotSummaryStackedBarGraphColumn *)arg2 event:(NSEvent *)arg3;
@end
