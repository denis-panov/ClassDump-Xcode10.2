//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEDistributionStep.h>

@class NSArray;

@interface IDEDistributionOptionsStep : IDEDistributionStep
{
    NSArray *_options;
}

+ (id)propertyListForContext:(id)arg1;
+ (id)availableOptionsForPropertyList;
+ (id)distributionOptionClasses;
+ (id)distributionOptionExtensions;
@property(readonly, nonatomic) NSArray *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (id)providedOutputContextPropertyNames;
- (id)requiredInputContextPropertyNames;
- (BOOL)loadFromPropertyList:(id)arg1 error:(id *)arg2;
- (id)initWithContext:(id)arg1;

@end
