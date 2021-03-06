//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEITunesSoftwareServiceDelegateProtocol-Protocol.h>

@interface IDEITunesSoftwareServiceDelegate : NSObject <IDEITunesSoftwareServiceDelegateProtocol>
{
    CDUnknownBlockType _uploadWillBeginCallback;
    CDUnknownBlockType _updateUploadPercentageCallback;
    CDUnknownBlockType _updateUploadMessageCallback;
    CDUnknownBlockType _uploadDidCompleteCallback;
}

@property(copy) CDUnknownBlockType uploadDidCompleteCallback; // @synthesize uploadDidCompleteCallback=_uploadDidCompleteCallback;
@property(copy) CDUnknownBlockType updateUploadMessageCallback; // @synthesize updateUploadMessageCallback=_updateUploadMessageCallback;
@property(copy) CDUnknownBlockType updateUploadPercentageCallback; // @synthesize updateUploadPercentageCallback=_updateUploadPercentageCallback;
@property(copy) CDUnknownBlockType uploadWillBeginCallback; // @synthesize uploadWillBeginCallback=_uploadWillBeginCallback;
- (void).cxx_destruct;
- (void)uploadDidComplete;
- (void)updateUploadMessage:(id)arg1;
- (void)updateUploadPercentage:(double)arg1;
- (void)uploadWillBegin;

@end

