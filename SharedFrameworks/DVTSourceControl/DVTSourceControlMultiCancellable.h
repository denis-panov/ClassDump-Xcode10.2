//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <Foundation/NSBlockOperation.h>

#import <DVTSourceControl/DVTSourceControlCancellable-Protocol.h>

@class NSString;
@protocol DVTSourceControlCancellable;

@interface DVTSourceControlMultiCancellable : NSBlockOperation <DVTSourceControlCancellable>
{
    id <DVTSourceControlCancellable> _currentCancellable;
}

- (void).cxx_destruct;
- (void)cancel;
@property(retain) id <DVTSourceControlCancellable> currentCancellable;
@property(readonly) unsigned long long authenticationOptions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

