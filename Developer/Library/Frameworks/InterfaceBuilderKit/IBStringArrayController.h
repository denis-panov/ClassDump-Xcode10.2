//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSArrayController.h>

@class NSTableView;

@interface IBStringArrayController : NSArrayController
{
    id _inspectorContent;
    NSTableView *_editingView;
}

- (id)content;
- (void)setContent:(id)arg1;
- (void)removeObjectsAtArrangedObjectIndexes:(id)arg1;
- (void)addObject:(id)arg1;
- (id)arrangeObjects:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)newObject;

@end
