//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDESceneKitEditor/SKEDocumentOperation.h>

@class DVTObservingToken, NSArray, NSProgress, SKESceneDocument;

@interface SKEBakeLightProbeOperation : SKEDocumentOperation
{
    NSArray *_nodes;
    NSProgress *_progress;
    long long _progressValue;
    DVTObservingToken *_progressObservingToken;
}

- (void).cxx_destruct;
- (void)configureProgressWithTrackedBlock:(CDUnknownBlockType)arg1;
- (void)terminateWithResult:(unsigned long long)arg1 error:(id)arg2;
- (void)cancel;
- (void)bakingDidFinish;
- (void)start;
- (id)indexPathForNode:(id)arg1;
- (long long)progress;
- (id)title;
@property(readonly) SKESceneDocument *document;
- (id)initWithDocument:(id)arg1 nodes:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

