//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEAssistantWindowController.h>

@class NSMutableArray;

@interface Xcode3PackageAddPackageAssistantWindowController : IDEAssistantWindowController
{
    NSMutableArray *_completionPreprocessors;
    NSMutableArray *_completionPreprocessorExecutionStack;
}

@property(retain) NSMutableArray *completionPreprocessorExecutionStack; // @synthesize completionPreprocessorExecutionStack=_completionPreprocessorExecutionStack;
@property(retain) NSMutableArray *completionPreprocessors; // @synthesize completionPreprocessors=_completionPreprocessors;
- (void).cxx_destruct;
- (void)goBack:(id)arg1;

@end

