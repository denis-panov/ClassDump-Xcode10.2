//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface XCTMobileSyncFramework : NSObject
{
    // Error parsing type: AQ, name: _mobileSyncRefCount
    CDStruct_033b0dbe _mobileSyncFunctions;
}

+ (void)resetSharedMobileSyncFunctions;
+ (CDStruct_033b0dbe)standardMobileSyncFunctions;
+ (void)setSharedMobileSyncFunctions:(CDStruct_033b0dbe)arg1;
+ (CDStruct_033b0dbe)sharedMobileSyncFunctions;
@property(readonly) CDStruct_033b0dbe mobileSyncFunctions; // @synthesize mobileSyncFunctions=_mobileSyncFunctions;
- (BOOL)cleanupMobileSync:(id *)arg1;
- (BOOL)disconnectFromTargetWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)crashReportPathForTargetWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)syncCrashReportsFromTargetWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)connectToTargetWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)initializeMobileSync:(id *)arg1;
- (id)init;
- (id)initWithMobileSyncFunctions:(CDStruct_033b0dbe)arg1;

@end

