//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface IDEDistributionMethodManager : NSObject
{
}

+ (id)defaultDistributionMethodManager;
- (id)orderedDistributionMethodsForTask:(long long)arg1 archive:(id)arg2;
- (id)_orderedDistributionMethodsForTask:(long long)arg1 archive:(id)arg2 ignorePreflightChecks:(BOOL)arg3 error:(id *)arg4;
- (BOOL)_passesPreflightChecksForArchive:(id)arg1 method:(id)arg2 error:(id *)arg3;
- (id)_orderedDistributionMethods;

@end

