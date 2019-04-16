//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/IBMemberRecord.h>

#import <IDEInterfaceBuilderKit/NSCoding-Protocol.h>

@class IBGroup, IBMemberPropertyStorage, NSMutableArray, NSObject, NSString;

@interface IBObjectRecord : IBMemberRecord <NSCoding>
{
    NSMutableArray *_children;
    NSString *_explicitLabel;
    NSObject *_parent;
    IBObjectRecord *_parentRecord;
    IBGroup *_group;
    IBMemberPropertyStorage *_memberPropertyStorage;
}

@property(retain) IBMemberPropertyStorage *memberPropertyStorage; // @synthesize memberPropertyStorage=_memberPropertyStorage;
@property(nonatomic) __weak IBGroup *group; // @synthesize group=_group;
@property(retain) IBObjectRecord *parentRecord; // @synthesize parentRecord=_parentRecord;
@property(retain) NSObject *parent; // @synthesize parent=_parent;
@property(copy) NSString *explicitLabel; // @synthesize explicitLabel=_explicitLabel;
- (void).cxx_destruct;
- (BOOL)isObjectRecord;
- (void)verifyNoDuplicateChildren;
- (BOOL)isDescendantOfObjectRecord:(id)arg1;
- (id)description;
- (id)children;
- (void)removeChild:(id)arg1;
- (void)addChild:(id)arg1;
- (void)insertChild:(id)arg1 atIndex:(long long)arg2;
- (void)moveChild:(id)arg1 toIndex:(long long)arg2;
- (id)object;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

