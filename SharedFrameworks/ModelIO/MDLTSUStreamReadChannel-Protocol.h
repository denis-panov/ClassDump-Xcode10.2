//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <ModelIO/NSObject-Protocol.h>

@protocol MDLTSUStreamReadChannel <NSObject>
- (void)close;
- (void)readWithHandler:(void (^)(BOOL, NSObject<OS_dispatch_data> *, NSError *))arg1;
@end

