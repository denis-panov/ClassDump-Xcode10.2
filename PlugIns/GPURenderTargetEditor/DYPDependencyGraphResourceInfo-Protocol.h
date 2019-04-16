//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GPURenderTargetEditor/NSObject-Protocol.h>

@class NSArray, NSSet, NSString;
@protocol DYPDependencyGraphEncoderNode, DYPDependencyGraphResourceInfo;

@protocol DYPDependencyGraphResourceInfo <NSObject>
@property(readonly, nonatomic) unsigned long long allocationSize;
@property(readonly, nonatomic) NSString *label;
@property(readonly, nonatomic) unsigned long long objectID;
@property(readonly, nonatomic) BOOL isUnused;
@property(readonly, nonatomic) unsigned long long resourceInfoType;
- (NSArray *)resourceTransitionEdgesForEdgeToEncoder:(id <DYPDependencyGraphEncoderNode>)arg1;
- (NSSet *)outEdges;
- (id <DYPDependencyGraphResourceInfo>)resourceInfoForParentView;
@end

