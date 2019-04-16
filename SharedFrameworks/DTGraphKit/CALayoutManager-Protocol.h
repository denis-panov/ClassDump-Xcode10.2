//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DTGraphKit/NSObject-Protocol.h>

@class CALayer;

@protocol CALayoutManager <NSObject>

@optional
- (void)layoutSublayersOfLayer:(CALayer *)arg1;
- (void)invalidateLayoutOfLayer:(CALayer *)arg1;
- (struct CGSize)preferredSizeOfLayer:(CALayer *)arg1;
@end

