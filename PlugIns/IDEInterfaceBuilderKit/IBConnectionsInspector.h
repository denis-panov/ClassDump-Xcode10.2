//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEInspectorViewController.h>

@class DVTBorderedView, DVTObservingToken, IBConnectionsInspectorLayoutView, IBConnectionsViewController, IBDocument, NSScrollView, NSView;

@interface IBConnectionsInspector : IDEInspectorViewController
{
    id _inspectedEndPoint;
    IBDocument *_inspectedDocument;
    NSView *_scrolledDocumentView;
    IBConnectionsViewController *_connectionsController;
    DVTObservingToken *_classDataIsUpdatingObservanceToken;
    NSScrollView *_scrollView;
    DVTBorderedView *_statusAreaView;
    IBConnectionsInspectorLayoutView *_layoutView;
}

@property(retain, nonatomic) IBConnectionsInspectorLayoutView *layoutView; // @synthesize layoutView=_layoutView;
@property(retain, nonatomic) DVTBorderedView *statusAreaView; // @synthesize statusAreaView=_statusAreaView;
@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (id)findIndicatorContentViewForInspectedKeyPath:(id)arg1 withContext:(id)arg2;
- (void)setContent:(id)arg1;
- (void)primitiveInvalidate;
- (BOOL)automaticallyInvalidatesChildViewControllers;
- (void)loadView;
- (void)setInspectedEndPoint:(id)arg1;
- (void)setScrolledDocumentView:(id)arg1;

@end

