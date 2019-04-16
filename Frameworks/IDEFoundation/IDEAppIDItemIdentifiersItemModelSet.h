//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEFoundation/DVTInvalidation-Protocol.h>
#import <IDEFoundation/IDEAppIDContainerFlightCheckDelegate-Protocol.h>

@class DVTFuture, DVTPortalContainerType, DVTStackBacktrace, IDEProjectItemModel, NSOrderedSet, NSSet, NSString;
@protocol IDEFlightChecking;

@interface IDEAppIDItemIdentifiersItemModelSet : NSObject <DVTInvalidation, IDEAppIDContainerFlightCheckDelegate>
{
    id <IDEFlightChecking> _flightCheck;
    NSOrderedSet *_unexpandedIdentifiers;
    DVTFuture *_validationF;
    unsigned int _currentGeneration;
    BOOL _requiresPortalIdentifiers;
    IDEProjectItemModel *_itemModel;
    NSString *_teamItemsKeyPath;
    NSString *_featuresItemsKeyPath;
    DVTPortalContainerType *_containerType;
    NSSet *_availableTeamIdentifiers;
}

+ (id)expandedIdentifiers:(id)arg1 targetCapabilitiesContext:(id)arg2 buildConfiguration:(id)arg3 expansion:(id)arg4 error:(id *)arg5;
+ (void)initialize;
@property(retain) NSSet *availableTeamIdentifiers; // @synthesize availableTeamIdentifiers=_availableTeamIdentifiers;
@property(readonly) DVTPortalContainerType *containerType; // @synthesize containerType=_containerType;
@property(readonly) NSString *featuresItemsKeyPath; // @synthesize featuresItemsKeyPath=_featuresItemsKeyPath;
@property(readonly) NSString *teamItemsKeyPath; // @synthesize teamItemsKeyPath=_teamItemsKeyPath;
@property(retain) IDEProjectItemModel *itemModel; // @synthesize itemModel=_itemModel;
@property(readonly) BOOL requiresPortalIdentifiers; // @synthesize requiresPortalIdentifiers=_requiresPortalIdentifiers;
- (void).cxx_destruct;
- (void)flightCheckIsValidating:(id)arg1;
- (id)containerIdentifiersForFlightCheck:(id)arg1 error:(id *)arg2;
@property(readonly) id <IDEFlightChecking> flightCheck;
- (id)refreshAvailableTeamIdentifiers;
- (id)_availableTeamContainerIdentifiersForAccount:(id)arg1 teamID:(id)arg2 portalProgram:(id)arg3 error:(id *)arg4;
- (id)expandedIdentifiersWithError:(id *)arg1;
- (id)expandedIdentifier:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic) NSOrderedSet *unexpandedIdentifiers;
- (void)_setUnexpandedIdentifiers:(id)arg1 postAssignmentBlock:(CDUnknownBlockType)arg2;
- (void)primitiveInvalidate;
- (id)initWithoutPortalWithItemModel:(id)arg1;
- (id)initWithItemModel:(id)arg1 teamItemsKeyPath:(id)arg2 containerType:(id)arg3;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

