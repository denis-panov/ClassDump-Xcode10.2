//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <InterfaceBuilderKit/NSCoding-Protocol.h>

@class IBConnection;

@interface IBConnectionRecord : NSObject <NSCoding>
{
    IBConnection *connection;
    long long connectionID;
}

+ (id)connectionRecordWithConnection:(id)arg1 andConnectionID:(long long)arg2;
- (long long)connectionID;
- (id)connection;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConnection:(id)arg1 andConnectionID:(long long)arg2;

@end
