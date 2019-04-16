//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IBFoundation/IBBinaryArchiving-Protocol.h>
#import <IBFoundation/NSCoding-Protocol.h>
#import <IBFoundation/NSCopying-Protocol.h>
#import <IBFoundation/NSFastEnumeration-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface IBICSlot : NSObject <NSFastEnumeration, NSCopying, NSCoding, IBBinaryArchiving>
{
    id *_componentsByID;
    id *_denseComponents;
    NSDictionary *_unknownIDsByClass;
    unsigned long long _hash;
    unsigned long long _numberOfNonPlaceholderValueComponents;
}

+ (BOOL)variesByComponent:(Class)arg1;
+ (unsigned long long)componentIDMask;
+ (id)orderedComponentClasses;
+ (Class)assetRepClass;
+ (Class)assetSetClass;
+ (id)decodeWithBinaryUnarchiver:(id)arg1;
+ (id)genesisSlotsForSlots:(id)arg1;
+ (id)slotWithComponents:(id)arg1;
+ (id)rootNameFromPath:(id)arg1;
+ (id)slotFromFileName:(id)arg1 returningRootName:(id *)arg2 andExtension:(id *)arg3 withDefaults:(id)arg4;
+ (id)slotFromFileName:(id)arg1 returningRootName:(id *)arg2 andExtension:(id *)arg3;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (id)slotWithComponents:(id *)arg1 count:(unsigned long long)arg2 unknownIDs:(id)arg3;
+ (id)slotWithComponents:(id *)arg1 count:(unsigned long long)arg2;
- (void).cxx_destruct;
- (id)baseSlotWithoutSecondaryVariations;
- (BOOL)containsAllSlotComponents:(id)arg1;
- (void)ibic_generateAttributes:(CDUnknownBlockType)arg1;
- (id)slotBySettingSlotComponents:(const id *)arg1 count:(long long)arg2;
- (id)slotBySettingSlotComponents:(id)arg1;
- (id)slotBySettingSlotComponent:(id)arg1;
- (long long)numberOfUnknownComponentIdentifiers;
- (long long)numberOfNonPlaceholderValueComponents;
- (id)slotComponentEnumerator;
@property(readonly) NSArray *components;
- (id)outputFileNameGivenBaseName:(id)arg1 andExtension:(id)arg2;
- (id)detailAreaPath;
- (BOOL)isValidFileNameForDragAndDrop:(id)arg1;
- (id)requiredFileName;
- (id)displayName;
@property(readonly, copy) NSString *description;
- (id)stringRepresentation;
- (id)stringRepresentationWithValueFormat:(id)arg1 placeholdFormat:(id)arg2 emptyPlaceholder:(id)arg3;
- (id)shortDisplayNameConsideringCounterparts:(id)arg1;
@property(readonly) unsigned long long hash;
- (long long)compareDisplayOrder:(id)arg1;
- (BOOL)hasUnknownComponentIdentifier;
- (id)unknownComponentIdentifierForClass:(Class)arg1;
- (id)slotComponentForClass:(Class)arg1;
- (id)slotComponentForComponentID:(long long)arg1;
- (BOOL)containsComponent:(id)arg1;
- (void)enumerateOrderedSlotComponentsAndValues:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithComponents:(id)arg1 unknownIDs:(id)arg2;
- (void)captureComponents;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)_initWithComponents:(id *)arg1 count:(unsigned long long)arg2 unknownIDs:(id)arg3 delayCapturingComponents:(BOOL)arg4;
- (id)initWithComponents:(id *)arg1 count:(unsigned long long)arg2 unknownIDs:(id)arg3;
- (void)extractSlotsByComponentID:(id *)arg1 capacity:(long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSlot:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

