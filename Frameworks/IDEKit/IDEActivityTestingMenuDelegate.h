//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEKit/NSMenuDelegate-Protocol.h>

@class NSString;

@interface IDEActivityTestingMenuDelegate : NSObject <NSMenuDelegate>
{
}

- (void)menuNeedsUpdate:(id)arg1;
- (void)stopAllActivitiesFromMenuItem:(id)arg1;
- (void)doActionFromMenuItem:(id)arg1;
- (id)workspace;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

