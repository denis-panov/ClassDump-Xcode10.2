//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEAssistant.h>

@class DVTReplacementView, DVTSourceControlRemoteRepository, NSButton, NSProgressIndicator, NSSearchField, NSString;

@interface _TtC8Xcode3UI49Xcode3PackageAddPackageRepositoryChooserAssistant : IDEAssistant
{
    // Error parsing type: , name: replacementView
    // Error parsing type: , name: searchField
    // Error parsing type: , name: repoDetailToggleButton
    // Error parsing type: , name: progressIndicator
    // Error parsing type: , name: isGoingNext
    // Error parsing type: , name: didScanToken
    // Error parsing type: , name: credentialWindowController
    // Error parsing type: , name: packageRemoteRepository
    // Error parsing type: , name: _repositoryHasResult
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)beginSearch:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)primitiveInvalidate;
- (void)viewDidLoad;
@property(nonatomic) BOOL repositoryHasResult;
- (void)willGoNextOrFinish;
@property(nonatomic, readonly) BOOL canGoForward;
@property(nonatomic, copy) NSString *nextAssistantIdentifier;
@property(nonatomic, retain) DVTSourceControlRemoteRepository *packageRemoteRepository; // @synthesize packageRemoteRepository;
@property(nonatomic, retain) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator;
@property(nonatomic, retain) NSButton *repoDetailToggleButton; // @synthesize repoDetailToggleButton;
@property(nonatomic, retain) NSSearchField *searchField; // @synthesize searchField;
@property(nonatomic) __weak DVTReplacementView *replacementView; // @synthesize replacementView;

@end

