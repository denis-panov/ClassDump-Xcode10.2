//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEModelEditor/IDEDataModelPropertiesTableController.h>

@class NSArray;

@interface IDEDataModelAttributesController : IDEDataModelPropertiesTableController
{
}

- (id)defaultTableColumnIdentifiersForTableView:(id)arg1;
- (id)allowedTableColumnIdentifiersForTableView:(id)arg1;
- (id)identifier;
- (void)removeItems:(id)arg1;
- (void)addItems:(id)arg1;
- (Class)targetedEditorClass;
- (id)titleForDisplay;
- (void)primitiveInvalidate;
@property(readonly, copy) NSArray *typeNames;

@end

