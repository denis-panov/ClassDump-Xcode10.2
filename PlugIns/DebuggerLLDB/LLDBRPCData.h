//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBData-Protocol.h>

@class NSString;

@interface LLDBRPCData : NSObject <DBGSBData>
{
    struct SBData {
        struct shared_ptr<rpc::ObjectRef> m_object_ref_sp;
    } _data;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)GetByteSize;
- (id)initWithSBData:(const struct SBData *)arg1;
- (unsigned long long)ReadRawData:(id)arg1 offset:(unsigned long long)arg2 buf:(void *)arg3 size:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

