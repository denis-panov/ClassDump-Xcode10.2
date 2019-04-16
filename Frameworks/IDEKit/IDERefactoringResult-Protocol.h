//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/NSObject-Protocol.h>

@class DVTFilePath, NSArray, NSString;

@protocol IDERefactoringResult <NSObject>
- (NSString *)resultNewFileName;
- (DVTFilePath *)resultTempFilePath;
- (DVTFilePath *)resultFilePath;
- (BOOL)resultIsEditable;

@optional
- (NSArray *)resultReferencedFiles;
@end

