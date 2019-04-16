//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IBFoundation/IBICAbstractCatalog.h>

@interface IBICStickersCatalog : IBICAbstractCatalog
{
}

+ (id)catalogItemFileExtension;
+ (id)fileExtensionsToAllowInUnstructuredImport;
+ (id)contentReferenceTypeName;
+ (id)defaultInstanceForIdioms:(id)arg1 enforceStrictIdioms:(BOOL)arg2;
- (id)childrenOfType:(Class)arg1;
- (id)classesForImportingLooseFilesInImportOrder;
- (id)destinationContainerForItemsInDropIncludingReceiver:(id)arg1;
- (BOOL)shouldShowSuggestionSetsForBundleIcons;
- (void)populateMutatorsToAddRequiredChildCounterparts:(id)arg1;

@end

