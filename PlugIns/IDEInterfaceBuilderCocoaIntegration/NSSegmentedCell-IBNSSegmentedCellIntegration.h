//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSSegmentedCell.h>

@class NSArray;

@interface NSSegmentedCell (IBNSSegmentedCellIntegration)
+ (id)keyPathsForValuesAffectingIbShadowedSegmentDistribution;
@property long long ibShadowedNumberOfSegments;
@property(retain) NSArray *ibShadowedSelectedStates;
@property(retain) NSArray *ibShadowedEnabledStates;
@property(retain) NSArray *ibShadowedMenus;
@property(retain) NSArray *ibShadowedToolTips;
@property(retain) NSArray *ibShadowedImageScalings;
@property(retain) NSArray *ibShadowedImages;
@property(retain) NSArray *ibShadowedWidths;
@property(retain) NSArray *ibShadowedTags;
@property(retain) NSArray *ibShadowedLabels;
@property(retain) NSArray *ibShadowedAlignments;
@property long long ibShadowedSegmentDistribution;
- (long long)ibPreferredResizeDirectionMask;
- (Class)ibPreferredControlClass;
- (id)ibDefaultFontForCurrentConfiguration;
- (long long)ibNumberOfSizeableSegments;
- (id)ibSpringLoadedObjectAtPoint:(struct CGPoint)arg1 inFrameController:(id)arg2;
- (long long)ibSegmentAtPoint:(struct CGPoint)arg1 inView:(id)arg2 inFrameController:(id)arg3;
- (struct CGRect)ibTitleRectForSegment:(long long)arg1 inFrameController:(id)arg2 targetView:(id)arg3;
- (struct CGRect)ibRectForSegment:(long long)arg1 inFrameController:(id)arg2 targetView:(id)arg3;
- (id)ibOrderedSnapshotAttributesKeyPaths;
- (Class)ibEditorClass;
- (id)ibQualifyingInfoForDefaultLabel;
- (id)ibDocumentationPropertyInfosForKeyPath:(id)arg1;
- (void)ibRemoveChildren:(id)arg1;
- (void)ibPopulateChildRelationOrder:(id)arg1;
- (void)unarchiveSegments:(id)arg1;
- (void)archiveSegments:(id)arg1;
- (id)ibLocalLocalizableStringArrayAttributeKeyPaths;
- (id)ibLocalLocalizableGeometryAttributeKeyPaths;
- (id)ibLocalResourceArrayAttributeKeyPaths;
- (id)ibLocalAttributeKeyPaths;
- (id)ibLocalChildToManyRelationshipsKeyPaths;
@end

