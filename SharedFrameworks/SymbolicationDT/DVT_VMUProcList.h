//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface DVT_VMUProcList : NSObject
{
    NSLock *procLock;
    NSMutableDictionary *allProcs;
    NSMutableDictionary *filteredProcs;
    BOOL appsOnly;
    BOOL ownedOnly;
}

- (void).cxx_destruct;
- (id)procInfoWithPID:(int)arg1;
- (id)newestProcInfoWithName:(id)arg1;
- (id)newestProcInfo;
- (id)allPathNames;
- (id)allNames;
- (id)allPIDs;
- (id)allProcInfos;
- (unsigned long long)count;
- (BOOL)appsOnly;
- (void)setAppsOnly:(BOOL)arg1;
- (BOOL)ownedOnly:(BOOL)arg1;
- (void)setOwnedOnly:(BOOL)arg1;
- (BOOL)updateFromSystem;
- (void)_populateFromSystem;
- (BOOL)update;
- (void)removeProcInfo:(id)arg1;
- (void)addProcInfo:(id)arg1;
- (void)setProcInfos:(id)arg1;
- (id)init;

@end

