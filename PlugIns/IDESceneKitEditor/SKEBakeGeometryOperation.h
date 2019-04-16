//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDESceneKitEditor/SKEDocumentOperation.h>

@class DVTObservingToken, NSArray, NSProgress, NSString, NSXPCConnection, SKESceneDocument;

@interface SKEBakeGeometryOperation : SKEDocumentOperation
{
    NSArray *_nodes;
    NSProgress *_progress;
    long long _progressValue;
    DVTObservingToken *_progressObservingToken;
    CDStruct_862f26a3 _settings;
    NSXPCConnection *_bakeryService;
    NSString *_resourceEnclosingFolderPath;
}

- (void).cxx_destruct;
- (void)configureProgressWithTrackedBlock:(CDUnknownBlockType)arg1;
- (id)makeBakeryService;
- (void)terminateWithResult:(unsigned long long)arg1 error:(id)arg2;
- (void)cancel;
- (void)bakingDidFinishWithResult:(id)arg1;
- (void)start;
- (id)indexPathForNode:(id)arg1;
- (long long)progress;
- (id)title;
@property(readonly) SKESceneDocument *document;
- (id)initWithDocument:(id)arg1 nodes:(id)arg2 settings:(CDStruct_862f26a3)arg3 resourceEnclosingFolderPath:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end
