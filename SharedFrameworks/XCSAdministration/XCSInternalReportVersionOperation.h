//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <XCSAdministration/XCSInitializationOperation.h>

@interface XCSInternalReportVersionOperation : XCSInitializationOperation
{
}

- (void)cancel;
- (void)run;
- (void)_reportSuccess:(BOOL)arg1;
- (id)_sendVersions:(id)arg1 success:(BOOL)arg2;
- (id)_collectVersions;
- (id)xcode;
- (BOOL)failSilently;
- (id)statusDescription;

@end

