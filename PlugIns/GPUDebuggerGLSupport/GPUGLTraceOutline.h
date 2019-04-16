//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GPUDebuggerFoundation/GPUTraceOutline.h>

@class GPUGLStateMirror, IDELaunchSession, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GPUGLTraceOutline : GPUTraceOutline
{
    GPUGLStateMirror *_statemirror;
    unsigned long long _currentContext;
    unsigned long long _currentThread;
    unsigned long long _currentQueue;
    IDELaunchSession *_launchSession;
    NSMutableDictionary *_contextGroupListDict;
    NSMutableArray *_contextGroupList;
    BOOL _bIsMultiContextOrThread;
    BOOL _bIsMultiAPI;
    struct shared_ptr<GPUTools::FD::TFunctionStream<GPUTools::FD::Function, void>> _captureStream;
    struct _Iterator<GPUTools::FD::Function> _captureStreamIter;
    unsigned int _currentFunctionIndex;
    unsigned int _currentDisplayFunctionIndex;
    unsigned int _currentFrameIndex;
    unsigned int _currentMarkerDepth;
    NSMutableDictionary *_contextNameDict;
}

@property(readonly) NSMutableDictionary *contextNameDict; // @synthesize contextNameDict=_contextNameDict;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)sharegroupResourceDictionaryForSharegroupID:(id)arg1;
- (id)stateMirrorForTraceItem:(id)arg1;
- (id)_derivedStateMirrorFromStateMirror:(id)arg1 forFunctionIndex:(unsigned int)arg2 fromFunctionIndex:(unsigned int)arg3;
- (void)_addFunction:(struct Function *)arg1;
- (void)_addContext:(struct Function *)arg1;
- (id)_buildBoundResourceFilterItems:(const struct Function *)arg1;
- (void)_handleExtendedDrawCommand:(struct Function *)arg1;
- (void)_handlePopGroupMarker:(struct Function *)arg1;
- (void)_handlePushGroupMarker:(struct Function *)arg1;
- (void)_handlePresentRenderbuffer:(struct Function *)arg1;
- (void)visitFunctionStreamFile:(id)arg1;
- (void)performPreCaptureVisitActions;
- (BOOL)_openFilenames:(id)arg1 archive:(id)arg2 filesArray:(id)arg3;
- (void)_addProgramForDisplayableItem:(id)arg1;
- (void)notifyUnusedResourcesStreamAvailable;
- (id)initWithTraceSession:(id)arg1;

@end

