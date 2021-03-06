//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class _TtC17IDEXCBuildSupport31IDEActivityLogSectionCacheEntry, _TtC7XCBuild22XCBBuildServiceSession;
@protocol IDEXCBuildServiceSessionClient;

@interface _TtC17IDEXCBuildSupport24IDEXCBuildServiceSession : NSObject
{
    // Error parsing type: , name: service
    // Error parsing type: , name: client
    // Error parsing type: , name: xcbSession
    // Error parsing type: , name: sentPIFResponse
    // Error parsing type: , name: buildLogCache
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) _TtC17IDEXCBuildSupport31IDEActivityLogSectionCacheEntry *buildLogCache; // @synthesize buildLogCache;
- (void)discardSentPIF;
- (void)sendPIFWithCompletion:(CDUnknownBlockType)arg1;
- (void)generateIndexingInfoFor:(id)arg1 configuration:(id)arg2 delegate:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)startBuildOperationWithConfiguration:(id)arg1 overridingBuildParameters:(id)arg2 delegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithService:(id)arg1 forClient:(id)arg2;
@property(nonatomic, retain) _TtC7XCBuild22XCBBuildServiceSession *xcbSession; // @synthesize xcbSession;
@property(nonatomic) __weak id <IDEXCBuildServiceSessionClient> client; // @synthesize client;

@end

