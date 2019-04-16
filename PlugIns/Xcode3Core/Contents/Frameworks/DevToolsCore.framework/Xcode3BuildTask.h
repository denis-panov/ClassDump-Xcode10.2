//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEBuildTask.h>

@class NSString, XCWorkQueueCommand, XCWorkQueueCommandInvocation;

@interface Xcode3BuildTask : IDEBuildTask
{
    XCWorkQueueCommand *_command;
    XCWorkQueueCommandInvocation *_commandInvocation;
    CDUnknownBlockType _commandFinishedRunningBlock;
    NSString *_builderUniqueId;
}

+ (id)buildTaskWithIdentifier:(id)arg1 restorePersistedBuildResults:(BOOL)arg2 workQueueCommand:(id)arg3;
+ (void)initialize;
@property(copy) NSString *builderUniqueId; // @synthesize builderUniqueId=_builderUniqueId;
@property(copy) CDUnknownBlockType commandFinishedRunningBlock; // @synthesize commandFinishedRunningBlock=_commandFinishedRunningBlock;
@property(retain) XCWorkQueueCommandInvocation *commandInvocation; // @synthesize commandInvocation=_commandInvocation;
@property(readonly) XCWorkQueueCommand *command; // @synthesize command=_command;
- (void).cxx_destruct;
- (id)description;
- (void)main;
- (BOOL)isWrapperForCommand:(id)arg1;
- (void)addStatisticsDataToStatisticsSection:(id)arg1;
- (id)initWithIdentifier:(id)arg1 restorePersistedBuildResults:(BOOL)arg2 workQueueCommand:(id)arg3;

@end

