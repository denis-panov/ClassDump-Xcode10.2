//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <AppKit/NSViewController.h>

@class NSImageView, NSTextField;

@interface _TtC6IDEKit46IDESourceControlLogDetailDisplayViewController : NSViewController
{
    // Error parsing type: , name: logItem
    // Error parsing type: , name: imageView
    // Error parsing type: , name: nameField
    // Error parsing type: , name: revisionField
    // Error parsing type: , name: dateField
    // Error parsing type: , name: messageField
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) __weak NSTextField *messageField; // @synthesize messageField;
@property(nonatomic) __weak NSTextField *dateField; // @synthesize dateField;
@property(nonatomic) __weak NSTextField *revisionField; // @synthesize revisionField;
@property(nonatomic) __weak NSTextField *nameField; // @synthesize nameField;
@property(nonatomic) __weak NSImageView *imageView; // @synthesize imageView;

@end
