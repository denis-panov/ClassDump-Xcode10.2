//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEDistributionStepViewController.h>

@interface IDEDistributionAnalyzeArchiveStepViewController : IDEDistributionStepViewController
{
    double _startTime;
}

+ (BOOL)skipStepForContext:(id)arg1 assistantDirection:(int)arg2;
@property double startTime; // @synthesize startTime=_startTime;
- (void)_spinProgressIndicatorForMinimumDurationAndContinue;
- (void)_preloadTeamsWithCallback:(CDUnknownBlockType)arg1;
- (void)_analyzeArchive;
- (BOOL)canGoPrevious;
- (BOOL)canGoNext;
- (id)title;
- (void)viewDidLoad;

@end
