//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface DBGTargetConfiguration : NSObject
{
    float _debugHierarchyVersion;
    long long _debugHierarchyFoundationLoadedState;
    long long _liblViewDebuggerSupportDylibLoadedState;
}

+ (id)lldbFetchExpression;
+ (id)configWithExpressionResult:(id)arg1;
@property(readonly) long long liblViewDebuggerSupportDylibLoadedState; // @synthesize liblViewDebuggerSupportDylibLoadedState=_liblViewDebuggerSupportDylibLoadedState;
@property(readonly) long long debugHierarchyFoundationLoadedState; // @synthesize debugHierarchyFoundationLoadedState=_debugHierarchyFoundationLoadedState;
@property(readonly) float debugHierarchyVersion; // @synthesize debugHierarchyVersion=_debugHierarchyVersion;
- (id)initWithExpressionResult:(id)arg1;

@end

