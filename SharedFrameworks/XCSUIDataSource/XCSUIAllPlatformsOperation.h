//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <XCSUIDataSource/XCSUIDataSourceOperation.h>

@class XCSUIService, XCSVersionInfo;

@interface XCSUIAllPlatformsOperation : XCSUIDataSourceOperation
{
    XCSUIService *_service;
    XCSVersionInfo *_versionInfo;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
- (void)start;
- (id)operationIdentifier;
- (id)initWithService:(id)arg1 versionInfo:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

