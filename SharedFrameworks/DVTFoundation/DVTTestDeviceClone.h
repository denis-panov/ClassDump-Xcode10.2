//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTTestDeviceCloneDescription, NSDate, NSString;
@protocol DVTTestDevice, DVTTestDeviceCloneCreator;

@interface DVTTestDeviceClone : NSObject
{
    BOOL _available;
    id <DVTTestDevice> _device;
    id <DVTTestDeviceCloneCreator> _creator;
    NSDate *_dateCreated;
    NSString *_originalDeviceIdentifier;
}

@property(readonly, copy) NSString *originalDeviceIdentifier; // @synthesize originalDeviceIdentifier=_originalDeviceIdentifier;
@property(readonly) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(getter=isAvailable) BOOL available; // @synthesize available=_available;
@property(readonly) id <DVTTestDeviceCloneCreator> creator; // @synthesize creator=_creator;
@property(readonly) id <DVTTestDevice> device; // @synthesize device=_device;
- (void).cxx_destruct;
@property(readonly) DVTTestDeviceCloneDescription *cloneDescription;
- (id)initWithClone:(id)arg1 ofDeviceWithIdentifier:(id)arg2 creator:(id)arg3;

@end

