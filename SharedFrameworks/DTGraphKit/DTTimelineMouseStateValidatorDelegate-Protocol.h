//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DTGraphKit/NSObject-Protocol.h>

@class DTTimelineMouseStateValidator, NSEvent;

@protocol DTTimelineMouseStateValidatorDelegate <NSObject>
- (void)mouseStateValidator:(DTTimelineMouseStateValidator *)arg1 didTransistionToState:(unsigned long long)arg2 fromState:(unsigned long long)arg3 event:(NSEvent *)arg4;
@end

