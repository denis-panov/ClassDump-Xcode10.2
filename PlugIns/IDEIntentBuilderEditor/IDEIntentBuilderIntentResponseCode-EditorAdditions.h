//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEIntentBuilderCore/IDEIntentBuilderIntentResponseCode.h>

#import <IDEIntentBuilderEditor/IDEIntentBuilderLocalizableStringProvider-Protocol.h>

@class NSArray, NSDictionary;

@interface IDEIntentBuilderIntentResponseCode (EditorAdditions) <IDEIntentBuilderLocalizableStringProvider>
@property(readonly, copy, nonatomic) NSArray *parameters;
@property(readonly, copy, nonatomic) NSDictionary *localizableStringsDictionary;
@property(readonly, nonatomic, getter=isEditable) BOOL editable;
@property(readonly, nonatomic, getter=isRemovable) BOOL removable;
@end
