//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IBCocoaTouchToolFoundation/IBUISimulatedNavigationBarMetrics.h>

#import <IDEInterfaceBuilderCocoaTouchIntegration/IBDocumentArchiving-Protocol.h>

@class NSString;

@interface IBUISimulatedNavigationBarMetrics (IDESupport) <IBDocumentArchiving>
+ (id)simulatedNavigationBarMetricsForNavigationBar:(id)arg1;
+ (id)simulatedBarMetricsForBarView:(id)arg1;
- (id)metricChainWithPrecedingMetric:(id)arg1;
- (id)simulatedBarMetricsByRemovingTintColor;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;
- (id)unpromptedInstance;
- (id)promptedInstance;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)barEdge;
- (id)displayName;
- (id)navigationBarMetricRepresentation;
- (void)applyMetricsToBar:(id)arg1;
- (Class)barClass;
- (id)ibWidgetType;
- (BOOL)isTranslucentForTargetRuntime:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

