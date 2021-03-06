//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class IDEDistributionProcessingPipelineContext, IDEDistributionProcessingStep, NSArray;

@interface IDEDistributionProcessingPipeline : NSObject
{
    BOOL _cancelled;
    NSArray *_pipelineSteps;
    IDEDistributionProcessingStep *_currentStep;
    IDEDistributionProcessingPipelineContext *_context;
}

+ (id)pipelineWithInAppPurchaseContext:(id)arg1;
+ (id)pipelineWithAppContext:(id)arg1;
+ (id)pipelineWithContext:(id)arg1;
@property BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(retain) IDEDistributionProcessingPipelineContext *context; // @synthesize context=_context;
@property(retain) IDEDistributionProcessingStep *currentStep; // @synthesize currentStep=_currentStep;
@property(readonly) NSArray *pipelineSteps; // @synthesize pipelineSteps=_pipelineSteps;
- (void).cxx_destruct;
- (id)destinationFilePathForItem:(id)arg1;
- (void)_reportDistributionUsageWithElapsedTime:(double)arg1;
- (_Bool)process:(id *)arg1;
- (void)cancel;
- (id)init;
- (id)initWithPipelineSteps:(id)arg1 context:(id)arg2;

@end

