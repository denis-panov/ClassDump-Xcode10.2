//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEDistributionProcessingPackagingStep.h>

@class NSString;

@interface IDEDistributionCreateZIPStep : IDEDistributionProcessingPackagingStep
{
    NSString *_name;
}

+ (id)packagePathExtension;
@property(copy) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)runWithError:(id *)arg1;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;

@end
