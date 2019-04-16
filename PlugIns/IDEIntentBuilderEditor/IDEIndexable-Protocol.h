//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEIntentBuilderEditor/NSCopying-Protocol.h>
#import <IDEIntentBuilderEditor/NSObject-Protocol.h>

@class DVTFilePath, IDEContainer, IDERefactoringBuildSettings, IDEWorkspace, NSArray, NSDictionary, NSMutableSet, NSObject, NSString;
@protocol IDEIndexable, OS_dispatch_queue;

@protocol IDEIndexable <NSObject, NSCopying>
@property(readonly, copy) NSString *localizedIndexableDescription;
@property(readonly) BOOL requiresMainThread;
@property(readonly, copy) NSArray *indexableFiles;
@property(readonly, copy) NSString *indexName;
@property(readonly, copy) NSString *identifier;
- (IDERefactoringBuildSettings *)buildSettingsForMainFile:(DVTFilePath *)arg1 workspace:(IDEWorkspace *)arg2;
- (void)languageOfMainFile:(DVTFilePath *)arg1 workspace:(IDEWorkspace *)arg2 completionBlock:(void (^)(DVTSourceCodeLanguage *))arg3;
- (BOOL)writeProductHeaders:(NSDictionary *)arg1 toFile:(DVTFilePath *)arg2 error:(id *)arg3;
- (void)productHeadersInWorkspace:(IDEWorkspace *)arg1 withCompletionBlock:(void (^)(NSDictionary *))arg2;
- (IDEContainer *)containerForIndexables:(NSMutableSet *)arg1 rootPaths:(NSMutableSet *)arg2;

@optional
@property(readonly, getter=isUnitTest) BOOL unitTest;
@property(readonly, copy) NSString *productType;
@property(nonatomic) __weak id <IDEIndexable> proxy;
- (NSString *)productNameWithBuildSetting:(NSString *)arg1 workspace:(IDEWorkspace *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clearCachedBuildSettings;
- (NSDictionary *)settingsForFile:(DVTFilePath *)arg1;
- (void)settingsForFilesInWorkspace:(IDEWorkspace *)arg1 shouldWriteAuxiliaryFiles:(BOOL)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 withCompletionBlock:(void (^)(NSDictionary *))arg4;
- (void)settingsForFilesInWorkspace:(IDEWorkspace *)arg1 shouldWriteAuxiliaryFiles:(BOOL)arg2 withCompletionBlock:(void (^)(NSDictionary *))arg3;
@end

