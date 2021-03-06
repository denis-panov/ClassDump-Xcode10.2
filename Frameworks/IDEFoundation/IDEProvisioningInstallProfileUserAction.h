//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEProvisioningUserAction.h>

@class DVTProvisioningProfile;

@interface IDEProvisioningInstallProfileUserAction : IDEProvisioningUserAction
{
    DVTProvisioningProfile *_profile;
}

@property(readonly) DVTProvisioningProfile *profile; // @synthesize profile=_profile;
- (void).cxx_destruct;
- (BOOL)supportsBatchAuthorization;
- (id)userActionName;
- (id)userActionMessage;
- (id)userActionTitle;
- (id)initWithProfile:(id)arg1 context:(id)arg2;

@end

