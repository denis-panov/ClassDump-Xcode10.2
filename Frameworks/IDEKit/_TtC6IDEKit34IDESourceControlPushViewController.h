//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/_TtC6IDEKit58IDESourceControlMultipleWorkingCopyOperationViewController.h>

@class IDEWorkspace, NSButton, NSString;

@interface _TtC6IDEKit34IDESourceControlPushViewController : _TtC6IDEKit58IDESourceControlMultipleWorkingCopyOperationViewController
{
    // Error parsing type: , name: workspace
    // Error parsing type: , name: uploadTagsButton
    // Error parsing type: , name: workQueue
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)primaryAction;
- (void)willBeginSheet;
@property(nonatomic, readonly) NSString *windowSubtitle;
@property(nonatomic, readonly) NSString *windowTitle;
@property(nonatomic, readonly) NSString *primaryButtonTitle;
@property(nonatomic, readonly) double preferredViewHeight;
@property(nonatomic, readonly) NSString *nibName;
@property(nonatomic) __weak NSButton *uploadTagsButton; // @synthesize uploadTagsButton;
@property(nonatomic, retain) IDEWorkspace *workspace; // @synthesize workspace;

@end

