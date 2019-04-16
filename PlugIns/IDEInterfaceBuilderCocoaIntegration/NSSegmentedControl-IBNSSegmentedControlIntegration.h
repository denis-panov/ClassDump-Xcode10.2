//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSSegmentedControl.h>

@interface NSSegmentedControl (IBNSSegmentedControlIntegration)
+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (void)ibCustomizeForInsertionIntoNSToolbar:(id)arg1 withObjects:(id)arg2 fromLibraryOrDifferentTargetRuntime:(BOOL)arg3 andInsertionContext:(id)arg4;
- (void)ibEnableAutolayoutInDocument:(id)arg1 context:(id)arg2;
- (id)ibWidgetType;
- (id)ibQualifyingInfoForDefaultLabel;
- (BOOL)ibIsUserSizable;
- (struct CGSize)ibMaximumSize;
- (struct CGSize)ibMinimumSize;
- (struct CGSize)ibNearestLegalBoundsSize;
- (double)ibPreferredWidth;
- (id)ibLocalAttributeKeyPaths;
- (Class)ibTrackerClass;
@end

