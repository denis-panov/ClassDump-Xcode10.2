//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTViewController.h>

@class DVTBorderedView, DVTReplacementView;

@interface DVTDevicesWindowContentAreaViewController : DVTViewController
{
    DVTReplacementView *_replacementView;
    DVTBorderedView *_borderedView;
}

@property(retain) DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)viewDidLoad;

@end

