//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEContainerItemCore-Protocol.h>

@class NSArray, NSString;
@protocol IDEContainerCore;

@protocol IDEGroupCore <IDEContainerItemCore>
@property(copy) NSArray *subitems;
@property(copy) NSString *name;
@property(retain) id <IDEContainerCore> parentContainer;
@end

