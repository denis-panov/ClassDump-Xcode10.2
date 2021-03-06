//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DevToolsCore/Xcode3TargetCoordinator.h>

#import <Xcode3UI/IDELinkedFrameworksCoordination-Protocol.h>

@class DVTStackBacktrace, NSString, Xcode3BuildPhase;

@interface Xcode3TargetLinkedFrameworksCoordinator : Xcode3TargetCoordinator <IDELinkedFrameworksCoordination>
{
}

- (BOOL)insertItemsIntoGroup:(id)arg1 atRow:(unsigned long long)arg2 structureEditingTarget:(id)arg3 contextConfigurationBlock:(CDUnknownBlockType)arg4;
- (BOOL)hasLinkedFrameworkWithName:(id)arg1;
- (void)unlinkFrameworkWithName:(id)arg1;
- (BOOL)linkFrameworkWithName:(id)arg1 error:(id *)arg2;
- (id)projectRootGroup;
@property(readonly) Xcode3BuildPhase *buildPhase;
- (id)initWithTarget:(id)arg1 buildConfiguration:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

