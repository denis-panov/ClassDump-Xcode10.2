//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSViewController.h>

@class NSTextField;
@protocol DYPShaderDebuggerThreadFragment;

__attribute__((visibility("hidden")))
@interface _TtC21GPURenderTargetEditor52GPUShaderDebuggerFragmentMaskInspectorViewController : NSViewController
{
    // Error parsing type: , name: positionXKeyView
    // Error parsing type: , name: positionYKeyView
    // Error parsing type: , name: positionXValueView
    // Error parsing type: , name: positionYValueView
    // Error parsing type: , name: xKeyView
    // Error parsing type: , name: yKeyView
    // Error parsing type: , name: zKeyView
    // Error parsing type: , name: wKeyView
    // Error parsing type: , name: sampleIdKeyView
    // Error parsing type: , name: xValueView
    // Error parsing type: , name: yValueView
    // Error parsing type: , name: zValueView
    // Error parsing type: , name: wValueView
    // Error parsing type: , name: sampleIdValueView
    // Error parsing type: , name: position
    // Error parsing type: , name: thread
}

+ (struct CGSize)popoverContentSize;
+ (id)instantiateFromStoryboard;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, retain) id <DYPShaderDebuggerThreadFragment> thread; // @synthesize thread;
- (void)viewWillAppear;
@property(nonatomic, retain) NSTextField *sampleIdValueView; // @synthesize sampleIdValueView;
@property(nonatomic, retain) NSTextField *wValueView; // @synthesize wValueView;
@property(nonatomic, retain) NSTextField *zValueView; // @synthesize zValueView;
@property(nonatomic, retain) NSTextField *yValueView; // @synthesize yValueView;
@property(nonatomic, retain) NSTextField *xValueView; // @synthesize xValueView;
@property(nonatomic, retain) NSTextField *sampleIdKeyView; // @synthesize sampleIdKeyView;
@property(nonatomic, retain) NSTextField *wKeyView; // @synthesize wKeyView;
@property(nonatomic, retain) NSTextField *zKeyView; // @synthesize zKeyView;
@property(nonatomic, retain) NSTextField *yKeyView; // @synthesize yKeyView;
@property(nonatomic, retain) NSTextField *xKeyView; // @synthesize xKeyView;
@property(nonatomic, retain) NSTextField *positionYValueView; // @synthesize positionYValueView;
@property(nonatomic, retain) NSTextField *positionXValueView; // @synthesize positionXValueView;
@property(nonatomic, retain) NSTextField *positionYKeyView; // @synthesize positionYKeyView;
@property(nonatomic, retain) NSTextField *positionXKeyView; // @synthesize positionXKeyView;

@end
