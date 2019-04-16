//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDETemplateOption.h>

@class NSDictionary, NSString;
@protocol Xcode3ProjectTemplateOptionParent;

@interface Xcode3ProjectTemplateOption : IDETemplateOption
{
    NSDictionary *_units;
    NSString *_specialType;
}

+ (id)keyPathsForValuesAffectingHasValidValue;
+ (id)keyPathsForValuesAffectingValues;
+ (id)keyPathsForValuesAffectingDisplayValues;
+ (id)allowedTemplateOptionTypes;
@property(copy) NSDictionary *units; // @synthesize units=_units;
- (void).cxx_destruct;
- (id)prefix;
- (void)setPrefix:(id)arg1;
@property __weak id <Xcode3ProjectTemplateOptionParent> parent;
- (id)values;
- (id)displayValues;
- (void)updateEnabledWithOptions:(id)arg1;
- (void)addToNode:(id)arg1 andDefinitions:(id)arg2 withOptions:(id)arg3 components:(id)arg4 project:(id)arg5 targets:(id)arg6 executables:(id)arg7 macros:(id)arg8 replacementHandler:(CDUnknownBlockType)arg9;
- (id)effectiveValueWithOptions:(id)arg1;
- (id)initWithOptionInfo:(id)arg1 filePath:(id)arg2;

@end

