//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEInterfaceBuilderKit/DVTInvalidation-Protocol.h>
#import <IDEInterfaceBuilderKit/NSCoding-Protocol.h>

@class DVTDelayedInvocation, DVTLogAspect, DVTStackBacktrace, IBDocument, IBMutableIdentityDictionary, NSArray, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface IBClassDescriber : NSObject <NSCoding, DVTInvalidation>
{
    DVTDelayedInvocation *_classDataIsUpdatingDelayedInvocation;
    NSSet *_readonlyPartialsToIntegrateWhenClassProvidersAreFirstSet;
    IBMutableIdentityDictionary *_classProviderObservingTokens;
    NSMutableSet *_observers;
    NSArray *_classProviders;
    IBDocument *_document;
    DVTLogAspect *_logAspect;
    NSMutableDictionary *_classNamesToHighestPriorityRecord;
    NSMutableDictionary *_sourceIDsToInitialRecordForSource;
    NSMutableDictionary *_tieBrokenClassNamesToSubclassNames;
    NSMutableDictionary *_tieBrokenClassNamesToSuperclassDefiningRecords;
    BOOL _notificationIsScheduled;
    double _timeOfLastObserverNotification;
    NSMutableSet *_modifiedClassNamesForNextObserverNotification;
    BOOL _classDataIsUpdating;
}

+ (void)initialize;
@property BOOL classDataIsUpdating; // @synthesize classDataIsUpdating=_classDataIsUpdating;
@property(copy, nonatomic) NSArray *classProviders; // @synthesize classProviders=_classProviders;
@property(retain, nonatomic) IBDocument *document; // @synthesize document=_document;
- (void).cxx_destruct;
- (id)orderedRelationsOfRelationshipType:(long long)arg1 forClassNamed:(id)arg2 recursive:(BOOL)arg3;
- (id)namedRelationsOfRelationshipType:(long long)arg1 forClassNamed:(id)arg2 recursive:(BOOL)arg3;
- (void)fallbackToNextSuperclassCandidateForClassNamed:(id)arg1;
- (void)integratePartialClassDescriptions:(id)arg1;
- (void)removePartialDescriptionsWithSourceIdentifiers:(id)arg1;
- (void)removeKnownSubclassWithName:(id)arg1 fromSuperclassWithName:(id)arg2;
- (void)addKnownSubclassWithName:(id)arg1 toSuperclassWithName:(id)arg2;
- (id)recomputeSuperclassRecordForClassNamed:(id)arg1;
- (void)primitiveInvalidate;
- (BOOL)isSystemClassName:(id)arg1;
- (id)typeForInspectable:(id)arg1 forClassNamed:(id)arg2 recursive:(BOOL)arg3;
- (id)collectionTypeForToManyOutlet:(id)arg1 forClassNamed:(id)arg2 recursive:(BOOL)arg3;
- (id)memberTypeForToManyOutlet:(id)arg1 forClassNamed:(id)arg2 recursive:(BOOL)arg3;
- (id)typeForToOneOutlet:(id)arg1 forClassNamed:(id)arg2 recursive:(BOOL)arg3;
- (id)typeForAction:(id)arg1 forClassNamed:(id)arg2 recursive:(BOOL)arg3;
- (id)typeForNamedRelation:(id)arg1 ofRelationshipType:(long long)arg2 forClassNamed:(id)arg3 recursive:(BOOL)arg4;
- (id)lineageEnumeratorForClassNamed:(id)arg1;
- (id)inheritanceEnumeratorForClassNamed:(id)arg1;
- (id)possiblyCyclicInheritanceOfClassNamed:(id)arg1 order:(long long)arg2;
- (id)definitiveValueForClassName:(id)arg1 recurse:(BOOL)arg2 fromBlock:(CDUnknownBlockType)arg3;
- (void)enumerateInheritanceOfClassNamed:(id)arg1 recurse:(BOOL)arg2 order:(long long)arg3 withBlock:(CDUnknownBlockType)arg4;
- (id)orderedInspectableInfosForClassNamed:(id)arg1 recursive:(BOOL)arg2;
- (id)inspectablesForClassNamed:(id)arg1 recursive:(BOOL)arg2;
- (id)toManyOutletsForClassNamed:(id)arg1 recursive:(BOOL)arg2;
- (id)toOneOutletsForClassNamed:(id)arg1 recursive:(BOOL)arg2;
- (id)actionsForClassNamed:(id)arg1 recursive:(BOOL)arg2;
- (id)namedRelationsOfRelationshipType:(long long)arg1 forClassNamed:(id)arg2 matchingClassNamed:(id)arg3 recursive:(BOOL)arg4;
- (id)namedRelationsOfRelationshipType:(long long)arg1;
- (id)suggestedClassSymbolForUnqualifiedClassName:(id)arg1 inWorkspace:(id)arg2;
- (BOOL)moduleNamed:(id)arg1 inWorkspace:(id)arg2 containsAllClassesNamed:(id)arg3;
- (BOOL)blueprint:(id)arg1 inWorkspace:(id)arg2 containsClassNamed:(id)arg3;
- (id)namesOfModulesContainingClassNamed:(id)arg1 inWorkspace:(id)arg2;
- (id)classDescriptionSourcesDescribingClassNamed:(id)arg1;
- (BOOL)isClassNameDesignable:(id)arg1 recursive:(BOOL)arg2;
- (id)commonBaseClassOfClassesNamed:(id)arg1;
- (BOOL)shouldRefactorLabelForSourceClass:(id)arg1 withContainingClassName:(id)arg2;
- (long long)isTypeNamed:(id)arg1 aKindOfTypeNameInSet:(id)arg2;
- (long long)isTypeNamed:(id)arg1 aKindOfTypeNamed:(id)arg2;
- (BOOL)isClassNameCompletelyDescribed:(id)arg1;
- (BOOL)isRootClass:(id)arg1;
- (id)classNamesReferencedByDocument;
- (id)classNamesForClassesWithActionsNamed:(id)arg1;
- (id)classNames;
- (id)descendantsOfClassesNamed:(id)arg1;
- (id)descendantsOfClassNamed:(id)arg1;
- (id)partialClassDescriptionsForClassNamed:(id)arg1;
- (id)possiblyCyclicSuperclassOfClassNamed:(id)arg1;
- (BOOL)hasDescriptionOfClassNamed:(id)arg1;
- (id)possiblyCyclicSubclassesOfClassNamed:(id)arg1;
- (void)scheduleOrImmediatelySendNotificationOfModifiedClass:(id)arg1;
- (void)notifyObserversOfModifiedClasses;
- (id)addObserver:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)allPartialClassDescriptions;
- (void)assertTableConsistency;
- (void)initializeClassDataIsUpdatingDelayedInvocation;
- (id)initWithDocument:(id)arg1;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
