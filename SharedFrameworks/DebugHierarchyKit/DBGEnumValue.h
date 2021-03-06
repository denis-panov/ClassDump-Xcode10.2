//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DebugHierarchyKit/DBGValue-Protocol.h>
#import <DebugHierarchyKit/DBGValueJSONSerialization-Protocol.h>

@class NSString;

@interface DBGEnumValue : NSObject <DBGValueJSONSerialization, DBGValue>
{
    id _enumValue;
}

+ (id)withValue:(id)arg1;
+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id *)arg3;
@property(retain) id enumValue; // @synthesize enumValue=_enumValue;
- (void).cxx_destruct;
- (id)objectValue;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (void)setUnsignedIntegerValue:(unsigned long long)arg1;
- (unsigned long long)unsignedIntegerValue;
- (void)setIntegerValue:(long long)arg1;
- (long long)integerValue;
- (id)initWithCustomValue:(id)arg1;
- (id)JSONCompatibleRepresentation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

