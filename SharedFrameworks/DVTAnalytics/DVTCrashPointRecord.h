//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DVTAnalytics/DVTAnalyticsSnapshotFileSystemSerialization-Protocol.h>

@class DVTAnalyticsCrashPointIdentifier, DVTAnalyticsPointUserData, DVTFilePath, NSMutableDictionary, NSString;

@interface DVTCrashPointRecord : NSObject <DVTAnalyticsSnapshotFileSystemSerialization>
{
    DVTAnalyticsCrashPointIdentifier *_crashPointIdentifier;
    DVTAnalyticsPointUserData *_userData;
    NSString *_sourceFileName;
    unsigned long long _sourceFileLine;
    DVTFilePath *_cachePath;
    NSMutableDictionary *_crashPointForFilter;
    NSString *_locallySymbolicatedCrashPointName;
    NSString *_locallySymbolicatedSourceFileName;
    unsigned long long _locallySymbolicatedSourceFileLine;
}

+ (id)objectFromFilePath:(id)arg1 error:(id *)arg2;
@property unsigned long long locallySymbolicatedSourceFileLine; // @synthesize locallySymbolicatedSourceFileLine=_locallySymbolicatedSourceFileLine;
@property(copy) NSString *locallySymbolicatedSourceFileName; // @synthesize locallySymbolicatedSourceFileName=_locallySymbolicatedSourceFileName;
@property(copy) NSString *locallySymbolicatedCrashPointName; // @synthesize locallySymbolicatedCrashPointName=_locallySymbolicatedCrashPointName;
@property(retain) NSMutableDictionary *crashPointForFilter; // @synthesize crashPointForFilter=_crashPointForFilter;
@property(copy) DVTFilePath *cachePath; // @synthesize cachePath=_cachePath;
@property unsigned long long sourceFileLine; // @synthesize sourceFileLine=_sourceFileLine;
@property(copy) NSString *sourceFileName; // @synthesize sourceFileName=_sourceFileName;
@property(readonly) DVTAnalyticsPointUserData *userData; // @synthesize userData=_userData;
@property(readonly) DVTAnalyticsCrashPointIdentifier *crashPointIdentifier; // @synthesize crashPointIdentifier=_crashPointIdentifier;
- (void).cxx_destruct;
- (id)snapshotWithError:(id *)arg1;
- (id)_crashPointSnapshotsWithError:(id *)arg1;
- (id)_infoJSON;
- (id)crashPointForFilter:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithIdentifier:(id)arg1 userData:(id)arg2 sourceFileName:(id)arg3 sourceFileLine:(unsigned long long)arg4 cachePath:(id)arg5;
- (id)init;

@end
