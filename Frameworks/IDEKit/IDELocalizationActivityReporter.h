//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEActivityReporter.h>

@class DVTObservingToken, IDEActivityReport, NSObject;
@protocol IDELocalizationWorkProgress;

@interface IDELocalizationActivityReporter : IDEActivityReporter
{
    NSObject<IDELocalizationWorkProgress> *_worker;
    DVTObservingToken *_localizationStartObserver;
    DVTObservingToken *_localizationPhaseObserver;
    DVTObservingToken *_localizationProgressObserver;
    DVTObservingToken *_localizationCompleteObserver;
    IDEActivityReport *_activeReport;
}

+ (id)_titleSegmentsForWorker:(id)arg1;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)setWorker:(id)arg1;
- (id)initWithWorkspace:(id)arg1;

@end
