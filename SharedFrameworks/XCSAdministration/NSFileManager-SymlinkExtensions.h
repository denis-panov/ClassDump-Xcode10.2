//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (SymlinkExtensions)
- (BOOL)forceCreateSymbolicLinkAtPath:(id)arg1 withDestinationPath:(id)arg2 error:(id *)arg3;
- (BOOL)symbolicLinkExistsAtPath:(id)arg1;
- (BOOL)fileExistsAtPath:(id)arg1 isSymbolicLink:(char *)arg2;
@end
