//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DevToolsCore/PBXContainerItem.h>

@class NSString, PBXContainer, PBXObject;

@interface PBXContainerItemProxy : PBXContainerItem
{
    int _proxyType;
    PBXObject *_containerPortal;
    NSString *_remoteGlobalIDString;
    NSString *_remoteInfo;
    PBXContainer *_container;
}

+ (id)archivableWeakRelationshipsForPListArchiver:(id)arg1;
+ (id)archivableRelationships;
+ (id)archivableAttributes;
- (void).cxx_destruct;
- (id)readFromPListUnarchiver:(id)arg1;
- (void)awakeFromPListUnarchiver:(id)arg1;
- (void)validateWithUnarchiver:(id)arg1;
- (void)_setContainerPortal:(id)arg1;
- (id)_containerPortal;
- (BOOL)isEqualToProxy:(id)arg1;
- (id)remoteContainerItem;
- (id)remoteContainer;
- (void)setContainer:(id)arg1;
- (id)container;
- (id)remoteInfo;
- (void)setRemoteInfo:(id)arg1;
- (id)remoteGlobalIDString;
- (void)setRemoteGlobalIDString:(id)arg1;
- (void)setContainerPortal:(id)arg1;
- (id)containerPortal;
- (id)initWithType:(int)arg1 portal:(id)arg2 remoteGlobalID:(id)arg3 remoteInfo:(id)arg4;
- (id)initWithType:(int)arg1 portal:(id)arg2 remoteGlobalIDString:(id)arg3 remoteInfo:(id)arg4;

@end

