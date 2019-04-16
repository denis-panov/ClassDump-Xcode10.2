//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEExplorationContext.h>

@class IDEActivityLogAnalyzerResultMessage, IDEIssue;

@interface IDEAnalyzerResultExplorationContext : IDEExplorationContext
{
    IDEActivityLogAnalyzerResultMessage *_message;
    IDEIssue *_step;
}

@property(readonly) IDEIssue *step; // @synthesize step=_step;
@property(readonly) IDEActivityLogAnalyzerResultMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (int)explorationType;
- (id)initWithAnalyzerResultMessage:(id)arg1 stepIssue:(id)arg2;

@end

