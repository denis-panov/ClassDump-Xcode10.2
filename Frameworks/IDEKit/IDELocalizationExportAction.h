//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDELocalizationAction.h>

@class DVTFilePath, IDEContainer, IDEWorkspaceTabController;
@protocol IDELocalizedContainer;

@interface IDELocalizationExportAction : IDELocalizationAction
{
    IDEContainer<IDELocalizedContainer> *_project;
    IDEWorkspaceTabController *_workspaceTabController;
    DVTFilePath *_destinationFilePath;
}

@property(retain) DVTFilePath *destinationFilePath; // @synthesize destinationFilePath=_destinationFilePath;
@property(retain) IDEWorkspaceTabController *workspaceTabController; // @synthesize workspaceTabController=_workspaceTabController;
@property(retain) IDEContainer<IDELocalizedContainer> *project; // @synthesize project=_project;
- (void).cxx_destruct;
- (id)createController;

@end

