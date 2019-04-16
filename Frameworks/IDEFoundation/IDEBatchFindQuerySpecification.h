//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSSecureCoding-Protocol.h>

@class IDEBatchFindNamedScope, IDEBatchFindQueryTerm;

@interface IDEBatchFindQuerySpecification : NSObject <NSSecureCoding>
{
    BOOL _matchCase;
    IDEBatchFindQueryTerm *_queryTerm;
    long long _anchoring;
    Class _queryClass;
    IDEBatchFindNamedScope *_namedScope;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) IDEBatchFindNamedScope *namedScope; // @synthesize namedScope=_namedScope;
@property(readonly) Class queryClass; // @synthesize queryClass=_queryClass;
@property(readonly) long long anchoring; // @synthesize anchoring=_anchoring;
@property(readonly) BOOL matchCase; // @synthesize matchCase=_matchCase;
@property(readonly) IDEBatchFindQueryTerm *queryTerm; // @synthesize queryTerm=_queryTerm;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSpecification:(id)arg1;
- (unsigned long long)hash;
- (id)termSymbolsForWorkspaceAssertingOnTypeMismatch:(id)arg1 useQualifiedNameParser:(BOOL)arg2 cancelWhen:(CDUnknownBlockType)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithQueryTerm:(id)arg1 queryClass:(Class)arg2 anchoring:(long long)arg3 matchCase:(BOOL)arg4 namedScope:(id)arg5;

@end
