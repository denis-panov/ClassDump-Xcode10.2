//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DebuggerLLDB/NSObject-Protocol.h>

@protocol DBGSBAddress, DBGSBThread;

@protocol DBGSBQueueItem <NSObject>
- (id <DBGSBAddress>)GetAddress;
- (id <DBGSBThread>)GetExtendedBacktraceThread:(const char *)arg1;
- (_Bool)IsValid;
@end

