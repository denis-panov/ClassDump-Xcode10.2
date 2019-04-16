//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <Foundation/NSError.h>

@interface NSError (MDLTSUAdditions)
+ (id)mdltsu_errorWithError:(id)arg1 alertTitle:(id)arg2 alertMessage:(id)arg3 additionalUserInfo:(id)arg4;
+ (id)mdltsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;
+ (id)mdltsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4 userInfo:(id)arg5;
+ (id)mdltsu_errorWithDomain:(id)arg1 code:(long long)arg2 alertTitle:(id)arg3 alertMessage:(id)arg4;
+ (id)mdltsu_errorWithCode:(long long)arg1 userInfo:(id)arg2;
+ (id)mdltsu_errorWithDomain:(id)arg1 code:(long long)arg2 description:(id)arg3 recoverySuggestion:(id)arg4;
- (BOOL)mdltsu_isErrorPassingTest:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL mdltsu_isNoSuchFileError;
@property(readonly, nonatomic) BOOL mdltsu_isCancelError;
@property(readonly, nonatomic) BOOL mdltsu_isOutOfSpaceError;
- (id)mdltsu_localizedAlertMessage;
- (id)mdltsu_localizedAlertTitle;
- (id)mdltsu_errorPreservingCancel;
- (id)mdltsu_errorPreservingAlertTitle;
@end

