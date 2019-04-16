//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSSegmentedControl.h>

@class NSImage;

@interface IDEDebugSteppingSegmentedControl : NSSegmentedControl
{
    BOOL _onlyAllowStepByInstructionBehavior;
    long long _steppingMode;
    NSImage *_stepOverImage;
    NSImage *_stepOverByInstructionImage;
    NSImage *_stepOverSuspendingOtherThreadsImage;
    NSImage *_stepInImage;
    NSImage *_stepInByInstructionImage;
    NSImage *_stepInSuspendingOtherThreadsImage;
    NSImage *_stepOutImage;
    SEL _stepOverAction;
    SEL _stepOverSuspendingOtherThreadsAction;
    SEL _stepOverByInstructionAction;
    SEL _stepInAction;
    SEL _stepInSuspendingOtherThreadsAction;
    SEL _stepInByInstructionAction;
    SEL _stepOutAction;
    id _optionKeyMonitor;
}

+ (id)debugSteppingSegmentedControlWithTarget:(id)arg1 action:(SEL)arg2;
@property(retain) id optionKeyMonitor; // @synthesize optionKeyMonitor=_optionKeyMonitor;
@property(nonatomic) BOOL onlyAllowStepByInstructionBehavior; // @synthesize onlyAllowStepByInstructionBehavior=_onlyAllowStepByInstructionBehavior;
@property SEL stepOutAction; // @synthesize stepOutAction=_stepOutAction;
@property SEL stepInByInstructionAction; // @synthesize stepInByInstructionAction=_stepInByInstructionAction;
@property SEL stepInSuspendingOtherThreadsAction; // @synthesize stepInSuspendingOtherThreadsAction=_stepInSuspendingOtherThreadsAction;
@property SEL stepInAction; // @synthesize stepInAction=_stepInAction;
@property SEL stepOverByInstructionAction; // @synthesize stepOverByInstructionAction=_stepOverByInstructionAction;
@property SEL stepOverSuspendingOtherThreadsAction; // @synthesize stepOverSuspendingOtherThreadsAction=_stepOverSuspendingOtherThreadsAction;
@property SEL stepOverAction; // @synthesize stepOverAction=_stepOverAction;
@property(retain) NSImage *stepOutImage; // @synthesize stepOutImage=_stepOutImage;
@property(retain) NSImage *stepInSuspendingOtherThreadsImage; // @synthesize stepInSuspendingOtherThreadsImage=_stepInSuspendingOtherThreadsImage;
@property(retain) NSImage *stepInByInstructionImage; // @synthesize stepInByInstructionImage=_stepInByInstructionImage;
@property(retain) NSImage *stepInImage; // @synthesize stepInImage=_stepInImage;
@property(retain) NSImage *stepOverSuspendingOtherThreadsImage; // @synthesize stepOverSuspendingOtherThreadsImage=_stepOverSuspendingOtherThreadsImage;
@property(retain) NSImage *stepOverByInstructionImage; // @synthesize stepOverByInstructionImage=_stepOverByInstructionImage;
@property(retain) NSImage *stepOverImage; // @synthesize stepOverImage=_stepOverImage;
@property(nonatomic) long long steppingMode; // @synthesize steppingMode=_steppingMode;
- (void).cxx_destruct;
- (void)_updateImagesForStepByInstructionMode;
- (void)_updateImagesForStepSuspendingOtherThreadsMode;
- (void)_updateImagesForStepByLineMode;
- (void)_updateSteppingModeForEvent:(id)arg1;
- (void)_handleEvent:(id)arg1;
- (SEL)stepOutActionForCurrentSteppingMode;
- (SEL)stepInActionForCurrentSteppingMode;
- (SEL)stepOverActionForCurrentSteppingMode;
- (void)_updateForCurrentSteppingMode;
- (void)_cancelOptionKeyMonitor;
- (void)_registerOptionKeyMonitor;
- (void)dealloc;
- (id)init;

@end
