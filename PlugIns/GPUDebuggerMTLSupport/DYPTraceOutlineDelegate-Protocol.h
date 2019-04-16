//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GPUDebuggerMTLSupport/NSObject-Protocol.h>

@class NSSet, NSString;
@protocol DYPTraceOutlineVisitor;

@protocol DYPTraceOutlineDelegate <NSObject>
- (Class)outlineVisitorFilterItemClass:(id <DYPTraceOutlineVisitor>)arg1;
- (void)outlineVisitor:(id <DYPTraceOutlineVisitor>)arg1 createExecuteCommandWithLabel:(NSString *)arg2 fromFunction:(shared_ptr_2d3f6817)arg3 parentFunction:(shared_ptr_2d3f6817)arg4 subCommandIndex:(unsigned long long)arg5 filterItems:(NSSet *)arg6;
- (void)outlineVisitor:(id <DYPTraceOutlineVisitor>)arg1 pushExecuteCommandsWithLabel:(NSString *)arg2;
- (void)outlineVisitor:(id <DYPTraceOutlineVisitor>)arg1 addPipelineStateToCurrentDisplayable:(unsigned long long)arg2;
- (void)outlineVisitor:(id <DYPTraceOutlineVisitor>)arg1 createDisplayableOfType:(long long)arg2 fromFunction:(struct Function *)arg3 disclosureHandler:(void (^)(struct Function *))arg4;
- (void)outlineVisitor:(id <DYPTraceOutlineVisitor>)arg1 createDisplayableOfType:(long long)arg2 fromFunction:(struct Function *)arg3 filterItems:(NSSet *)arg4 disclosureHandler:(void (^)(struct Function *))arg5;
- (void)outlineVisitor:(id <DYPTraceOutlineVisitor>)arg1 createAPIItemFromFunction:(struct Function *)arg2 disclosureHandler:(void (^)(struct Function *))arg3;
- (void)outlineVisitor:(id <DYPTraceOutlineVisitor>)arg1 pushDisclosureLevelWithLabel:(NSString *)arg2 forObjectID:(unsigned long long)arg3 ofType:(unsigned int)arg4;
- (void)outlineVisitorPopDisclosureLevel:(id <DYPTraceOutlineVisitor>)arg1;
@end

