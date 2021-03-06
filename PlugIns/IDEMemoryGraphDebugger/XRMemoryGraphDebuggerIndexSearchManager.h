//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class IDEIndex, NSMutableDictionary;

@interface XRMemoryGraphDebuggerIndexSearchManager : NSObject
{
    IDEIndex *_index;
    NSMutableDictionary *_classNameToLocationMap;
    NSMutableDictionary *_referenceNameToLocationMap;
}

@property(retain, nonatomic) NSMutableDictionary *referenceNameToLocationMap; // @synthesize referenceNameToLocationMap=_referenceNameToLocationMap;
@property(retain, nonatomic) NSMutableDictionary *classNameToLocationMap; // @synthesize classNameToLocationMap=_classNameToLocationMap;
- (void).cxx_destruct;
- (id)documentLocationForReferenceName:(id)arg1 withSourceClassName:(id)arg2;
- (id)documentLocationForClassName:(id)arg1;
- (id)initWithIDEIndex:(id)arg1;

@end

