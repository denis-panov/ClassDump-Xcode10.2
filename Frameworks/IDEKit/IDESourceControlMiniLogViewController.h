//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDESourceControlLogViewController.h>

@class DVTComparisonDocumentLocation, DVTNotificationToken, DVTObservingToken;

@interface IDESourceControlMiniLogViewController : IDESourceControlLogViewController
{
    DVTComparisonDocumentLocation *_comparisonDocumentLocation;
    DVTNotificationToken *_didScanWorkspaceToken;
    DVTObservingToken *_localStatusToken;
}

+ (Class)logItemViewClass;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)updateBoundComparisonDocumentLocation;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)dvt_extraBindings;

@end

