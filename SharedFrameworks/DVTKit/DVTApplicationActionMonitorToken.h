//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DVTKit/DVTCancellable-Protocol.h>

@class NSString;

@interface DVTApplicationActionMonitorToken : NSObject <DVTCancellable>
{
    CDUnknownBlockType _handlerBlock;
}

@property(readonly, copy) CDUnknownBlockType handlerBlock; // @synthesize handlerBlock=_handlerBlock;
- (void).cxx_destruct;
@property(readonly, getter=isCancelled) BOOL cancelled;
- (void)cancel;
- (id)initWithHandlerBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

