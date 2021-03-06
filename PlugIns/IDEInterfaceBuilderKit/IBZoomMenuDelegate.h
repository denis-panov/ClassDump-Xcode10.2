//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/IBAbstractEditorMenuDelegate.h>

#import <IDEInterfaceBuilderKit/NSMenuDelegate-Protocol.h>

@class NSString;

@interface IBZoomMenuDelegate : IBAbstractEditorMenuDelegate <NSMenuDelegate>
{
    BOOL _hasInstalledZoomLevelMenuItems;
    SEL _zoomAction;
}

@property(nonatomic) SEL zoomAction; // @synthesize zoomAction=_zoomAction;
- (void)menuNeedsUpdate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

