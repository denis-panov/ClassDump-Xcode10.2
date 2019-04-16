//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEModelFoundation/XDUMLNamedElementImp.h>

#import <IDEModelFoundation/XDUMLProperty-Protocol.h>

@class NSString;
@protocol XDUMLAssociation, XDUMLType;

@interface XDUMLPropertyImp : XDUMLNamedElementImp <XDUMLProperty>
{
    BOOL _isStatic;
    BOOL _isLeaf;
    BOOL _isOrdered;
    BOOL _isUnique;
    BOOL _isReadOnly;
    BOOL _isDerived;
    BOOL _isComposite;
    id <XDUMLType> _type;
    NSString *_default;
    id <XDUMLAssociation> _association;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)setIsReadOnly:(BOOL)arg1;
- (void)setIsComposite:(BOOL)arg1;
- (void)setAssociation:(id)arg1;
- (void)setType:(id)arg1;
- (id)type;
- (BOOL)isLeaf;
- (id)redefinitionContext;
- (id)redefinedElement;
- (id)qualifier;
- (id)associationEnd;
- (unsigned long long)aggregation;
- (id)datatype;
- (id)subsettedProperties;
- (id)redefinedProperties;
- (id)owningAssociation;
- (id)association;
- (BOOL)isDerivedUnion;
- (id)opposite;
- (BOOL)isReadOnly;
- (BOOL)isDerived;
- (BOOL)isComposite;
- (void)setDefaultValue:(id)arg1;
- (id)defaultValue;
- (id)ownerClass;
- (long long)upper;
- (long long)lower;
- (BOOL)isUnique;
- (BOOL)isOrdered;
- (void)setIsStatic:(BOOL)arg1;
- (BOOL)isStatic;
- (id)featuringClassifiers;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

