//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDETemplateInstantiationAssistant.h>

#import <IDEKit/IDETemplateChooserCollectionViewDelegate-Protocol.h>
#import <IDEKit/NSCollectionViewDataSource-Protocol.h>
#import <IDEKit/NSCollectionViewDelegateFlowLayout-Protocol.h>

@class DVTBorderedView, DVTNotificationToken, DVTObservingToken, DVTScopeBarButton, DVTSearchField, IDETemplate, IDETemplateChooserCollectionView, IDETemplateSection, NSArray, NSDictionary, NSStackView, NSString;

@interface IDETemplateChooserAssistant : IDETemplateInstantiationAssistant <NSCollectionViewDataSource, IDETemplateChooserCollectionViewDelegate, NSCollectionViewDelegateFlowLayout>
{
    NSArray *_keyWindowNotificationTokens;
    DVTObservingToken *_contextTemplateObserver;
    DVTNotificationToken *_initialUpdateToken;
    IDETemplateChooserCollectionView *_collectionView;
    NSStackView *_sectionStackView;
    DVTScopeBarButton *_initialSectionButton;
    DVTScopeBarButton *_loadedSectionButton;
    DVTSearchField *_filterField;
    DVTBorderedView *_scopeBarBorderedView;
    NSString *_filterString;
    NSArray *_sections;
    NSArray *_sectionButtons;
    IDETemplateSection *_selectedSection;
    NSArray *_filteredCategories;
    NSDictionary *_filteredTemplates;
}

+ (BOOL)automaticallyNotifiesObserversOfFilterString;
+ (BOOL)automaticallyNotifiesObserversOfSelectedSection;
+ (id)keyPathsForValuesAffectingCanGoForward;
+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
+ (BOOL)showsCrossPlatformSection;
+ (id)supportedTemplateKind;
@property(retain, nonatomic) NSDictionary *filteredTemplates; // @synthesize filteredTemplates=_filteredTemplates;
@property(retain, nonatomic) NSArray *filteredCategories; // @synthesize filteredCategories=_filteredCategories;
@property(retain, nonatomic) IDETemplateSection *selectedSection; // @synthesize selectedSection=_selectedSection;
@property(retain, nonatomic) NSArray *sectionButtons; // @synthesize sectionButtons=_sectionButtons;
@property(retain, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(copy, nonatomic) NSString *filterString; // @synthesize filterString=_filterString;
@property __weak DVTBorderedView *scopeBarBorderedView; // @synthesize scopeBarBorderedView=_scopeBarBorderedView;
@property __weak DVTSearchField *filterField; // @synthesize filterField=_filterField;
@property(retain) DVTScopeBarButton *loadedSectionButton; // @synthesize loadedSectionButton=_loadedSectionButton;
@property __weak DVTScopeBarButton *initialSectionButton; // @synthesize initialSectionButton=_initialSectionButton;
@property(nonatomic) __weak NSStackView *sectionStackView; // @synthesize sectionStackView=_sectionStackView;
@property(nonatomic) __weak IDETemplateChooserCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)primitiveSetFilterString:(id)arg1;
- (void)updateFilteredTemplatesWithAnimation:(BOOL)arg1 desiredSelectedTemplate:(id)arg2;
- (void)_updateContextTemplateFromCollectionViewSelection;
@property(readonly) IDETemplate *selectedTemplate;
- (void)moveRight:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)sectionButtonSelected:(id)arg1;
- (void)primitiveSetSelectedSection:(id)arg1;
- (void)_updateSectionButtonStateForSelectedSection;
- (void)setUpSelectionFromTemplateInstantiationContext;
- (id)_preferredInitialSection;
- (id)templateForIndexPath:(id)arg1;
- (id)indexPathForTemplate:(id)arg1;
- (BOOL)_section:(id)arg1 matchesPlatforms:(id)arg2;
- (id)_sectionWithName:(id)arg1;
- (id)_sectionWithIdentifier:(id)arg1;
- (void)updateColors:(id)arg1;
- (void)chooserCollectionViewShouldGoForward:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemsAtIndexPaths:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)nextAssistantIdentifier;
- (BOOL)canGoForward;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)loadView;
- (void)primitiveInvalidate;
- (id)templateNameDefaultsKeyForSection:(id)arg1;
- (id)sectionDefaultsKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
