//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <Xcode3UI/Xcode3FileBuildPhaseViewController.h>

@class DVTObservingToken, DVTPopUpButtonCell, NSCell;

@interface Xcode3CompileSourcesBuildPhaseViewController : Xcode3FileBuildPhaseViewController
{
    DVTPopUpButtonCell *_migDefsRoleCell;
    NSCell *_noRoleCell;
    BOOL _hasMigDefsFiles;
    DVTObservingToken *_childObservingToken;
}

- (void).cxx_destruct;
- (id)_objectValueForRoleColumnOfBuildFile:(id)arg1;
- (void)_setMigDefsFileRole:(id)arg1;
- (id)_dataCellForRoleOfBuildFile:(id)arg1;
- (id)_noRoleCell;
- (id)_migDefsRoleCell;
- (BOOL)_canSetRole;
- (void)viewDidInstall;
- (void)primitiveInvalidate;
- (id)initWithBuildFileGroup:(id)arg1 ofBuildPhase:(id)arg2;

@end

