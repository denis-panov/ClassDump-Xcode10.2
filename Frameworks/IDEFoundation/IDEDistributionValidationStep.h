//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEDistributionStep.h>

@interface IDEDistributionValidationStep : IDEDistributionStep
{
}

+ (id)propertyListForContext:(id)arg1;
+ (id)availableOptionsForPropertyList;
- (void)validate;
- (id)archiveSubmissionInfoWithIssues:(id)arg1;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (BOOL)loadFromPropertyList:(id)arg1 error:(id *)arg2;

@end

