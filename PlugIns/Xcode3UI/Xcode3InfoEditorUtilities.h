//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface Xcode3InfoEditorUtilities : NSObject
{
}

+ (BOOL)acceptImageDrop:(id)arg1 inSliceController:(id)arg2 acceptBlock:(CDUnknownBlockType)arg3;
+ (unsigned long long)validateImageDrop:(id)arg1 inSliceController:(id)arg2;
+ (id)imageNameForURLDrop:(id)arg1 inSliceController:(id)arg2 acceptBlock:(CDUnknownBlockType)arg3;
+ (id)imageNameForContainerItemDrop:(id)arg1;
+ (void)showIconFilePickerForProject:(id)arg1 workspace:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)pathForImageNamed:(id)arg1 inProject:(id)arg2;
+ (id)containerItemDragTypes;
+ (id)infoEditorConfiguredInnerSliceDisclosureView;
+ (id)infoEditorConfiguredSliceDisclosureViewWithCloseHandler:(CDUnknownBlockType)arg1;
+ (id)infoEditorConfiguredDisclosureView;
+ (id)inspectorKeyForInfoKey:(id)arg1;
+ (id)displayNameForFilePath:(id)arg1;
+ (id)extensionForInfoEditorSliceWithIdentifier:(id)arg1;
+ (id)extensionForInfoEditorTypeWithProductType:(id)arg1 platformIdentifier:(id)arg2 productTag:(id)arg3;
+ (id)_infoEditorExtensionPoint;

@end

