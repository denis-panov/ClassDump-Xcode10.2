//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEViewController.h>

@class NSString;

@interface IDESourceControlNewProjectConfigurationViewController : IDEViewController
{
    BOOL _enableCreateLocalRepository;
    BOOL _shouldCreateLocalRepository;
    BOOL _shouldCreateLocalRepositoryTemporaryValue;
    NSString *_repositoryCreationMessage;
}

+ (id)defaultViewNibName;
@property(copy) NSString *repositoryCreationMessage; // @synthesize repositoryCreationMessage=_repositoryCreationMessage;
@property(nonatomic) BOOL shouldCreateLocalRepository; // @synthesize shouldCreateLocalRepository=_shouldCreateLocalRepository;
@property BOOL enableCreateLocalRepository; // @synthesize enableCreateLocalRepository=_enableCreateLocalRepository;
- (void).cxx_destruct;
- (void)createGitRepositoryWithFilePath:(id)arg1 workspaceUIHandler:(id)arg2;
- (void)updateDirectoryURL:(id)arg1;
- (void)viewDidInstall;

@end

