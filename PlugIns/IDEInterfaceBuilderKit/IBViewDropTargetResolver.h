//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/IBDropTargetResolver.h>

@class NSString, NSView;

@interface IBViewDropTargetResolver : IBDropTargetResolver
{
}

- (BOOL)canAcceptDragInfo:(id)arg1;
@property(readonly) NSString *viewPasteboardType;
@property(readonly) NSView *ibDesignableContentView;
- (id)editorView;
@property(readonly) NSView *editedView;

@end

