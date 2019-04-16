//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DebugHierarchyKit/DBGDataSourceConnectionDelegate-Protocol.h>

@class DBGSnapshotManager, DebugHierarchyRequest, NSMutableArray, NSString;
@protocol DBGDataSourceConnection;

@interface DBGDataCoordinator : NSObject <DBGDataSourceConnectionDelegate>
{
    DBGSnapshotManager *_snapshotManager;
    id <DBGDataSourceConnection> _dataSourceConnection;
    NSMutableArray *_enqueuedRequests;
    DebugHierarchyRequest *_executingRequest;
}

+ (id)coordinatorWithDataSourceConnection:(id)arg1;
@property(retain) DebugHierarchyRequest *executingRequest; // @synthesize executingRequest=_executingRequest;
@property(retain) NSMutableArray *enqueuedRequests; // @synthesize enqueuedRequests=_enqueuedRequests;
@property(retain) id <DBGDataSourceConnection> dataSourceConnection; // @synthesize dataSourceConnection=_dataSourceConnection;
@property __weak DBGSnapshotManager *snapshotManager; // @synthesize snapshotManager=_snapshotManager;
- (void).cxx_destruct;
- (void)didReceiveData:(id)arg1 forRequest:(id)arg2;
- (void)cancelAllRequests;
- (void)cancelRequest:(id)arg1;
- (void)_performNextRequest;
- (void)performRequest:(id)arg1;
- (id)initWithDataSourceConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

