//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBSymbolContextList-Protocol.h>

@class NSString;

@interface LLDBSymbolContextList : NSObject <DBGSBSymbolContextList>
{
    struct SBSymbolContextList {
        struct unique_ptr<lldb_private::SymbolContextList, std::__1::default_delete<lldb_private::SymbolContextList>> m_opaque_ap;
    } _symbolContextList;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)GetContextAtIndex:(unsigned int)arg1;
- (unsigned int)GetSize;
- (id)initWithSBSymbolContextList:(const struct SBSymbolContextList *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

