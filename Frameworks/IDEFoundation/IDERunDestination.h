//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSCopying-Protocol.h>

@class DVTDevice, DVTObservingToken, DVTSDK, NSError, NSString;

@interface IDERunDestination : NSObject <NSCopying>
{
    DVTObservingToken *_targetDeviceNameObservingToken;
    BOOL _isTargetDeviceEligible;
    DVTDevice *_targetDevice;
    NSString *_targetArchitecture;
    DVTSDK *_targetSDK;
    NSString *_targetIdentifier;
    NSError *_deviceIneligibilityError;
}

+ (id)fallbackActiveArchitectureForBuildArchitectures:(id)arg1;
+ (id)keyPathsForValuesAffectingFullDisplayName;
+ (id)keyPathsForValuesAffectingDisplayName;
@property(readonly) NSError *deviceIneligibilityError; // @synthesize deviceIneligibilityError=_deviceIneligibilityError;
@property(readonly) BOOL isTargetDeviceEligible; // @synthesize isTargetDeviceEligible=_isTargetDeviceEligible;
@property(readonly) NSString *targetIdentifier; // @synthesize targetIdentifier=_targetIdentifier;
@property(readonly) DVTSDK *targetSDK; // @synthesize targetSDK=_targetSDK;
@property(readonly, copy) NSString *targetArchitecture; // @synthesize targetArchitecture=_targetArchitecture;
@property(readonly) DVTDevice *targetDevice; // @synthesize targetDevice=_targetDevice;
- (void).cxx_destruct;
- (id)dvt_detailedDebugDescription;
- (id)activeArchitectureForBuildArchitectures:(id)arg1;
- (void)didBecomeActiveRunDestinationForRunContext:(id)arg1;
- (id)runOperationForLaunchSession:(id)arg1 error:(id *)arg2;
- (id)runWorkerForLaunchSession:(id)arg1 error:(id *)arg2;
@property(readonly) NSString *targetArchitectureForSorting;
@property(readonly) NSString *targetSDKForSorting;
@property(readonly) NSString *targetDeviceForSorting;
@property(readonly) NSString *displayOrder;
- (BOOL)shouldPresentRunDestinationForScheme:(id)arg1 schemeTask:(long long)arg2 schemeCommand:(id)arg3 executionEnvironment:(id)arg4 overridingTestingSpecifiers:(id)arg5 error:(id *)arg6;
- (BOOL)isValidRunDestinationForScheme:(id)arg1 schemeTask:(long long)arg2 schemeCommand:(id)arg3 executionEnvironment:(id)arg4 overridingTestingSpecifiers:(id)arg5 error:(id *)arg6;
- (BOOL)_isValidRunDestinationForScheme:(id)arg1 schemeTask:(long long)arg2 schemeCommand:(id)arg3 executionEnvironment:(id)arg4 overridingTestingSpecifiers:(id)arg5 forPresentation:(BOOL)arg6 error:(id *)arg7;
- (id)description;
@property(readonly, copy) NSString *fullDisplayName;
@property(readonly) NSString *displayableIneligibilityLongDescription;
@property(readonly) NSString *displayableIneligibilityMessage;
@property(readonly, copy) NSString *displayNameAdditions;
@property(readonly, copy) NSString *displayName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithIneligibleTargetDevice:(id)arg1 architecture:(id)arg2 SDK:(id)arg3 deviceIneligibilityError:(id)arg4;
- (id)initWithTargetDevice:(id)arg1 architecture:(id)arg2 SDK:(id)arg3;

@end

