//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DebugHierarchyFoundation/DebugHierarchyRequestAction-Protocol.h>

@class NSString;

@interface DebugHierarchyAbstractRequestAction : NSObject <DebugHierarchyRequestAction>
{
}

+ (id)actionWithDictionary:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)keysToArchiveViaKVC;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
