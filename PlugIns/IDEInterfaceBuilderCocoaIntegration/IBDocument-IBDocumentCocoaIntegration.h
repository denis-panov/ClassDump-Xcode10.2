//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/IBDocument.h>

@class NSNumber;

@interface IBDocument (IBDocumentCocoaIntegration)
+ (BOOL)supportsWindowControllersDraggedFromLibrary;
+ (BOOL)wantsViewsInstalledInNSViewControllersDraggedFromLibrary;
@property(retain, nonatomic) NSNumber *explicitCustomObjectInstantiationBehavior;
- (long long)effectiveCustomObjectInstantiationBehavior;
- (long long)defaultCustomObjectInstantiationBehavior;
- (BOOL)isObjectFilesOwner:(id)arg1;
- (BOOL)isObjectApplication:(id)arg1;
- (id)bindingManager;
- (id)cocoaPlatformAdapter;
@end

