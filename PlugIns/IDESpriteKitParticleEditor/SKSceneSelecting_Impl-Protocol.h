//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDESpriteKitParticleEditor/NSObject-Protocol.h>

@class SKView;

@protocol SKSceneSelecting_Impl <NSObject>
@property(readonly, nonatomic) BOOL isReferenced;
@property(nonatomic) BOOL isHidden;
@property(nonatomic) BOOL isLocked;

@optional
@property(readonly, nonatomic) double zPosition;
@property(readonly, nonatomic) struct CGRect frame;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) struct CGPoint position;
- (struct CGRect)displayRectInView:(SKView *)arg1;
@end

