//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <ViewBridge/NSRemoteViewController.h>

@protocol IDEPlaygroundRemoteViewInteractionDelegate;

@interface IDEPlaygroundRemoteViewController : NSRemoteViewController
{
    id <IDEPlaygroundRemoteViewInteractionDelegate> _interactionDelegate;
}

@property __weak id <IDEPlaygroundRemoteViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
- (void).cxx_destruct;
- (id)exportedInterface;
- (id)serviceViewControllerInterface;

@end

