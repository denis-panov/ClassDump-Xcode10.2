//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSTableCellView.h>

@class GPUShaderDebuggerSession, NSTextField, _TtC21GPURenderTargetEditor21GPUResourceItemButton, _TtC21GPURenderTargetEditor23GPUTraceSourceSubEditor;
@protocol DYPShaderDebuggerVariableSnapshotNode;

__attribute__((visibility("hidden")))
@interface _TtC21GPURenderTargetEditor41GPUShaderDebuggerVariableSnapshotCellView : NSTableCellView
{
    // Error parsing type: , name: descriptionView
    // Error parsing type: , name: linkView
    // Error parsing type: , name: editor
    // Error parsing type: , name: session
    // Error parsing type: , name: variableSnapshotNode
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, retain) id <DYPShaderDebuggerVariableSnapshotNode> variableSnapshotNode; // @synthesize variableSnapshotNode;
@property(nonatomic, retain) GPUShaderDebuggerSession *session; // @synthesize session;
@property(nonatomic, retain) _TtC21GPURenderTargetEditor23GPUTraceSourceSubEditor *editor; // @synthesize editor;
@property(nonatomic, retain) _TtC21GPURenderTargetEditor21GPUResourceItemButton *linkView; // @synthesize linkView;
@property(nonatomic, retain) NSTextField *descriptionView; // @synthesize descriptionView;

@end

