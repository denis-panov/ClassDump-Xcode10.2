//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/NSObject-Protocol.h>

@class IBConnectionPrototypeView, NSArray;

@protocol IBConnectionPrototypeViewDelegate <NSObject>
- (void)connectionPrototypeViewHandleConnectionDrag:(IBConnectionPrototypeView *)arg1;
- (void)connectionPrototypeView:(IBConnectionPrototypeView *)arg1 didRollover:(NSArray *)arg2;
- (void)connectionPrototypeView:(IBConnectionPrototypeView *)arg1 didDisconnect:(id)arg2;
@end
