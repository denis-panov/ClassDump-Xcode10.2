//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEInspectorViewController.h>

@class NSString;

@interface _TtC18IDESourceControlUI34WorkingCopyInspectorViewController : IDEInspectorViewController
{
    // Error parsing type: , name: isLoadingAuthor
    // Error parsing type: , name: workingCopy
    // Error parsing type: , name: authorOperation
    // Error parsing type: , name: operationQueue
    // Error parsing type: , name: authorEditable
    // Error parsing type: , name: authorNamePlaceholderText
    // Error parsing type: , name: authorEmailPlaceholderText
    // Error parsing type: , name: _authorEmail
    // Error parsing type: , name: _authorName
}

- (void).cxx_destruct;
- (void)viewWillUninstall;
@property(nonatomic, copy) NSString *authorEmail;
@property(nonatomic, copy) NSString *authorName;
- (void)didSetInspectedObjects:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, copy) NSString *_authorName; // @synthesize _authorName;
@property(nonatomic, copy) NSString *_authorEmail; // @synthesize _authorEmail;
@property(nonatomic, copy) NSString *authorEmailPlaceholderText; // @synthesize authorEmailPlaceholderText;
@property(nonatomic, copy) NSString *authorNamePlaceholderText; // @synthesize authorNamePlaceholderText;
@property(nonatomic) BOOL authorEditable; // @synthesize authorEditable;

@end
