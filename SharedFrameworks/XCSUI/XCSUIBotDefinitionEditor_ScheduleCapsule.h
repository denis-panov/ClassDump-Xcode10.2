//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEViewController.h>

#import <XCSUI/XCSUIBotDefintionEditorViewController-Protocol.h>

@class DVTReplacementView, DVTStackBacktrace, NSString, XCSUIBotDefinitionContext, XCSUIBotDefinition_SchedulingEditor;

@interface XCSUIBotDefinitionEditor_ScheduleCapsule : IDEViewController <XCSUIBotDefintionEditorViewController>
{
    id _replacementViewFrameWatcher;
    XCSUIBotDefinition_SchedulingEditor *_schedulingViewController;
    XCSUIBotDefinitionContext *_definitionContext;
    DVTReplacementView *_replacementView;
}

+ (id)title;
@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property(retain, nonatomic) XCSUIBotDefinitionContext *definitionContext; // @synthesize definitionContext=_definitionContext;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)loadView;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

