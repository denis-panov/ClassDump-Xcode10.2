//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, NSString;

@interface IBBinder : NSObject
{
    NSString *keyPath;
    NSSet *aliasedKeyPaths;
    id widget;
    BOOL ignoringInput;
    NSMutableDictionary *bindingOptions;
}

+ (id)defaultAliasedKeyPathsForKeyPath:(id)arg1;
- (void)comboBoxSelectionDidChange:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (id)description;
- (void)projectValue:(id)arg1 onSelection:(id)arg2;
- (void)actOnSelection:(id)arg1;
- (void)reflectValue:(id)arg1;
- (void)reflectSelection:(id)arg1;
- (BOOL)isKeyPathMixedForSelection:(id)arg1;
- (void)putWidgetInMixedState;
- (id)placeholderStringForTextField:(id)arg1;
- (id)valueForBindingOption:(id)arg1;
- (void)setValue:(id)arg1 forBindingOption:(id)arg2;
- (id)aliasedKeyPaths;
- (id)keyPath;
- (id)widget;
- (id)widgetValue;
- (void)setValue:(id)arg1 forObject:(id)arg2;
- (id)valueForObject:(id)arg1;
- (id)defaultValue;
- (void)dealloc;
- (id)initWithPath:(id)arg1 aliasedKeyPaths:(id)arg2 andWidget:(id)arg3;

@end

