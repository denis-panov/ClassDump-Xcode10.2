//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEKit/IDEViewController.h>

@class IDEActivityLogSection, IDEActivityLogSectionRecorder, IDEBuildResultsOutlineLogic, NSArray, NSBox, NSURL, NSView, XCBuildResultsOutlineView, XCSIntegration, _TtC13IDEFoundation34IDEActivityLogEventStreamProcessor;

@interface _TtC5XCSUI32XCSUIStreamingLogsViewController : IDEViewController
{
    // Error parsing type: , name: owner
    // Error parsing type: , name: chunks
    // Error parsing type: , name: integration
    // Error parsing type: , name: section
    // Error parsing type: , name: recorder
    // Error parsing type: , name: eventStreamProcessor
    // Error parsing type: , name: outlineView
    // Error parsing type: , name: activeViewHolder
    // Error parsing type: , name: outlineLogic
    // Error parsing type: , name: enclosingView
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)readChangesFromTestFile;
- (void)listenForIntegrationChanges;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
@property(nonatomic, readonly) NSURL *debugChunksUrl;
- (void)configureOutline;
- (id)configureOutlineView:(id)arg1;
- (void)viewDidInstall;
@property(nonatomic, retain) NSView *enclosingView; // @synthesize enclosingView;
@property(nonatomic, retain) IDEBuildResultsOutlineLogic *outlineLogic; // @synthesize outlineLogic;
@property(nonatomic, retain) NSBox *activeViewHolder; // @synthesize activeViewHolder;
@property(nonatomic, retain) XCBuildResultsOutlineView *outlineView; // @synthesize outlineView;
@property(nonatomic, retain) _TtC13IDEFoundation34IDEActivityLogEventStreamProcessor *eventStreamProcessor; // @synthesize eventStreamProcessor;
@property(nonatomic, retain) IDEActivityLogSectionRecorder *recorder; // @synthesize recorder;
@property(nonatomic, retain) IDEActivityLogSection *section; // @synthesize section;
@property(nonatomic, retain) XCSIntegration *integration; // @synthesize integration;
@property(nonatomic, copy) NSArray *chunks; // @synthesize chunks;
@property(nonatomic, retain) id owner; // @synthesize owner;

@end
