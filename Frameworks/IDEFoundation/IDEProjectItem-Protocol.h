//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/NSObject-Protocol.h>

@class DVTPortalContainerType, DVTPortalProfileFeature, NSString;

@protocol IDEProjectItem <NSObject>
@property(readonly, nonatomic) DVTPortalContainerType *containerType;
@property(readonly, nonatomic) DVTPortalProfileFeature *feature;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *capabilityDescription;
@property(readonly, nonatomic) NSString *imageName;
@property(readonly, nonatomic) NSString *name;
@end

