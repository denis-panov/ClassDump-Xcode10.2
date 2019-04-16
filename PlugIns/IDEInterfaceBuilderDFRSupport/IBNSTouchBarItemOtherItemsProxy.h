//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import "IBNSTouchBarItem.h"

#import "IBDocumentArchiving-Protocol.h"

@class NSCustomTouchBarItem, NSString;

@interface IBNSTouchBarItemOtherItemsProxy : IBNSTouchBarItem <IBDocumentArchiving>
{
    NSCustomTouchBarItem *_runtimeTouchBarItem;
}

+ (id)ibInstantiateForRole:(long long)arg1 withTargetRuntime:(id)arg2 documentClass:(Class)arg3 assetIdentifier:(id)arg4;
- (void).cxx_destruct;
- (id)placeholderIdentifier;
- (id)runtimeTouchBarItem;
- (BOOL)ibInspectedIdentifierIsVisible;
- (id)ibTypeNameForDefaultLabel;
- (void)unarchiveWithDocumentUnarchiver:(id)arg1;
- (void)archiveWithDocumentArchiver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

