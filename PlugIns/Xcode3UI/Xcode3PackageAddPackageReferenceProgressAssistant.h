//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEAssistant.h>

#import <Xcode3UI/IDESourcePackagePreflightResolutionDelegate-Protocol.h>

@class NSProgressIndicator, NSTextField;

@interface Xcode3PackageAddPackageReferenceProgressAssistant : IDEAssistant <IDESourcePackagePreflightResolutionDelegate>
{
    BOOL _hadFatalError;
    BOOL _resolutionComplete;
    BOOL _resolutionStarted;
    NSTextField *_progressTitleField;
    NSTextField *_progressSubtitleField;
    NSProgressIndicator *_progressBar;
}

+ (id)keyPathsForValuesAffectingCanGoBack;
+ (id)keyPathsForValuesAffectingCanFinish;
@property __weak NSProgressIndicator *progressBar; // @synthesize progressBar=_progressBar;
@property __weak NSTextField *progressSubtitleField; // @synthesize progressSubtitleField=_progressSubtitleField;
@property __weak NSTextField *progressTitleField; // @synthesize progressTitleField=_progressTitleField;
@property(nonatomic) BOOL resolutionStarted; // @synthesize resolutionStarted=_resolutionStarted;
@property(nonatomic) BOOL resolutionComplete; // @synthesize resolutionComplete=_resolutionComplete;
@property(nonatomic) BOOL hadFatalError; // @synthesize hadFatalError=_hadFatalError;
- (void).cxx_destruct;
- (void)handleFatalError:(id)arg1;
- (void)preflightResolutionDidUpdateStatus:(id)arg1 progress:(long long)arg2;
- (void)preflightResolutionDidCompleteWithError:(id)arg1;
- (id)packageAssistantContext;
- (void)finishWithCompletionBlock:(CDUnknownBlockType)arg1;
- (BOOL)canGoBack;
- (BOOL)alwaysShowFinish;
- (BOOL)canFinish;
- (void)primitiveInvalidate;
- (void)viewDidLoad;

@end
