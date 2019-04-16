//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTMacroDefinitionTable, NSArray, NSMutableDictionary;

@interface IDEOverridingBuildProperties : NSObject
{
    NSMutableDictionary *_macros;
    NSArray *_arrayRepresentation;
    unsigned long long _hash;
}

- (void).cxx_destruct;
- (id)dvt_detailedDebugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEmpty;
@property(readonly) NSArray *macroDefinitionTables;
@property(readonly, copy) DVTMacroDefinitionTable *macrosFromEnvironmentXcconfigFile;
@property(readonly, copy) DVTMacroDefinitionTable *macrosFromCommandLineXcconfigFile;
@property(readonly, copy) DVTMacroDefinitionTable *macrosFromCommandLine;
@property(readonly, copy) DVTMacroDefinitionTable *synthesizedMacros;
- (void)_setMacroDefinitionTable:(id)arg1 forLevel:(int)arg2;
- (id)macroDefinitionTableForLevel:(int)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_copyUsingOverridingPropertiesClass:(Class)arg1 synthesizedMacros:(id)arg2;
- (id)copyWithSynthesizedMacros:(id)arg1;
- (id)initWithMacroDefinitionTable:(id)arg1;
- (id)init;

@end

