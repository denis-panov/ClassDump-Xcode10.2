//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEViewController.h>

#import <IDEInterfaceBuilderKit/NSMenuDelegate-Protocol.h>

@class DVTButtonTextField, IBDocument, IBLayoutConstraint, IBLayoutConstraintConstantEditingController, IBLayoutConstraintMultiplierEditingController, IBLayoutConstraintPriorityEditingController, NSString;

@interface IBAutolayoutConstraintConstantEditingViewController : IDEViewController <NSMenuDelegate>
{
    IBLayoutConstraintConstantEditingController *_constantEditingController;
    IBLayoutConstraintPriorityEditingController *_priorityEditingController;
    IBLayoutConstraintMultiplierEditingController *_multiplierEditingController;
    IBLayoutConstraint *_constraint;
    IBDocument *_document;
    DVTButtonTextField *_priorityTextField;
    DVTButtonTextField *_constantTextField;
    DVTButtonTextField *_multiplierTextField;
}

@property(retain) DVTButtonTextField *multiplierTextField; // @synthesize multiplierTextField=_multiplierTextField;
@property(retain) DVTButtonTextField *constantTextField; // @synthesize constantTextField=_constantTextField;
@property(retain) DVTButtonTextField *priorityTextField; // @synthesize priorityTextField=_priorityTextField;
@property(readonly, nonatomic) IBDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) IBLayoutConstraint *constraint; // @synthesize constraint=_constraint;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidInstall;
- (void)primitiveInvalidate;
- (id)initWithConstraint:(id)arg1 document:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

