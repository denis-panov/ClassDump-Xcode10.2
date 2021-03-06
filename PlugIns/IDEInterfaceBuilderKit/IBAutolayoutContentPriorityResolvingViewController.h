//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/IBAutolayoutIssueResolvingViewController.h>

@class IBAutolayoutContentSizePriorityChange, NSArray, NSTextField;

@interface IBAutolayoutContentPriorityResolvingViewController : IBAutolayoutIssueResolvingViewController
{
    IBAutolayoutContentSizePriorityChange *_selectedChange;
    NSArray *_proposedChanges;
    NSTextField *_descriptionLabel;
}

@property(retain) NSTextField *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) NSArray *proposedChanges; // @synthesize proposedChanges=_proposedChanges;
- (void).cxx_destruct;
- (void)confirmChanges;
- (void)loadView;
- (id)initWithProposedChanges:(id)arg1;

@end

