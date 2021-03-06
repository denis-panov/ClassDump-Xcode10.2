//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderCocoaIntegration/IBCocoaOutletConnection.h>

@interface IBCocoaAccessibilityConnection : IBCocoaOutletConnection
{
}

+ (BOOL)canMakeSourceCodeConnectionsFromObject:(id)arg1 toObject:(id)arg2 document:(id)arg3;
+ (id)prototypeConnectionsFromObject:(id)arg1 toObject:(id)arg2;
+ (id)prototypeConnectionsForObject:(id)arg1;
- (id)endPointForEstimatingUnlabeledConnection;
- (id)displayDescriptionInDocument:(id)arg1;
- (id)displayGroupFromReferenceEndPoint:(id)arg1;
- (id)errorMessageForExistenceWithoutPrototypeInDocument:(id)arg1;
- (BOOL)validateSource:(id)arg1;
- (BOOL)validateDestination:(id)arg1;
- (void)ibPopulateIssues:(id)arg1 forDocument:(id)arg2 withComputationContext:(id)arg3;
- (BOOL)isActuallyAnOutlet;
- (id)archiveConnection;
- (Class)classForDocumentArchiver:(id)arg1;
- (Class)classForCoder;

@end

