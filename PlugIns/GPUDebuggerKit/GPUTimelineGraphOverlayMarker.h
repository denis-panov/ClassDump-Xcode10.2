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

__attribute__((visibility("hidden")))
@interface GPUTimelineGraphOverlayMarker : NSObject
{
    unsigned long long _startIndex;
    unsigned long long _endIndex;
    unsigned long long _level;
    NSString *_label;
}

@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
@property(nonatomic) unsigned long long endIndex; // @synthesize endIndex=_endIndex;
@property(nonatomic) unsigned long long startIndex; // @synthesize startIndex=_startIndex;
- (void).cxx_destruct;
- (id)init;

@end

