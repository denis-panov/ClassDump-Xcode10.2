//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

@class NSNumber, NSSet, NSString;

@protocol XCTestDriverInterface
- (id)_IDE_processWithToken:(NSNumber *)arg1 exitedWithStatus:(NSNumber *)arg2;
- (id)_IDE_stopTrackingProcessWithToken:(NSNumber *)arg1;
- (id)_IDE_processWithBundleID:(NSString *)arg1 path:(NSString *)arg2 pid:(NSNumber *)arg3 crashedUnderSymbol:(NSString *)arg4;
- (id)_IDE_shutdown;
- (id)_IDE_executeTestIdentifiers:(NSSet *)arg1 skippingTestIdentifiers:(NSSet *)arg2;
- (id)_IDE_fetchDiscoveredTestClasses;
- (id)_IDE_startExecutingTestPlanWithProtocolVersion:(NSNumber *)arg1;
@end

