//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GPUDebuggerKit/NSObject-Protocol.h>

@protocol DYPShaderDebuggerExecutionHistoryNode, DYPShaderDebuggerVariableSnapshotNode;

@protocol DYPShaderDebuggerVariableSnapshot <NSObject>
@property(nonatomic, readonly) unsigned long long eventId;
@property(nonatomic, readonly) id <DYPShaderDebuggerVariableSnapshotNode> rootNode;
@property(nonatomic, readonly) unsigned long long addressSpace;
@property(nonatomic, readonly) id <DYPShaderDebuggerExecutionHistoryNode> node;
@end

