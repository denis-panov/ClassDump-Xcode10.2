//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBLaunchInfo-Protocol.h>

@class NSString;

@interface LLDBLaunchInfo : NSObject <DBGSBLaunchInfo>
{
    struct unique_ptr<lldb::SBLaunchInfo, std::__1::default_delete<lldb::SBLaunchInfo>> _launchInfo;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)SetLaunchFlags:(unsigned int)arg1;
- (void)SetUserID:(unsigned int)arg1;
- (void)SetWorkingDirectory:(const char *)arg1;
- (void)SetLaunchEventData:(const char *)arg1;
- (_Bool)AddOpenFileAction:(int)arg1 path:(const char *)arg2 read:(_Bool)arg3 write:(_Bool)arg4;
- (void)SetEnvironmentEntries:(const char **)arg1 append:(_Bool)arg2;
- (id)initWithConnection:(id)arg1 argv:(const char **)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

