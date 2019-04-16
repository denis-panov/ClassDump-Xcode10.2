//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDESourceCodeComparisonEditor/DVTInvalidation-Protocol.h>

@class DVTObservingToken, DVTSourceControlWorkingCopy, DVTStackBacktrace, IDESourceCodeBlameController, NSMutableArray, NSString, _TtC29IDESourceCodeComparisonEditor18BlameVisualization;

@interface IDESourceCodeSingleLineBlameProvider : NSObject <DVTInvalidation>
{
    IDESourceCodeBlameController *_blameController;
    DVTObservingToken *_blameObserver;
    CDUnknownBlockType waitingBlock;
    long long waitingLine;
    BOOL haveBlameItems;
    BOOL _forceReload;
    DVTSourceControlWorkingCopy *_workingCopy;
    NSMutableArray *_currentBlameAnnotations;
    _TtC29IDESourceCodeComparisonEditor18BlameVisualization *_currentBlameVisualization;
}

+ (void)initialize;
@property BOOL forceReload; // @synthesize forceReload=_forceReload;
@property(retain) _TtC29IDESourceCodeComparisonEditor18BlameVisualization *currentBlameVisualization; // @synthesize currentBlameVisualization=_currentBlameVisualization;
@property(retain) NSMutableArray *currentBlameAnnotations; // @synthesize currentBlameAnnotations=_currentBlameAnnotations;
@property(retain) DVTSourceControlWorkingCopy *workingCopy; // @synthesize workingCopy=_workingCopy;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)blameItemsForLine:(long long)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_findBlameItemsForLine:(long long)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)initWithEditor:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

