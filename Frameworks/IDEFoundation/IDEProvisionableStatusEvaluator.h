//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTLogAspect;

@interface IDEProvisionableStatusEvaluator : NSObject
{
    DVTLogAspect *_logAspect;
}

@property(retain, nonatomic) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
- (void).cxx_destruct;
- (id)_provisioningInputsForEvaluationInputs:(id)arg1 configuration:(id)arg2 entitlements:(id)arg3 error:(id *)arg4;
- (long long)_signingStyleForProvisionableSnapshot:(id)arg1 configuration:(id)arg2;
- (id)evaluateStatusWithInputs:(id)arg1;
- (id)initWithName:(id)arg1 logAspect:(id)arg2;

@end

