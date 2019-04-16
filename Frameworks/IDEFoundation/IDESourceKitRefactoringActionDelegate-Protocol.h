//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/NSObject-Protocol.h>

@class IDESourceKitNotificationRefactoringProgressUpdated, IDESourceKitNotificationRefactoringRenameRangesFound, IDESourceKitNotificationRefactoringStateChanged, IDESourceKitNotificationRefactoringUnhandledURLs;

@protocol IDESourceKitRefactoringActionDelegate <NSObject>
- (void)refactoringUnhandledURLs:(IDESourceKitNotificationRefactoringUnhandledURLs *)arg1;
- (void)refactoringRenameRangesFound:(IDESourceKitNotificationRefactoringRenameRangesFound *)arg1;
- (void)refactoringProgressUpdated:(IDESourceKitNotificationRefactoringProgressUpdated *)arg1;
- (void)refactoringStateChanged:(IDESourceKitNotificationRefactoringStateChanged *)arg1;
- (long long)refactoringActionToken;
- (long long)indexerToken;
@end
