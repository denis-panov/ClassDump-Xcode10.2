//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <InterfaceBuilderKit/IBCollapsableView.h>

@interface IBInspectorSliceView : IBCollapsableView
{
    BOOL drawsTrailingLine;
}

+ (id)collapsableViewWithTitle:(id)arg1 andContentView:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)inspectorSliceTitleViewExpansionStateChanged:(id)arg1;
- (void)setExpanded:(BOOL)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleTextColor:(id)arg1;
- (void)setMaximumTitleWidth:(double)arg1;
- (void)setTitleDrawsBackground:(BOOL)arg1;
- (void)setBold:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)enabled;
- (id)sliceTitleView;
- (void)setDrawsTrailingLine:(BOOL)arg1;
- (void)dealloc;

@end

