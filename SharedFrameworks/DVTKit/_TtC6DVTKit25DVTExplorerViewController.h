//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTViewController.h>

#import <DVTKit/DVTStatefulObject-Protocol.h>
#import <DVTKit/_TtP6DVTKit30DVTExplorerNavigatorCommonCore_-Protocol.h>

@class _TtC6DVTKit22DVTExplorerOutlineView;
@protocol _TtP6DVTKit38DVTExplorerNavigatorCommonCoreDelegate_;

@interface _TtC6DVTKit25DVTExplorerViewController : DVTViewController <DVTStatefulObject, _TtP6DVTKit30DVTExplorerNavigatorCommonCore_>
{
    // Error parsing type: , name: outlineView
    // Error parsing type: , name: content
    // Error parsing type: , name: delegate
    // Error parsing type: , name: selectedItemURL
    // Error parsing type: , name: contentController
    // Error parsing type: , name: _stateToken
}

+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)revertStateWithDictionary:(id)arg1;
- (void)commitStateToDictionary:(id)arg1;
- (void)setStateToken:(id)arg1;
- (id)stateToken;
- (void)updateWithImplementationSpecifics:(id)arg1;
- (void)updateWithURL:(id)arg1;
- (void)revertState;
- (void)commitState;
- (void)viewDidLoad;
- (void)primitiveInvalidate;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic, retain) id <_TtP6DVTKit38DVTExplorerNavigatorCommonCoreDelegate_> delegate; // @synthesize delegate;
@property(nonatomic, retain) _TtC6DVTKit22DVTExplorerOutlineView *outlineView; // @synthesize outlineView;

@end
