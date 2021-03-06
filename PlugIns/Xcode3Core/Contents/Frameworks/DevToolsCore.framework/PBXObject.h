//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class PBXObjectID;

@interface PBXObject : NSObject
{
    PBXObjectID *_objectID;
}

+ (id)longDescription;
+ (id)innerLongDescriptionWithIndentLevel:(unsigned long long)arg1;
+ (id)description;
+ (id)innerDescription;
+ (void)setChangeNotificationsEnabled:(BOOL)arg1;
+ (BOOL)changeNotificationsEnabled;
+ (BOOL)relationshipIsWeak:(id)arg1 forPListArchiver:(id)arg2;
+ (BOOL)hasUserKeys;
+ (id)archiveNameForKey:(id)arg1;
+ (id)archivableKeysToBeSkippedByPListArchiver:(id)arg1;
+ (id)archivableWeakRelationshipsForPListArchiver:(id)arg1;
+ (id)archivableUserRelationships;
+ (id)archivableUserAttributes;
+ (id)archivableRelationships;
+ (id)archivableAttributes;
+ (void)_clearFallbackClassNameCache:(id)arg1;
+ (id)_classNameToFallbackClassNameDict;
- (void).cxx_destruct;
- (void)appendSpotlightDescriptionToString:(id)arg1;
- (id)longDescription;
- (id)innerLongDescriptionWithIndentLevel:(unsigned long long)arg1;
- (id)description;
- (id)innerDescription;
- (void)willChange;
- (void)awakeFromPListUnarchiver:(id)arg1;
- (id)readUserSettingsFromPListUnarchiver:(id)arg1;
- (id)readFromPListUnarchiver:(id)arg1;
- (void)writeUserSettingsToPListArchiver:(id)arg1;
- (void)writeToPListArchiver:(id)arg1;
- (void)_unarchiveValuesForArchiveMask:(int)arg1 fromPListUnarchiver:(id)arg2;
- (void)_archiveValuesForArchiveMask:(int)arg1 toPListArchiver:(id)arg2;
- (id)fallbackClassNameForPListArchive;
- (id)gidCommentForArchive;
- (id)classNameForPListArchive;
- (id)objectID;
- (id)globalIDCreateIfNeeded:(BOOL)arg1;
- (SEL)selectorForArchiveMask:(int)arg1;
- (void)_setUnarchivedGlobalIDFromHexString:(id)arg1;

@end

