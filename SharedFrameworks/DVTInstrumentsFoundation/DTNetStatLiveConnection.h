//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface DTNetStatLiveConnection : NSObject
{
    unsigned int _ifaceIndex;
    unsigned long long _pidOrRoute;
    NSData *_localAddress;
    NSData *_remoteAddress;
    NSString *_kind;
}

@property(retain) NSString *kind; // @synthesize kind=_kind;
@property(retain) NSData *remoteAddress; // @synthesize remoteAddress=_remoteAddress;
@property(retain) NSData *localAddress; // @synthesize localAddress=_localAddress;
@property unsigned int ifaceIndex; // @synthesize ifaceIndex=_ifaceIndex;
@property unsigned long long pidOrRoute; // @synthesize pidOrRoute=_pidOrRoute;
- (void).cxx_destruct;

@end

