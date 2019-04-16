//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DevToolsCore/IDEBuildable-Protocol.h>

@class DVTStackBacktrace, IDEBuildParameters, IDEEntityIdentifier, NSArray, NSSet, NSString, Xcode3Target;
@protocol IDEBlueprint;

@interface Xcode3TargetBuildable : NSObject <IDEBuildable>
{
    NSString *_identifier;
    Xcode3Target *_blueprint;
    IDEEntityIdentifier *_entityIdentifier;
    IDEBuildParameters *_cachedBuildParameters;
    NSArray *_cachedImplicitDependencies;
    NSArray *_cachedReturningMessages;
    id _cacheInvalidationToken_BlueprintsBulkChange;
    id _cacheInvalidationToken_BlueprintsContainerEdited;
}

+ (unsigned long long)assertionBehaviorAfterEndOfEventForSelector:(SEL)arg1;
+ (void)initialize;
@property(readonly) id <IDEBlueprint> blueprint; // @synthesize blueprint=_blueprint;
- (void).cxx_destruct;
- (id)createBuilderForBuildCommand:(long long)arg1 withBuildTaskQueueSet:(id)arg2 parameters:(id)arg3 buildOnlyTheseFiles:(id)arg4 restorePersistedBuildResults:(BOOL)arg5 withManager:(id)arg6;
- (void)resetCachedImplicitDependencies;
- (id)implicitDependenciesForBuildParameters:(id)arg1 executionEnvironment:(id)arg2 returningMessages:(id *)arg3;
- (id)calculateImplicitDependenciesForBuildParameters:(id)arg1 executionEnvironment:(id)arg2 returningMessages:(id *)arg3;
- (id)directDependencies;
- (id)productTypeWithBuildParameters:(id)arg1;
@property(readonly, copy) NSString *productTypeIdentifier;
@property(readonly) NSString *productModuleName;
@property(readonly) NSSet *namesOfLinkedBinaries;
- (id)orderedRecursiveDependenciesIncludingSelf:(BOOL)arg1;
- (id)toolSearchPathWithBuildParameters:(id)arg1;
- (id)allBuildSettingNamesWithBuildParameters:(id)arg1;
- (id)absolutePathByEvaluatingBuildSettingExpressionString:(id)arg1 withBuildParameters:(id)arg2;
- (id)stringByEvaluatingBuildSettingExpressionString:(id)arg1 withBuildParameters:(id)arg2;
- (id)evaluatedStringListValueForBuildSetting:(id)arg1 withBuildParameters:(id)arg2;
- (id)evaluatedStringValueForBuildSetting:(id)arg1 withBuildParameters:(id)arg2;
- (Class)buildOperationManagerClass;
@property(readonly, copy) IDEEntityIdentifier *entityIdentifier;
@property(readonly, copy) NSString *buildableIdentifier;
@property(readonly, copy) NSString *legacyIdentifier;
@property(readonly) NSString *toolTip;
@property(readonly) NSString *displayName;
@property(readonly) Xcode3Target *xcode3Target;
@property(readonly, copy) NSString *description;
- (void)primitiveInvalidate;
- (id)initForBlueprint:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

