//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/NSObject-Protocol.h>

@class IDEPlaygroundResult;

@protocol IDEPlaygroundDataHandlerDelegate <NSObject>
- (void)playgroundDataHandlerDidDecodeFinishExpressionResult:(id)arg1;
- (void)playgroundDataHandler:(id)arg1 didDecodeResult:(IDEPlaygroundResult *)arg2;
@end
