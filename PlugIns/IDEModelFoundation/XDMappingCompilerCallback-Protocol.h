//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

@class NSString;

@protocol XDMappingCompilerCallback
- (BOOL)continueGeneration;
- (void)addWarningForElement:(id)arg1 prefix:(NSString *)arg2 message:(NSString *)arg3 category:(int)arg4;
- (void)addErrorForElement:(id)arg1 prefix:(NSString *)arg2 message:(NSString *)arg3 category:(int)arg4;
@end

