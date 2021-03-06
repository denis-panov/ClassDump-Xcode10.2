//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEViewController.h>

#import <XCSUI/XCSUIDataSourceSnapshotsObserver-Protocol.h>

@class DVTBorderedView, DVTObservingToken, DVTToggleSwitch, NSButton, NSButtonCell, NSError, NSImage, NSImageView, NSMatrix, NSSecureTextField, NSString, NSTextField;

@interface XCSUIAccountPrefsServerDetailViewController : IDEViewController <XCSUIDataSourceSnapshotsObserver>
{
    DVTObservingToken *_serverEnabledWatcher;
    unsigned long long _resolutionOperationCount;
    BOOL _authenticateAsRegisteredUser;
    BOOL _reachable;
    BOOL _resolving;
    NSImageView *_connectionErrorImageView;
    DVTToggleSwitch *_enableSwitch;
    NSTextField *_addressTextField;
    NSButton *_viewServerButton;
    DVTBorderedView *_borderedView;
    NSTextField *_descriptionTextField;
    NSTextField *_userNameTextField;
    NSSecureTextField *_passwordSecureTextField;
    NSMatrix *_connectAsRadioButtons;
    NSButtonCell *_connectAsGuestRadioButton;
    NSButtonCell *_connectAsAuthenticatedUserRadioButton;
    NSTextField *_firstLevelText;
    NSTextField *_secondLevelText;
    NSTextField *_thirdLevelText;
    NSString *_displayName;
    unsigned long long _authenticationUserType;
    NSString *_username;
    NSString *_password;
    NSError *_lastKnownConnectionError;
}

+ (id)keyPathsForValuesAffectingLastKnownConnectionErrorDescription;
+ (id)keyPathsForValuesAffectingConnectionAddress;
@property(nonatomic) BOOL resolving; // @synthesize resolving=_resolving;
@property(nonatomic) BOOL reachable; // @synthesize reachable=_reachable;
@property(retain, nonatomic) NSError *lastKnownConnectionError; // @synthesize lastKnownConnectionError=_lastKnownConnectionError;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) unsigned long long authenticationUserType; // @synthesize authenticationUserType=_authenticationUserType;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property __weak NSTextField *thirdLevelText; // @synthesize thirdLevelText=_thirdLevelText;
@property __weak NSTextField *secondLevelText; // @synthesize secondLevelText=_secondLevelText;
@property __weak NSTextField *firstLevelText; // @synthesize firstLevelText=_firstLevelText;
@property __weak NSButtonCell *connectAsAuthenticatedUserRadioButton; // @synthesize connectAsAuthenticatedUserRadioButton=_connectAsAuthenticatedUserRadioButton;
@property __weak NSButtonCell *connectAsGuestRadioButton; // @synthesize connectAsGuestRadioButton=_connectAsGuestRadioButton;
@property __weak NSMatrix *connectAsRadioButtons; // @synthesize connectAsRadioButtons=_connectAsRadioButtons;
@property __weak NSSecureTextField *passwordSecureTextField; // @synthesize passwordSecureTextField=_passwordSecureTextField;
@property __weak NSTextField *userNameTextField; // @synthesize userNameTextField=_userNameTextField;
@property __weak NSTextField *descriptionTextField; // @synthesize descriptionTextField=_descriptionTextField;
@property(retain) DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property(retain) NSButton *viewServerButton; // @synthesize viewServerButton=_viewServerButton;
@property __weak NSTextField *addressTextField; // @synthesize addressTextField=_addressTextField;
@property __weak DVTToggleSwitch *enableSwitch; // @synthesize enableSwitch=_enableSwitch;
@property BOOL authenticateAsRegisteredUser; // @synthesize authenticateAsRegisteredUser=_authenticateAsRegisteredUser;
@property(retain) NSImageView *connectionErrorImageView; // @synthesize connectionErrorImageView=_connectionErrorImageView;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long resolutionOperationCount;
- (void)completeResolutionOperation;
- (void)startResolutionOperation;
@property(readonly) NSImage *accountImage;
- (void)refreshVersionString:(id)arg1;
@property(readonly, nonatomic) NSString *lastKnownConnectionErrorDescription;
- (void)viewServer:(id)arg1;
- (void)updatePassword:(id)arg1;
- (void)updateUsername:(id)arg1;
- (void)updateDisplayName:(id)arg1;
- (void)updateAuthenticationUserTypeRegisteredUser:(id)arg1;
- (void)updateAuthenticationUserTypeGuest:(id)arg1;
- (void)retryConnectionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)retryConnection;
- (void)refreshConnectionAddress;
- (void)updateControlEnabledStateForService:(id)arg1;
- (void)dataSource:(id)arg1 versionInfoSnapshotsChanged:(id)arg2;
- (void)setRepresentedObject:(id)arg1;
- (id)contextMenu;
- (void)primitiveInvalidate;
- (void)loadView;

@end

