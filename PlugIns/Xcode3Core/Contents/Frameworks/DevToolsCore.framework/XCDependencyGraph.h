//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSSet, PBXTargetBuildContext, XCDependencyNode;

@interface XCDependencyGraph : NSObject
{
    PBXTargetBuildContext *_buildContext;
    NSMutableArray *_nodesByNumber;
    struct os_unfair_lock_s _nodesByNumberLock;
    XCDependencyNode *_rootNode;
    XCDependencyNode *_baseNode;
    NSMutableDictionary *_virtualNodesByIdent;
    struct os_unfair_lock_s _virtualNodesByIdentLock;
    NSMutableDictionary *_commandInvocRecordsByIdent;
    struct os_unfair_lock_s _commandInvocRecordsByIdentLock;
    NSSet *_buildActionProducedArtifactNodes;
    NSMutableArray *_commandsByNumber;
    struct os_unfair_lock_s _commandsByNumberLock;
    struct stat _dependencyGraphFileInfo;
}

+ (id)readFromBuildDirectory:(id)arg1 withTargetBuildContext:(id)arg2 error:(id *)arg3;
+ (id)loadOrCreateInBuildDirectory:(id)arg1 withTargetBuildContext:(id)arg2 withBasePath:(id)arg3;
+ (id)dependencyGraphFilename;
@property(copy) NSSet *buildActionProducedArtifactNodes; // @synthesize buildActionProducedArtifactNodes=_buildActionProducedArtifactNodes;
- (void).cxx_destruct;
- (id)description;
- (void)printNodes;
- (BOOL)isValid;
- (void)invalidate;
- (BOOL)_writeToBuildDirectory:(id)arg1 forceWrite:(BOOL)arg2 error:(id *)arg3;
- (BOOL)writeToBuildDirectory:(id)arg1 error:(id *)arg2;
- (BOOL)isOutOfDateFromPersistedRepresentationInBuildDirectory:(id)arg1;
- (BOOL)writeToByteStream:(struct __sFILE *)arg1 error:(id *)arg2;
- (id)initFromByteStream:(struct __sFILE *)arg1 withTargetBuildContext:(id)arg2 error:(id *)arg3;
- (id)lookupCommandInvocationRecordWithIdentifier:(id)arg1;
- (id)createCommandInvocationRecordWithIdentifier:(id)arg1;
- (void)enumerateCommandsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned int)highestAssignedCommandNumber;
- (id)createShadowCommandWithOriginalCommand:(id)arg1 outputFilePath:(id)arg2 subprocessCommandLineGenerationBlock:(CDUnknownBlockType)arg3;
- (id)createCommandWithIdentifier:(id)arg1 macroExpansionScope:(id)arg2;
- (id)createCommandOfClass:(Class)arg1 withIdentifier:(id)arg2 macroExpansionScope:(id)arg3;
- (void)enumerateNodesUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned int)highestAssignedNodeNumber;
- (id)virtualNodeWithIdentifier:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)nodeWithPath:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)nodeWithPath:(id)arg1 relativeToNode:(id)arg2 createIfNeeded:(BOOL)arg3;
- (id)createNodeWithSupernode:(id)arg1 nameCStr:(const char *)arg2 length:(unsigned long long)arg3 isVirtual:(_Bool)arg4;
- (void)prepareForUpdatingDependencyGraph;
- (id)basePath;
- (id)targetBuildContext;
- (id)init;
- (id)initWithBasePath:(id)arg1 targetBuildContext:(id)arg2;

@end

