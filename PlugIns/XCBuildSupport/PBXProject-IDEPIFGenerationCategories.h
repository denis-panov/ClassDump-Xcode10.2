//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DevToolsCore/PBXProject.h>

#import <XCBuildSupport/IDEPIFObject-Protocol.h>

@class IDEPIFGUID, NSString;

@interface PBXProject (IDEPIFGenerationCategories) <IDEPIFObject>
+ (id)pifObjectTypeName;
- (id)pifRepresentation:(id)arg1;
- (id)pifSubobjects;
- (id)pifInfoForSerializer:(id)arg1;
@property(readonly) IDEPIFGUID *PIFGUID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

