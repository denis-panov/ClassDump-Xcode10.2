//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/XCLogItemAdapter.h>

@interface XCLogMessageAdapter : XCLogItemAdapter
{
}

- (struct CGRect)dataNode:(id)arg1 frameOfOutlineCellAtRow:(long long)arg2 defaultFrame:(struct CGRect)arg3;
- (void)_drawExpandedTitleInFrame:(struct CGRect)arg1 selected:(BOOL)arg2 forDataNode:(id)arg3;
- (double)heightOfRowForDataNode:(id)arg1;
- (BOOL)dataNode:(id)arg1 handleMouseDown:(id)arg2 forOutlineView:(id)arg3 inRow:(long long)arg4 atRelativeLocation:(struct CGPoint)arg5;
- (void)highlightMessageForNode:(id)arg1;
- (id)dataNodePersistentObjectComponent:(id)arg1;
- (id)dataNode:(id)arg1 toolTipForTableColumn:(id)arg2;
- (id)subitemsForDataNode:(id)arg1;
- (id)textColorForDataNode:(id)arg1;
- (BOOL)supportsTextExpansionAtMessageLevelForDataNode:(id)arg1;
- (BOOL)supportsTextExpansionForDataNode:(id)arg1;
- (BOOL)expandableTitleForDataNode:(id)arg1;
- (id)titleForDataNode:(id)arg1;

@end

