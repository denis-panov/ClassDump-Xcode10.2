//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GPURenderTargetEditor/_TtC21GPURenderTargetEditor40GPUTraceShaderProfilerDataViewController.h>

@class NSButton, NSLayoutConstraint, NSTextField, _TtC21GPURenderTargetEditor40GPUTraceShaderProfilerPerformancePieView, _TtC21GPURenderTargetEditor45GPUTraceShaderProfilerAuxiliaryViewController;

__attribute__((visibility("hidden")))
@interface _TtC21GPURenderTargetEditor46GPUTraceShaderProfilerAnnotationViewController : _TtC21GPURenderTargetEditor40GPUTraceShaderProfilerDataViewController
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: perfLabel
    // Error parsing type: , name: perfGraph
    // Error parsing type: , name: detailButton
    // Error parsing type: , name: containerViewHeightConstraint
    // Error parsing type: , name: auxiliaryViewController
    // Error parsing type: , name: auxiliaryViewAttached
    // Error parsing type: , name: showDetailButton
    // Error parsing type: , name: emphasizeAnnotation
    // Error parsing type: , name: shaderISAAvailable
    // Error parsing type: , name: isaEnabled
    // Error parsing type: , name: detailOnImage
    // Error parsing type: , name: detailOffImage
    // Error parsing type: , name: tooltipPopover
    // Error parsing type: , name: tooltipTimer
    // Error parsing type: , name: functionInfo
    // Error parsing type: , name: currentCallSite
}

+ (id)instantiateFromStoryboard;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)detailButtonClicked:(id)arg1;
- (void)adjustFrameWithAuxiliaryState;
- (void)detachAuxiliaryViewFrom:(id)arg1;
- (void)updateImage;
- (void)update;
- (void)fontAndColorThemeDidChange:(id)arg1;
@property(nonatomic) BOOL isaEnabled; // @synthesize isaEnabled;
@property(nonatomic) BOOL shaderISAAvailable; // @synthesize shaderISAAvailable;
@property(nonatomic) BOOL emphasizeAnnotation; // @synthesize emphasizeAnnotation;
@property(nonatomic) BOOL showDetailButton; // @synthesize showDetailButton;
@property(nonatomic) BOOL auxiliaryViewAttached; // @synthesize auxiliaryViewAttached;
@property(nonatomic, retain) _TtC21GPURenderTargetEditor45GPUTraceShaderProfilerAuxiliaryViewController *auxiliaryViewController; // @synthesize auxiliaryViewController;
@property(nonatomic) __weak NSLayoutConstraint *containerViewHeightConstraint; // @synthesize containerViewHeightConstraint;
@property(nonatomic) __weak NSButton *detailButton; // @synthesize detailButton;
@property(nonatomic) __weak _TtC21GPURenderTargetEditor40GPUTraceShaderProfilerPerformancePieView *perfGraph; // @synthesize perfGraph;
@property(nonatomic) __weak NSTextField *perfLabel; // @synthesize perfLabel;

@end

