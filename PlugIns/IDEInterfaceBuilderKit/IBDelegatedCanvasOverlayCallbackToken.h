//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface IBDelegatedCanvasOverlayCallbackToken : NSObject
{
    CDUnknownBlockType _callback;
    double _priority;
}

- (void).cxx_destruct;
- (void)invoke;
- (long long)comparePriority:(id)arg1;
- (id)initWithCallback:(CDUnknownBlockType)arg1 priority:(double)arg2;

@end

