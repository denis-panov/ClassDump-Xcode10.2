//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTStackBacktrace, NSMutableArray, NSString;

@interface _DVTLatencyCheckerNode : NSObject
{
    BOOL _isTopCheckpoint;
    BOOL _valid;
    unsigned long long _startTime;
    unsigned long long _endTime;
    double _duration;
    unsigned long long _scopeDepth;
    unsigned long long _behavior;
    _DVTLatencyCheckerNode *_parentNode;
    NSMutableArray *_childNodes;
    DVTStackBacktrace *_currentBacktrace;
    DVTStackBacktrace *_eventPostingBacktrace;
    NSString *_identifier;
    NSString *_formatString;
}

+ (void)_addUnknownFramesForParentFrame:(id)arg1 newChildFrames:(id)arg2 minDuration:(double)arg3;
+ (void)_purgeSmallFramesFromParentFrame:(id)arg1 minDuration:(double)arg2;
+ (id)unknownFrameForStartTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2 minimumDuration:(double)arg3;
+ (void)logSoftAssertForNodes:(id)arg1 performanceAnalysisID:(id)arg2;
+ (id)_rootFrameForSoftAssert:(id)arg1;
+ (void)logNodesForTesting:(id)arg1;
+ (id)rootNodeForNodes:(id)arg1;
@property(getter=isValid) BOOL valid; // @synthesize valid=_valid;
@property(retain) NSString *formatString; // @synthesize formatString=_formatString;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain) DVTStackBacktrace *eventPostingBacktrace; // @synthesize eventPostingBacktrace=_eventPostingBacktrace;
@property(retain) DVTStackBacktrace *currentBacktrace; // @synthesize currentBacktrace=_currentBacktrace;
@property(retain) NSMutableArray *childNodes; // @synthesize childNodes=_childNodes;
@property(retain) _DVTLatencyCheckerNode *parentNode; // @synthesize parentNode=_parentNode;
@property unsigned long long behavior; // @synthesize behavior=_behavior;
@property BOOL isTopCheckpoint; // @synthesize isTopCheckpoint=_isTopCheckpoint;
@property unsigned long long scopeDepth; // @synthesize scopeDepth=_scopeDepth;
@property double duration; // @synthesize duration=_duration;
@property unsigned long long endTime; // @synthesize endTime=_endTime;
@property unsigned long long startTime; // @synthesize startTime=_startTime;
- (void).cxx_destruct;
- (id)frameTree;
- (double)minimumDurationForReporting;
- (void)_frameTreeWithParent:(id)arg1;
- (id)_longestToShortestChildNodes;
- (id)description;
- (void)invalidate;
- (id)init;

@end

