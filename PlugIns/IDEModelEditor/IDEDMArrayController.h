//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSArrayController.h>

@protocol IDEDMArrayControllerDelegate;

@interface IDEDMArrayController : NSArrayController
{
    id <IDEDMArrayControllerDelegate> _delegate;
}

@property(retain) id <IDEDMArrayControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)rearrangeObjects;

@end

