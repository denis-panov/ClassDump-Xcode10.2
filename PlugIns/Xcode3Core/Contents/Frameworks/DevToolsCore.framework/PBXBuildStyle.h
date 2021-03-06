//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DevToolsCore/PBXProjectItem.h>

@class DVTMacroDefinitionTable, NSString, PBXProject;

@interface PBXBuildStyle : PBXProjectItem
{
    PBXProject *_project;
    NSString *_name;
    DVTMacroDefinitionTable *_buildSettings;
}

+ (id)archivableWeakRelationshipsForPListArchiver:(id)arg1;
+ (id)archivableRelationships;
+ (id)archivableAttributes;
- (void).cxx_destruct;
- (long long)compareName:(id)arg1;
- (id)innerDescription;
- (void)removeBuildSettingForKeyPath:(id)arg1;
- (void)setBuildSetting:(id)arg1 forKeyPath:(id)arg2;
- (id)buildSettingForKeyPath:(id)arg1;
- (BOOL)upgradeBuildSettingsFromArchivedObjectVersion:(unsigned long long)arg1;
- (void)awakeFromPListUnarchiver:(id)arg1;
- (id)readFromPListUnarchiver:(id)arg1;
- (id)gidCommentForArchive;
- (void)_setBuildSettings:(id)arg1;
- (id)_buildSettings;
- (void)macroDefinitionTable:(id)arg1 didSetValue:(id)arg2 forMacroName:(id)arg3 conditionSet:(id)arg4;
- (void)macroDefinitionTable:(id)arg1 willSetValue:(id)arg2 forMacroName:(id)arg3 conditionSet:(id)arg4;
- (void)setContainer:(id)arg1;
- (id)container;
- (void)setBuildSettings:(id)arg1;
- (id)buildSettings;
- (id)_buildSettingsLabel;
- (void)setName:(id)arg1;
- (id)name;
- (void)invalidate;
- (id)init;
- (id)initWithName:(id)arg1;

@end

