//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol XCBuildInfoManagers;

@interface XCBuildInfo : NSObject
{
    struct os_unfair_lock_s _lock;
    id _entityIdent;
    id <XCBuildInfoManagers> _manager;
    NSDictionary *_indexingInfo;
    NSDictionary *_ASTBuildingInfo;
    NSString *_prefixFilePath;
    NSString *_precompFilePath;
    NSString *_gccDialectName;
}

- (void).cxx_destruct;
- (id)description;
- (void)setGccDialectName:(id)arg1;
- (id)gccDialectName;
- (void)setPrecompFilePath:(id)arg1;
- (id)precompFilePath;
- (void)setPrefixFilePath:(id)arg1;
- (id)prefixFilePath;
- (void)setASTBuildingInfo:(id)arg1;
- (id)ASTBuildingInfo;
- (void)setIndexingInfo:(id)arg1;
- (id)indexingInfo;
- (void)invalidate;
- (BOOL)isValid;
- (id)entityIdentifier;
- (void)dealloc;
- (id)initWithEntityIdentifer:(id)arg1 manager:(id)arg2;

@end
