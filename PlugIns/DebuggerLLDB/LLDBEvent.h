//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DebuggerLLDB/DBGSBEvent-Protocol.h>

@class NSString;

@interface LLDBEvent : NSObject <DBGSBEvent>
{
    struct SBEvent {
        struct shared_ptr<lldb_private::Event> m_event_sp;
        struct Event *m_opaque_ptr;
    } _event;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)EventIsThreadEvent;
- (const char *)GetCString;
- (unsigned int)GetNumBreakpointLocations;
- (unsigned int)GetBreakpointEventType;
- (_Bool)GetRestarted;
- (int)GetState;
- (unsigned int)GetType;
- (id)GetBreakpointLocationAtIndex:(unsigned int)arg1;
- (id)GetBreakpoint;
- (_Bool)BroadcasterMatchesRef:(id)arg1;
- (id)initWithConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

