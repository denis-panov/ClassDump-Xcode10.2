//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTKit/DVTTableCellViewStatusController.h>

@class IDEActivityLogSection, IDENavigatorIssueStatusView;

@interface IDENavigatorIssueStatusController : DVTTableCellViewStatusController
{
    IDENavigatorIssueStatusView *_faultedView;
    id _target;
    SEL _action;
    IDEActivityLogSection *_issueLog;
}

@property(retain, nonatomic) IDEActivityLogSection *issueLog; // @synthesize issueLog=_issueLog;
- (void).cxx_destruct;
- (void)setTarget:(id)arg1 andAction:(SEL)arg2;
- (id)view;
- (void)propagateState;

@end

