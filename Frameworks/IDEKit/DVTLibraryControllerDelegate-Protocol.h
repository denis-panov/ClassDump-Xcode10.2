//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/NSObject-Protocol.h>

@class DVTLibraryController, NSArray, NSEvent;

@protocol DVTLibraryControllerDelegate <NSObject>

@optional
- (void)libraryControllerDidCancel:(DVTLibraryController *)arg1;
- (void)libraryController:(DVTLibraryController *)arg1 didFinishDraggingAssets:(NSArray *)arg2;
- (void)libraryController:(DVTLibraryController *)arg1 didDepositAssets:(NSArray *)arg2 withEvent:(NSEvent *)arg3;
- (void)libraryController:(DVTLibraryController *)arg1 didContinueDraggingAssets:(NSArray *)arg2;
- (void)libraryController:(DVTLibraryController *)arg1 didBeginDraggingAssets:(NSArray *)arg2 withMouseDown:(NSEvent *)arg3;
- (BOOL)libraryControllerShouldSlideBackFailedDrags:(DVTLibraryController *)arg1;
@end

