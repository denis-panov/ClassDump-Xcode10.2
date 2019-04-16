//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSView.h>

@class NSMutableArray, NSObjectController, NSPathControl, NSString, SCNUIArrayEditor;

__attribute__((visibility("hidden")))
@interface SCNUIDynamicInspector : NSView
{
    id _instance;
    NSString *_modelPath;
    NSMutableArray *_modelPathComponents;
    NSMutableArray *_stack;
    SCNUIArrayEditor *_pendingAllocationListener;
    NSObjectController *_objectController;
    NSPathControl *stackControl;
}

@property(retain, nonatomic) NSPathControl *stackControl; // @synthesize stackControl;
@property(nonatomic) __weak NSObjectController *objectController; // @synthesize objectController=_objectController;
- (void).cxx_destruct;
- (void)pathControlClicked:(id)arg1;
- (void)stackSelectionChanged:(id)arg1;
- (void)selectInstance:(id)arg1 propertyName:(id)arg2;
- (void)updateStackControl;
- (void)objectHandleClicked:(id)arg1;
- (id)allocationMenuForClass:(Class)arg1 propertyName:(id)arg2;
- (void)newInstanceMenuClicked:(id)arg1;
- (void)removeObjectClicked:(id)arg1;
- (void)contentsChanged:(id)arg1;
- (void)constantPopupChanged:(id)arg1;
- (void)popupChanged:(id)arg1;
- (void)colorChanged:(id)arg1;
- (void)array:(id)arg1 didSelect:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)instanceNewElementInArray:(id)arg1 withPropertyName:(id)arg2;
- (void)setup;
- (id)addUIForProperty:(id)arg1 ofClass:(Class)arg2 instance:(id)arg3;
- (id)addUIForIntProperty:(id)arg1 ofClass:(Class)arg2;
- (id)addUIForObjectProperty:(id)arg1;
- (id)addUIForColorProperty:(id)arg1;
- (id)addUIForArrayProperty:(id)arg1 ofClass:(id)arg2;
- (id)addUIForContentsProperty:(id)arg1;
- (id)addUIForImageProperty:(id)arg1;
- (id)addUIForMat4Property:(id)arg1;
- (id)addUIForVec4Property:(id)arg1;
- (id)addUIForVec3Property:(id)arg1;
- (id)addUIForVec2Property:(id)arg1;
- (id)addUIForBoolProperty:(id)arg1;
- (id)addUIForStringProperty:(id)arg1 ofClass:(Class)arg2;
- (id)addUIForFloatProperty:(id)arg1 ofClass:(Class)arg2;
- (void)clear;
- (void)instanceDidChange;
- (id)pathControlItemForInstance:(id)arg1;
- (id)menuItemForInstance:(id)arg1 propertyName:(id)arg2;
- (void)instanceWillChange;
- (void)unbind;
@property(retain) id instance;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;

@end

