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

@interface _TtC12DVTAnalytics37ProcessorUsagePointConsolidatedSource : NSObject
{
    // Error parsing type: , name: appStoreSource
    // Error parsing type: , name: localSource
    // Error parsing type: , name: logAspect
    // Error parsing type: , name: consolidatedPoints
    // Error parsing type: , name: rateLimiter
    // Error parsing type: , name: hasCompletedInitialLoading
    // Error parsing type: , name: appExtensionPointIdentifier
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) NSString *description;
- (id)initWithAppIdentifier:(id)arg1 path:(id)arg2 appExtensionPointIdentifier:(id)arg3;
@property(nonatomic, copy) NSString *appExtensionPointIdentifier; // @synthesize appExtensionPointIdentifier;
@property(nonatomic) BOOL hasCompletedInitialLoading; // @synthesize hasCompletedInitialLoading;

@end

