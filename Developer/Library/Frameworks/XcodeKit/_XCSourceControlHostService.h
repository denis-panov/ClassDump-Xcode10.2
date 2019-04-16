//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <XcodeKit/_XCSourceControlHostServiceProtocol-Protocol.h>

@class NSMutableDictionary, NSString, NSXPCConnection;
@protocol OS_dispatch_queue, XCSourceControlHostExtension;

@interface _XCSourceControlHostService : NSObject <_XCSourceControlHostServiceProtocol>
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_activeEndpointInvocationsLock;
    NSMutableDictionary *_activeEndpointInvocations;
    NSObject<OS_dispatch_queue> *_endpointClassesLock;
    NSMutableDictionary *_endpointClasses;
    id <XCSourceControlHostExtension> _sourceControlHostExtension;
}

@property(readonly) id <XCSourceControlHostExtension> sourceControlHostExtension; // @synthesize sourceControlHostExtension=_sourceControlHostExtension;
- (void).cxx_destruct;
- (void)webURLComponents:(id)arg1 endpointIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)webURL:(id)arg1 endpointIdentifier:(id)arg2 repositoryURL:(id)arg3 tag:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)webURL:(id)arg1 endpointIdentifier:(id)arg2 repositoryURL:(id)arg3 sha:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)webURL:(id)arg1 endpointIdentifier:(id)arg2 repositoryURL:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)webURL:(id)arg1 endpointIdentifier:(id)arg2 repositoryURL:(id)arg3 branch:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)usernameFromURL:(id)arg1 endpointIdentifier:(id)arg2 url:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)repositoryMetadata:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 repository:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)uploadSSHKey:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 publicSSHKey:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)listSSHKeys:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)validateSSHKey:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 publicSSHKey:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)validateCredentials:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)user:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)unstar:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 repository:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)star:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 repository:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)requestPersonalAccessToken:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 twoFactorCode:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)searchRepositories:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 query:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)repositories:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 type:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)loginHelpURL:(id)arg1 endpointIdentifier:(id)arg2 url:(id)arg3 username:(id)arg4 reply:(CDUnknownBlockType)arg5;
- (void)membership:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 options:(long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)createRepository:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 owner:(id)arg4 name:(id)arg5 description:(id)arg6 homepage:(id)arg7 private:(BOOL)arg8 reply:(CDUnknownBlockType)arg9;
- (void)avatar:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 username:(id)arg4 size:(unsigned int)arg5 reply:(CDUnknownBlockType)arg6;
- (void)avatar:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 email:(id)arg4 size:(unsigned int)arg5 reply:(CDUnknownBlockType)arg6;
- (void)cancelOperation:(id)arg1 endpointIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)requestAuthCode:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)capabilities:(id)arg1 endpointIdentifier:(id)arg2 account:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)_endpointForIdentifier:(id)arg1;
- (void)getEndpoints:(CDUnknownBlockType)arg1;
- (void)extensionDidFinishLaunching:(CDUnknownBlockType)arg1;
- (void)registerClass:(Class)arg1 forEndpointIdentifier:(id)arg2;
- (Class)classForEndpointIdentifier:(id)arg1;
- (void)unregisterEndpointInvocationWithIdentifier:(id)arg1;
- (id)initWithSourceControlHostExtension:(id)arg1 connection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

