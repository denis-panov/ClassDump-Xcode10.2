//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

@class NSUndoManager;

@interface IBUndoView : NSView
{
    NSUndoManager *undoManager;
}

- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (void)setUndoManager:(id)arg1;
- (BOOL)acceptsFirstResponder;

@end

