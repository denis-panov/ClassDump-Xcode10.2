//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GPURenderTargetEditor/_TtC21GPURenderTargetEditor46GPUTraceShaderProfilerAnnotationViewController.h>

@class NSArray, NSLayoutConstraint, NSMenu, NSPopUpButton, NSTextField, _TtC21GPURenderTargetEditor61GPUTraceShaderProfilerFunctionCallSiteAuxiliaryViewController;

__attribute__((visibility("hidden")))
@interface _TtC21GPURenderTargetEditor52GPUTraceShaderProfilerFunctionCallSiteViewController : _TtC21GPURenderTargetEditor46GPUTraceShaderProfilerAnnotationViewController
{
    // Error parsing type: , name: iterationButton
    // Error parsing type: , name: iterationLabel
    // Error parsing type: , name: selectionMenu
    // Error parsing type: , name: callSiteDelegate
    // Error parsing type: , name: selectedCallSite
    // Error parsing type: , name: sidebarAnnotations
    // Error parsing type: , name: topAuxiliaryViewController
    // Error parsing type: , name: topContainerViewHeightConstraint
    // Error parsing type: , name: callSiteToLabel
}

+ (id)instantiateFromStoryboard;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (void)fontAndColorThemeDidChange:(id)arg1;
- (void)iterationLabelClicked:(id)arg1;
- (void)didChangeSelection:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic) __weak NSLayoutConstraint *topContainerViewHeightConstraint; // @synthesize topContainerViewHeightConstraint;
@property(nonatomic, readonly) _TtC21GPURenderTargetEditor61GPUTraceShaderProfilerFunctionCallSiteAuxiliaryViewController *topAuxiliaryViewController; // @synthesize topAuxiliaryViewController;
@property(nonatomic, copy) NSArray *sidebarAnnotations; // @synthesize sidebarAnnotations;
@property(nonatomic) __weak NSMenu *selectionMenu; // @synthesize selectionMenu;
@property(nonatomic) __weak NSTextField *iterationLabel; // @synthesize iterationLabel;
@property(nonatomic) __weak NSPopUpButton *iterationButton; // @synthesize iterationButton;

@end

