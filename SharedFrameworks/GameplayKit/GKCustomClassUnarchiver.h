//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <GameplayKit/NSKeyedUnarchiverDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface GKCustomClassUnarchiver : NSObject <NSKeyedUnarchiverDelegate>
{
    NSMutableDictionary *_cache;
}

- (void).cxx_destruct;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
- (id)_findValidClassName:(id)arg1;
- (id)_mangledSwiftClassName:(id)arg1 moduleName:(id)arg2;
- (id)_currentAppModuleName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

