//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@protocol DYPLiveDebuggingHelper, DYPVariablesViewGPUStateValue;

__attribute__((visibility("hidden")))
@interface GPUStateValueQuicklookProvider : NSObject
{
    id <DYPVariablesViewGPUStateValue> _stateValue;
    id <DYPLiveDebuggingHelper> _liveDebuggingHelper;
}

@property(readonly, nonatomic) id <DYPLiveDebuggingHelper> liveDebuggingHelper; // @synthesize liveDebuggingHelper=_liveDebuggingHelper;
@property(readonly, nonatomic) id <DYPVariablesViewGPUStateValue> stateValue; // @synthesize stateValue=_stateValue;
- (void).cxx_destruct;
- (id)loadResourceWithType:(unsigned int)arg1 resourceManager:(id)arg2;
- (id)initWithGPUStateValue:(id)arg1;

@end

