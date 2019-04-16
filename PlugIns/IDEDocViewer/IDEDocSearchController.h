//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTPerformanceMetric;
@protocol DVTCancellable;

@interface IDEDocSearchController : NSObject
{
    id <DVTCancellable> _searchTask;
    DVTPerformanceMetric *_performanceMetric;
}

- (void).cxx_destruct;
- (void)beginSearchingWithSearchString:(id)arg1 reference:(id)arg2 performanceMetric:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)extractTokenScopeFromSearchString:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end
