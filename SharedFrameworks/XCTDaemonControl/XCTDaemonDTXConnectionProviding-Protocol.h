//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <XCTDaemonControl/XCTConfigurableDebugLogger-Protocol.h>

@protocol XCTRemoteHostDiagnosticReportsSynchronizing;

@protocol XCTDaemonDTXConnectionProviding <XCTConfigurableDebugLogger>
@property(readonly) id <XCTRemoteHostDiagnosticReportsSynchronizing> remoteHostDiagnosticReportsSynchronizer;
- (void)invalidate;
- (void)makeConnectionWithCompletion:(void (^)(DTXConnection *, NSError *))arg1;
@end

