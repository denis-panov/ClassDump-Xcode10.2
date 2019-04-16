//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSImage, NSPasteboard, NSURL, NSView, NSWindow;

@protocol NSDraggingInfo <NSObject>
@property(readonly) long long springLoadingHighlight;
@property long long numberOfValidItemsForDrop;
@property BOOL animatesToDestination;
@property long long draggingFormation;
@property(readonly) long long draggingSequenceNumber;
@property(readonly) id draggingSource;
@property(readonly) NSPasteboard *draggingPasteboard;
@property(readonly) NSImage *draggedImage;
@property(readonly) struct CGPoint draggedImageLocation;
@property(readonly) struct CGPoint draggingLocation;
@property(readonly) unsigned long long draggingSourceOperationMask;
@property(readonly) NSWindow *draggingDestinationWindow;
- (void)resetSpringLoading;
- (void)enumerateDraggingItemsWithOptions:(unsigned long long)arg1 forView:(NSView *)arg2 classes:(NSArray *)arg3 searchOptions:(NSDictionary *)arg4 usingBlock:(void (^)(NSDraggingItem *, long long, char *))arg5;
- (NSArray *)namesOfPromisedFilesDroppedAtDestination:(NSURL *)arg1;
- (void)slideDraggedImageTo:(struct CGPoint)arg1;
@end

