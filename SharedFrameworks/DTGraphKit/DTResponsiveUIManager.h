//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DTResponsiveUIMainThreadDeliverySubframe, DTResponsiveUIRenderSubframe, DTResponsiveUIRequestSubframe, XRFrameCommutator, XRFrameRing;

@interface DTResponsiveUIManager : NSObject
{
    XRFrameRing *_ring;
    XRFrameCommutator *_commutator;
    DTResponsiveUIRequestSubframe *_requestManager;
    DTResponsiveUIRenderSubframe *_executionManager;
    DTResponsiveUIMainThreadDeliverySubframe *_deliveryManager;
    BOOL _needsSync;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_mainThreadCBDispatchForProvider:(id)arg1 delegate:(id)arg2;
- (id)_popLatestContent:(id)arg1;
- (void)_setRequest:(id)arg1 provider:(id)arg2 serialNumber:(unsigned long long)arg3;
- (void)synchronize;
- (void)invalidateContentProvider:(id)arg1;
- (void)registerContentProvider:(id)arg1;
- (id)init;

@end
