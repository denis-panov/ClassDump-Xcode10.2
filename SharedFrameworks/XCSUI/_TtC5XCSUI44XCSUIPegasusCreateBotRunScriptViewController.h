//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSViewController.h>

@class DVTBorderedView, NSLayoutConstraint, XCSTrigger, _TtC15DVTSourceEditor19DVTSourceEditorView;

@interface _TtC5XCSUI44XCSUIPegasusCreateBotRunScriptViewController : NSViewController
{
    // Error parsing type: , name: scriptChangeDelayedInvocation
    // Error parsing type: , name: scriptView
    // Error parsing type: , name: scriptViewHeightConstraint
    // Error parsing type: , name: scriptScrollViewTopConstraint
    // Error parsing type: , name: borderedView
    // Error parsing type: , name: trigger
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)saveTrigger;
@property(nonatomic, retain) XCSTrigger *trigger; // @synthesize trigger;
- (id)titleForDisplay;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidLoad;
@property(nonatomic, retain) DVTBorderedView *borderedView; // @synthesize borderedView;
@property(nonatomic, retain) NSLayoutConstraint *scriptScrollViewTopConstraint; // @synthesize scriptScrollViewTopConstraint;
@property(nonatomic, retain) NSLayoutConstraint *scriptViewHeightConstraint; // @synthesize scriptViewHeightConstraint;
@property(nonatomic, retain) _TtC15DVTSourceEditor19DVTSourceEditorView *scriptView; // @synthesize scriptView;

@end
