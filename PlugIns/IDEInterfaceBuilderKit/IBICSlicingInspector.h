//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEInspectorViewController.h>

@class NSArrayController, NSSet;

@interface IBICSlicingInspector : IDEInspectorViewController
{
    NSArrayController *_imageRepsController;
    NSArrayController *_imageSetsController;
    NSSet *_inspectedImageReps;
    NSSet *_inspectedImageSets;
}

+ (id)inspectedArrayControllerKeys;
- (void).cxx_destruct;
- (id)aggregateReplacementBySettingValue:(id)arg1 forKeyPath:(id)arg2 onObject:(id)arg3 fromKeyPath:(id)arg4 ofObject:(id)arg5;
- (void)setContent:(id)arg1;
- (id)inspectedDocument;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

