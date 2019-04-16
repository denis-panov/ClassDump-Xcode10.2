//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <XCSAdministration/XCSServiceUser.h>

@protocol _TtP17XCSAdministration14ProcessService_, _TtP17XCSAdministration14SessionService_;

@interface XCSHiddenBuildServiceUser : XCSServiceUser
{
    id <_TtP17XCSAdministration14ProcessService_> _processService;
    id <_TtP17XCSAdministration14SessionService_> _sessionService;
}

@property(retain, nonatomic) id <_TtP17XCSAdministration14SessionService_> sessionService; // @synthesize sessionService=_sessionService;
@property(retain, nonatomic) id <_TtP17XCSAdministration14ProcessService_> processService; // @synthesize processService=_processService;
- (void).cxx_destruct;
- (BOOL)deleteHomeDirectoryWithError:(id *)arg1;
- (BOOL)deleteWithError:(id *)arg1;
- (id)initWithUsername:(id)arg1 primaryGroupName:(id)arg2 homeDirectoryPath:(id)arg3 directoryService:(id)arg4 processService:(id)arg5 sessionService:(id)arg6;

@end

