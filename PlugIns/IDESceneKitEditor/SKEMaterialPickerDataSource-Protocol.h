//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDESceneKitEditor/NSObject-Protocol.h>

@class NSArray, SCNMaterial, SKEMaterialPicker;

@protocol SKEMaterialPickerDataSource <NSObject>
- (NSArray *)materialLibraryForMaterialPicker:(SKEMaterialPicker *)arg1;
- (SCNMaterial *)defaultMaterialForMaterialPicker:(SKEMaterialPicker *)arg1;
@end

