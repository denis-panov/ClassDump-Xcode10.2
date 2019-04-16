//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/IBUISimulatedMetrics-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCoding-Protocol.h>
#import <IDEInterfaceBuilderCocoaTouchIntegration/NSCopying-Protocol.h>

@class IBCocoaTouchIdiom, IBUISimulatedMetricsModifier, NSString, NSValue;

@interface IBUISimulatedSizeMetrics : NSObject <IBDocumentArchiving, NSCoding, NSCopying, IBUISimulatedMetrics>
{
}

+ (id)splitViewDetailSizeMetrics;
+ (id)splitViewMasterSizeMetrics;
+ (id)modalFormSheetSizeMetrics;
+ (id)modalPageSheetSizeMetrics;
+ (id)sharedInstance;
+ (id)instantiateWithCoder:(id)arg1;
+ (id)instantiateWithDocumentUnarchiver:(id)arg1;
@property(readonly, nonatomic) NSValue *documentViewInset;
- (id)effectiveSimulatedCanvasFrameContentViewSizeForOrientation:(long long)arg1;
@property(readonly, nonatomic) IBUISimulatedMetricsModifier *metricsModifier;
- (id)migratableSimulatedDestinationMetricsOrNil;
- (id)configurationForScreenMetrics:(id)arg1 orientationMetrics:(id)arg2;
- (id)fixedSizeMetricsForScreenMetrics:(id)arg1 orientationMetrics:(id)arg2 freeformSize:(struct CGSize)arg3;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSimulatedSizeMetrics:(id)arg1;
@property(readonly, nonatomic) IBCocoaTouchIdiom *idiom;
@property(readonly, copy) NSString *displayName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForDocumentArchiver:(id)arg1;
- (Class)classForCoder;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

