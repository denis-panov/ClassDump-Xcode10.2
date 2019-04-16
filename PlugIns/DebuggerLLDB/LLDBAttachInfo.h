//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBAttachInfo-Protocol.h>

@class NSString;

@interface LLDBAttachInfo : NSObject <DBGSBAttachInfo>
{
    struct unique_ptr<lldb::SBAttachInfo, std::__1::default_delete<lldb::SBAttachInfo>> _attachInfo;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)SetIgnoreExisting:(_Bool)arg1;
- (void)SetUserID:(unsigned int)arg1;
- (id)initWithConnection:(id)arg1 PID:(int)arg2;
- (id)initWithConnection:(id)arg1 path:(const char *)arg2 wait_for:(_Bool)arg3 async:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

