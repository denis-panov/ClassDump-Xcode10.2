//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

@class NSDictionary, NSString;

@protocol _TtP7XCBuild24XCBTaskExecutionDelegate_
- (void)validateEmbeddedBinaryWithInputPath:(NSString *)arg1 certSHA1Hash:(NSString *)arg2 parentInfoPlistPath:(NSString *)arg3 completion:(void (^)(_TtC7XCBuild22XCBClientRequestResult *))arg4;
- (void)generateIntentDefinitionFilesWithInputPath:(NSString *)arg1 outputDirPath:(NSString *)arg2 languageToGenerate:(NSString *)arg3 classPrefix:(NSString *)arg4 swiftVersion:(NSString *)arg5 completion:(void (^)(_TtC7XCBuild22XCBClientRequestResult *))arg6;
- (void)generateCoreDataModelFilesWithInputPath:(NSString *)arg1 outputDirPath:(NSString *)arg2 deploymentTargets:(NSDictionary *)arg3 swiftVersion:(NSString *)arg4 completion:(void (^)(_TtC7XCBuild22XCBClientRequestResult *))arg5;
@end

