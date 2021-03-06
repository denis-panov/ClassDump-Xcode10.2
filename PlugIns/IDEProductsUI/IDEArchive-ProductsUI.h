//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEFoundation/IDEArchive.h>

#import <IDEProductsUI/IDEProductsInspectable-Protocol.h>

@class NSString;

@interface IDEArchive (ProductsUI) <IDEProductsInspectable>
+ (id)keyPathsForValuesAffectingArchiveDeveloperIDStatus;
+ (id)keyPathsForValuesAffectingArchiveDetails;
+ (id)grayAttributedString:(id)arg1;
- (id)archiveDeveloperIDStatus;
- (id)archiveDetails;
- (id)archiveDeveloperIDStatusSectionTitle;
- (id)archiveDetailsSectionTitle;
@property(readonly) NSString *inspectableUtilityExtensionIdentifier;
- (id)inspectableIcon;
- (id)inspectableTypeUserDescription;
- (id)inspectableSubtitle;
- (id)productsUI_toolchainDisplayName;
- (BOOL)wantsToolChainDisplayed;
- (id)productsUI_displayableTeam;
- (id)productsUI_creationDate;
- (id)productsUI_archiveImage;
- (id)productsUI_version;
- (id)productsUI_userRepresentationOfVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

