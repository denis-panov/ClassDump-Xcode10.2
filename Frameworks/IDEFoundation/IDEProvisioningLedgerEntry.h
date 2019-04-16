//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTLogAspect, IDEProvisioningLedger, IDEProvisioningLogDVTLogAspectListener, NSMutableArray, NSMutableString, NSString;
@protocol _IDEProvisioningLedgerEntryDelegate;

@interface IDEProvisioningLedgerEntry : NSObject
{
    _Bool _isClosed;
    NSMutableArray *_subentries;
    NSMutableString *_details;
    id <_IDEProvisioningLedgerEntryDelegate> _delegate;
    IDEProvisioningLogDVTLogAspectListener *_logAspectListener;
    IDEProvisioningLedger *_ledger;
    IDEProvisioningLedgerEntry *_parent;
    id _representedObject;
    DVTLogAspect *_logAspect;
    NSString *_title;
}

@property(readonly, nonatomic) NSString *details; // @synthesize details=_details;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) DVTLogAspect *logAspect; // @synthesize logAspect=_logAspect;
@property(nonatomic) __weak id representedObject; // @synthesize representedObject=_representedObject;
@property(nonatomic) __weak IDEProvisioningLedgerEntry *parent; // @synthesize parent=_parent;
@property(nonatomic) __weak IDEProvisioningLedger *ledger; // @synthesize ledger=_ledger;
- (void).cxx_destruct;
- (void)provisioningLedgerEntry:(id)arg1 didRecordDetails:(id)arg2;
- (void)provisioningLedgerEntryDidClose:(id)arg1 withError:(id)arg2;
- (void)provisioningLedgerEntry:(id)arg1 didCloseSubentry:(id)arg2 withError:(id)arg3;
- (void)provisioningLedgerEntry:(id)arg1 didOpenSubentry:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)recordDetails:(id)arg1;
- (id)openSubentryWithTitle:(id)arg1 representedObject:(id)arg2;
- (_Bool)closed;
- (void)closeWithError:(id)arg1;
- (void)close;
- (id)initWithLedger:(id)arg1 representedObject:(id)arg2 logAspect:(id)arg3 title:(id)arg4;

@end

