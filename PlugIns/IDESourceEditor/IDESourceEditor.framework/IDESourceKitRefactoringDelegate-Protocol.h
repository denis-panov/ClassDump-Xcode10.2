//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

@class NSArray, NSURL;
@protocol IDESourceKitRefactoringFileEdits, IDESourceKitRefactoringFileRenameRanges;

@protocol IDESourceKitRefactoringDelegate
- (void)unhandledURL:(NSURL *)arg1 symbols:(NSArray *)arg2;
- (void)renameRangesFound:(id <IDESourceKitRefactoringFileRenameRanges>)arg1;
- (void)fileChanged:(id <IDESourceKitRefactoringFileEdits>)arg1;
- (void)finished;
- (void)started;
@end

