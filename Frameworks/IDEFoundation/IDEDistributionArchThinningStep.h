//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEDistributionItemProcessingStep.h>

@interface IDEDistributionArchThinningStep : IDEDistributionItemProcessingStep
{
}

+ (_Bool)runsPerThinningVariant;
+ (_Bool)supportsDryRun;
- (_Bool)runWithError:(id *)arg1;
- (_Bool)removeArch:(id)arg1 path:(id)arg2 error:(id *)arg3;
- (_Bool)verifyArch:(id)arg1 path:(id)arg2 archExists:(_Bool *)arg3 error:(id *)arg4;
- (id)lipoPath;
- (_Bool)shouldSkip;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (id)name;

@end

