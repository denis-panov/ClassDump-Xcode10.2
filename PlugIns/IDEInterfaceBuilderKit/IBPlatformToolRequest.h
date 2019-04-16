//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSString;

@interface IBPlatformToolRequest : NSObject
{
    BOOL _wasSuperseded;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _diagnosticsBlock;
    NSString *_supersessionIdentifier;
    NSString *_requestID;
    id _requestData;
    id _resultData;
}

@property(retain) id resultData; // @synthesize resultData=_resultData;
@property BOOL wasSuperseded; // @synthesize wasSuperseded=_wasSuperseded;
@property(readonly) id requestData; // @synthesize requestData=_requestData;
@property(readonly, copy) NSString *requestID; // @synthesize requestID=_requestID;
@property(readonly, copy) NSString *supersessionIdentifier; // @synthesize supersessionIdentifier=_supersessionIdentifier;
@property(readonly, copy) CDUnknownBlockType diagnosticsBlock; // @synthesize diagnosticsBlock=_diagnosticsBlock;
@property(readonly, copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (id)description;
- (void)runCompletionBlock;
- (id)initWithRequestID:(id)arg1 data:(id)arg2 supersessionIdentifier:(id)arg3 diagnosticsBlock:(CDUnknownBlockType)arg4 completionBlock:(CDUnknownBlockType)arg5;

@end

