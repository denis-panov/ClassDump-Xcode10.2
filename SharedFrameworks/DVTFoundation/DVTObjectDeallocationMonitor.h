//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface DVTObjectDeallocationMonitor : NSObject
{
}

+ (id)_referenceTreeDescriptionForObject:(id)arg1;
+ (BOOL)_getReferenceTreeDescriptionForObject:(id)arg1 monitorInfosForUncollectedObjects:(id)arg2 referenceTreeDescription:(id *)arg3 crashReportSignature:(id *)arg4;
+ (void)setLeakReportEnabled:(BOOL)arg1;
+ (BOOL)leakReportEnabled;
+ (void)logLeakedObjects;
+ (BOOL)isEnabled;

@end

