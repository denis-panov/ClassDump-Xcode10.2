//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <LoggingSupportHost/NSSecureCoding-Protocol.h>

@interface OSLogEventStreamPosition : NSObject <NSSecureCoding>
{
    unsigned char _source[16];
    unsigned char _uuid[16];
    unsigned long long _ct;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) unsigned long long continuousTime;
@property(readonly) const char *UUID;
@property(readonly) const char *sourceUUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(const char *)arg1 bootUUID:(const char *)arg2 time:(unsigned long long)arg3;

@end
