//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DYSymbolicator, NSString;

@interface DYStackFrame : NSObject
{
    DYSymbolicator *_symbolicator;
    unsigned long long _address;
    unsigned long long _index;
    struct _CSTypeRef _owner;
    struct _CSTypeRef _symbol;
    struct _CSTypeRef _sourceInfo;
}

@property(nonatomic) struct _CSTypeRef sourceInfo; // @synthesize sourceInfo=_sourceInfo;
@property(nonatomic) struct _CSTypeRef symbol; // @synthesize symbol=_symbol;
@property(nonatomic) struct _CSTypeRef owner; // @synthesize owner=_owner;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) unsigned long long address; // @synthesize address=_address;
@property(retain, nonatomic) DYSymbolicator *symbolicator; // @synthesize symbolicator=_symbolicator;
- (void).cxx_destruct;
- (BOOL)hasSymbols;
- (unsigned int)lineNumber;
- (id)shortFormat;
- (id)fullFormat;
@property(readonly, nonatomic) NSString *ownerPath;
@property(readonly, nonatomic) NSString *ownerName;

@end

