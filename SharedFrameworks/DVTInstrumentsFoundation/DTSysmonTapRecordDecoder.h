//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSArray;

@interface DTSysmonTapRecordDecoder : NSObject
{
    unsigned long long _mostRecentEpoch;
    NSArray *_processAttributes;
    NSArray *_systemAttributes;
    NSArray *_coalitionAttributes;
}

- (void).cxx_destruct;
- (unsigned long long)enumerateRecordsFromSample:(id)arg1 block:(CDUnknownBlockType)arg2;

@end
