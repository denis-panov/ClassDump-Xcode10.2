//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTInstrumentsFoundation/DTTapMessage.h>

#import <DVTInstrumentsFoundation/NSSecureCoding-Protocol.h>

@interface DTTapHeartbeatMessage : DTTapMessage <NSSecureCoding>
{
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned long long heartbeatTime;
- (id)init;

@end

