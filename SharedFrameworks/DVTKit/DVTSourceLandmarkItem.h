//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DVTKit/DVTSourceLandmarkItemProtocol-Protocol.h>

@class DVTStackBacktrace, NSArray, NSMutableArray, NSString;
@protocol DVTSourceLandmarkItemDelegate;

@interface DVTSourceLandmarkItem : NSObject <DVTSourceLandmarkItemProtocol>
{
    DVTSourceLandmarkItem *_parent;
    NSMutableArray *_children;
    NSString *_name;
    unsigned long long _type;
    unsigned long long _markStyle;
    struct _NSRange _range;
    struct _NSRange _nameRange;
    NSString *_typeName;
    long long _nestingLevel;
    long long _indentLevel;
    double _timestamp;
    DVTStackBacktrace *_pendingUpdateBacktrace;
    id <DVTSourceLandmarkItemDelegate> _delegate;
    void *_itemRef;
}

+ (unsigned long long)sourceLandmarkItemTypeForNodeType:(long long)arg1;
@property long long indentLevel; // @synthesize indentLevel=_indentLevel;
@property long long nestingLevel; // @synthesize nestingLevel=_nestingLevel;
@property(readonly) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) struct _NSRange nameRange; // @synthesize nameRange=_nameRange;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property unsigned long long markStyle; // @synthesize markStyle=_markStyle;
@property(readonly) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property DVTSourceLandmarkItem *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (id)landmarkItemTypeName;
- (unsigned long long)landmarkItemType;
- (struct _NSRange)landmarkItemNameRange;
- (struct _NSRange)landmarkItemRange;
- (id)landmarkItemName;
- (id)childLandmarkItems;
- (long long)numberOfChildLandmarkItems;
- (id)parentLandmarkItem;
@property(readonly) BOOL needsUpdate;
- (void)markForUpdate;
- (long long)compareWithLandmarkItem:(id)arg1;
- (BOOL)isDeclaration;
- (void)removeChildAtIndex:(long long)arg1;
- (void)insertChild:(id)arg1 atIndex:(long long)arg2;
- (void)removeObjectFromChildrenAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inChildrenAtIndex:(unsigned long long)arg2;
@property(readonly) long long numberOfChildren;
@property(readonly) NSMutableArray *_children;
@property(readonly) NSArray *children;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, copy, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
- (void)_evaluateTypeName;
- (void)_evaluateNameAndRange;
- (void)dealloc;
- (id)initWithItem:(id)arg1 type:(unsigned long long)arg2 delegate:(id)arg3;
- (id)initWithItemReference:(void *)arg1 type:(unsigned long long)arg2 delegate:(id)arg3;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2;

@end

