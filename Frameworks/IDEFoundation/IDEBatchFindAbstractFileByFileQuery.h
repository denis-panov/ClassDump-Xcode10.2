//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEBatchFindAbstractQuery.h>

@interface IDEBatchFindAbstractFileByFileQuery : IDEBatchFindAbstractQuery
{
}

+ (BOOL)supportsQueryAction:(long long)arg1;
- (void)execute;
- (void)processContentSnapshots:(id)arg1 queryStartTime:(id)arg2 progressNotifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)continueProcessingSnapshots:(id)arg1 concurrencyIndex:(long long)arg2 baseResultIndex:(long long)arg3 snapshotIndex:(long long)arg4 queryStartTime:(id)arg5 progressNotifier:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)continueProcessingSnapshotGroups:(id)arg1 withTextIndex:(id)arg2 concurrencyIndex:(long long)arg3 baseResultIndex:(long long)arg4 groupIndex:(long long)arg5 queryStartTime:(id)arg6 progressNotifier:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)continueProcessingGroup:(id)arg1 withTextIndex:(id)arg2 filePathIndex:(long long)arg3 baseResultIndex:(long long)arg4 batchedProgress:(long long)arg5 queryStartTime:(id)arg6 progressNotifier:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (long long)totalNumberOfFilesInContentSnapshots:(id)arg1;
- (BOOL)trimsIndexAfterCompletion;
- (void)checkCancelStatusAndConitionallyProcessFilePath:(id)arg1 fromGroup:(id)arg2 withTextIndex:(id)arg3 queryStartTime:(id)arg4 progressNotifier:(id)arg5 resultOrder:(long long)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)processFilePath:(id)arg1 fromGroup:(id)arg2 withIndex:(id)arg3 queryStartTime:(id)arg4 progressNotifier:(id)arg5 resultOrder:(long long)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)resultForRange:(struct _NSRange)arg1 ofText:(id)arg2 forDocumentLocation:(id)arg3 withTimestamp:(id)arg4 parent:(id)arg5;
- (id)makeRootResult;

@end
