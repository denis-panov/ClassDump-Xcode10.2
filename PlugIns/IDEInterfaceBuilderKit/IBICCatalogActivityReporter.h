//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEActivityReporter.h>

#import <IDEInterfaceBuilderKit/IBICActivityReportingDelegate-Protocol.h>

@class IBMutableIdentityDictionary;

@interface IBICCatalogActivityReporter : IDEActivityReporter <IBICActivityReportingDelegate>
{
    IBMutableIdentityDictionary *_activityReportsByItem;
}

- (void).cxx_destruct;
- (void)activityDidEndForItem:(id)arg1;
- (void)activityDidUpdateForItem:(id)arg1;
- (void)activityDidStartForItem:(id)arg1;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

@end

