//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEKit/DVTXMLUnarchiving-Protocol.h>

@class NSMutableSet, NSString;

@interface IDEVariablesViewContextState : NSObject <DVTXMLUnarchiving>
{
    NSString *_contextName;
    NSMutableSet *_expandedNodePaths;
    NSMutableSet *_persistentStrings;
}

@property(readonly) NSMutableSet *persistentStrings; // @synthesize persistentStrings=_persistentStrings;
@property(readonly) NSString *contextName; // @synthesize contextName=_contextName;
- (void).cxx_destruct;
- (void)addPersistentStrings:(id)arg1 fromXMLUnarchiver:(id)arg2;
- (void)dvt_encodeRelationshipsWithXMLArchiver:(id)arg1 version:(id)arg2;
- (void)dvt_encodeAttributesWithXMLArchiver:(id)arg1 version:(id)arg2;
- (id)initFromXMLUnarchiver:(id)arg1 archiveVersion:(float)arg2;
@property(readonly) BOOL isEmpty;
- (BOOL)isNodeExpanded:(id)arg1;
- (void)nodeExpandedStateChanged:(id)arg1;
- (void)_variablesViewContextStateCommonInit;
- (id)initWithContextName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

