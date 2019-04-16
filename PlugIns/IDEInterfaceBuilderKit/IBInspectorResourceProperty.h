//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEInspectorProperty.h>

@class IBAutoCompletingComboBoxDataSource, IBButtonComboBox, IBResourceValueTransformer, IDEInspectorKeyPath;

@interface IBInspectorResourceProperty : IDEInspectorProperty
{
    IBAutoCompletingComboBoxDataSource *_comboBoxDataSource;
    IBResourceValueTransformer *_resourceValueTransformer;
    IDEInspectorKeyPath *_valueKeyPath;
    IDEInspectorKeyPath *_listContentKeyPath;
    BOOL _hideRevealInEditorButton;
    IBButtonComboBox *_comboBox;
}

@property BOOL hideRevealInEditorButton; // @synthesize hideRevealInEditorButton=_hideRevealInEditorButton;
@property(retain) IBButtonComboBox *comboBox; // @synthesize comboBox=_comboBox;
- (void).cxx_destruct;
- (void)revealLocationInEditor:(id)arg1;
- (id)documentLocationForValue;
- (id)ibResourceManager;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (void)loadView;
- (void)primitiveInvalidate;
- (void)configureComboBoxButton;
- (void)userDidChangeValue:(id)arg1;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (id)mediaType;
- (Class)resourceClass;
- (BOOL)useNameAsValue;
- (id)resourceType;
- (double)baseline;
- (id)inspectorController;
- (id)initWithPropertyDefinition:(id)arg1 andController:(id)arg2;

@end

