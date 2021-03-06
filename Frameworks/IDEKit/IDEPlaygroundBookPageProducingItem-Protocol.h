//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/NSObject-Protocol.h>

@protocol IDEStructureEditingWorkspaceTabContext;

@protocol IDEPlaygroundBookPageProducingItem <NSObject>
- (void)createPlaygroundCutsceneAtIndex:(unsigned long long)arg1 inContext:(id <IDEStructureEditingWorkspaceTabContext>)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
- (void)createPlaygroundPageAtIndex:(unsigned long long)arg1 inContext:(id <IDEStructureEditingWorkspaceTabContext>)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
@end

