//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEFoundation/IDEContainerItemCore-Protocol.h>

@class NSString;
@protocol IDEContainerCore, IDEGroupCore;

@interface IDEContainerItemCore : NSObject <IDEContainerItemCore>
{
    id <IDEGroupCore> _parentGroup;
    NSString *_path;
}

@property(copy) NSString *path; // @synthesize path=_path;
@property(retain) id <IDEGroupCore> parentGroup; // @synthesize parentGroup=_parentGroup;
- (void).cxx_destruct;
@property(readonly) id <IDEContainerCore> parentContainer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

