//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <Xcode3UI/NSObject-Protocol.h>

@class IDEWorkspace, NSArray;
@protocol IDEBlueprint;

@protocol Xcode3InfoEditorListContentProvider <NSObject>
@property(readonly) NSArray *listContents;
- (id)initWithBlueprint:(id <IDEBlueprint>)arg1 workspace:(IDEWorkspace *)arg2;
@end

