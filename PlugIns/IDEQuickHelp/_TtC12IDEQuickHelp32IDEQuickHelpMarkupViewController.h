//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTViewController.h>

#import <IDEQuickHelp/WebFrameLoadDelegate-Protocol.h>
#import <IDEQuickHelp/WebPolicyDelegate-Protocol.h>
#import <IDEQuickHelp/_TtP6DVTKit34DVTEmptyContentPlaceholderDelegate_-Protocol.h>

__attribute__((visibility("hidden")))
@interface _TtC12IDEQuickHelp32IDEQuickHelpMarkupViewController : DVTViewController <_TtP6DVTKit34DVTEmptyContentPlaceholderDelegate_, WebFrameLoadDelegate, WebPolicyDelegate>
{
    // Error parsing type: , name: webView
    // Error parsing type: , name: _webViewFrameDidChangeObserverToken
    // Error parsing type: , name: _webPreferences
    // Error parsing type: , name: quickHelpController
    // Error parsing type: , name: urlProvider
    // Error parsing type: , name: _hasPlaceholder
    // Error parsing type: , name: _placeholderView
    // Error parsing type: , name: style
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)emptyContentPlaceholderButtonWasClicked:(id)arg1;
- (void)primitiveInvalidate;
- (void)loadView;

@end

