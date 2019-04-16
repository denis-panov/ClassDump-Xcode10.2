//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTFoundation/DVTGeneratedContentProvider.h>

@class DVTObservingToken, NSString, NSURL;

@interface DBGDisassemblyGeneratedContentProvider : DVTGeneratedContentProvider
{
    NSURL *_url;
    DVTObservingToken *_currentStackFrameToken;
    DVTObservingToken *_currentStackFrameDisassemblyObservingToken;
    DVTObservingToken *_debugSessionCoalescedStateToken;
    DVTObservingToken *_settingPCDisassemblyObservingToken;
    NSString *_displayName;
    NSURL *_temporaryFileURL;
}

@property(retain, nonatomic) NSURL *temporaryFileURL; // @synthesize temporaryFileURL=_temporaryFileURL;
@property(copy) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_closeDocument;
- (void)_getDisassemblyForSettingPC:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_createDebugSessionStateObserver:(id)arg1;
- (void)_createObserversForReloading:(id)arg1;
- (void)generateContentForURL:(id)arg1 waitingBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

