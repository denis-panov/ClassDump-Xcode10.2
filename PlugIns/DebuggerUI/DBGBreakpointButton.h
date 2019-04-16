//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSButton.h>

#import <DebuggerUI/DVTTableCellViewStatusView-Protocol.h>

@class IDEBreakpoint, NSString;

@interface DBGBreakpointButton : NSButton <DVTTableCellViewStatusView>
{
    BOOL _breakpointsActivated;
    BOOL _breakpointEnabled;
    BOOL _breakpointModified;
    CDUnknownBlockType _commandOptionClickHander;
    IDEBreakpoint *_breakpoint;
    NSString *_breakpointModifiedDescription;
    struct CGSize _breakpointImageSize;
}

@property(retain, nonatomic) NSString *breakpointModifiedDescription; // @synthesize breakpointModifiedDescription=_breakpointModifiedDescription;
@property(nonatomic) BOOL breakpointModified; // @synthesize breakpointModified=_breakpointModified;
@property(nonatomic) BOOL breakpointEnabled; // @synthesize breakpointEnabled=_breakpointEnabled;
@property(nonatomic) BOOL breakpointsActivated; // @synthesize breakpointsActivated=_breakpointsActivated;
@property(nonatomic) struct CGSize breakpointImageSize; // @synthesize breakpointImageSize=_breakpointImageSize;
@property __weak IDEBreakpoint *breakpoint; // @synthesize breakpoint=_breakpoint;
@property(copy) CDUnknownBlockType commandOptionClickHander; // @synthesize commandOptionClickHander=_commandOptionClickHander;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)mouseDown:(id)arg1;
- (void)_updateImage;
- (void)viewDidChangeEffectiveAppearance;
- (struct CGSize)intrinsicContentSize;
- (id)_defaultToolTip;
- (id)initWithBreakpointImageSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly) BOOL hasDisplayableStatus;
@property(nonatomic) long long tableViewRowSizeStyle;

@end

