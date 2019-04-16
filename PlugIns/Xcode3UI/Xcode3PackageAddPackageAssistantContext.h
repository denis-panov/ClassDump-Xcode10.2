//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEAssistantContext.h>

@class DVTSourceControlRemoteRepository, IDESourcePackageRequirement;
@protocol DVTCancellable;

@interface Xcode3PackageAddPackageAssistantContext : IDEAssistantContext
{
    BOOL _hasValidRequirement;
    DVTSourceControlRemoteRepository *_remoteRepository;
    IDESourcePackageRequirement *_requirement;
    id <DVTCancellable> _preflightResolutionOperation;
}

@property(nonatomic) BOOL hasValidRequirement; // @synthesize hasValidRequirement=_hasValidRequirement;
@property(retain, nonatomic) id <DVTCancellable> preflightResolutionOperation; // @synthesize preflightResolutionOperation=_preflightResolutionOperation;
@property(copy, nonatomic) IDESourcePackageRequirement *requirement; // @synthesize requirement=_requirement;
@property(copy, nonatomic) DVTSourceControlRemoteRepository *remoteRepository; // @synthesize remoteRepository=_remoteRepository;
- (void).cxx_destruct;

@end

