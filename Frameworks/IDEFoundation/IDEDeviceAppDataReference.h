//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTXMLUnarchiving-Protocol.h>

@class NSString;

@interface IDEDeviceAppDataReference : NSObject <DVTXMLUnarchiving>
{
    NSString *_resolvedPath;
    NSString *_appDataBundleId;
    NSString *_appDataDownloadDate;
}

@property(copy) NSString *appDataDownloadDate; // @synthesize appDataDownloadDate=_appDataDownloadDate;
@property(copy) NSString *appDataBundleId; // @synthesize appDataBundleId=_appDataBundleId;
@property(copy) NSString *resolvedPath; // @synthesize resolvedPath=_resolvedPath;
- (void).cxx_destruct;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)setAppDataDownloadDateFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setAppDataBundleIdFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)setResolvedPathFromUTF8String:(char *)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

