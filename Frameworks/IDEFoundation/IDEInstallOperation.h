//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTFoundation/DVTOperation.h>

#import <IDEFoundation/IDEExecutingOperationTrackable-Protocol.h>

@class IDEExecutionOperationTracker, NSString;

@interface IDEInstallOperation : DVTOperation <IDEExecutingOperationTrackable>
{
    IDEExecutionOperationTracker *_tracker;
}

@property(readonly) IDEExecutionOperationTracker *tracker; // @synthesize tracker=_tracker;
- (void).cxx_destruct;
- (void)registerTracker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

