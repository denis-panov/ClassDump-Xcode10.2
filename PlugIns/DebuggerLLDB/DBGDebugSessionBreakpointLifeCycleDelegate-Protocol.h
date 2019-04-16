//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

@class IDEBreakpoint, IDEBreakpointLocation, IDEWatchpoint, NSArray;

@protocol DBGDebugSessionBreakpointLifeCycleDelegate
- (void)watchpointEnablementChanged:(IDEWatchpoint *)arg1;
- (void)breakpointLocationEnablementChanged:(IDEBreakpointLocation *)arg1;
- (void)breakpointLocationIgnoreCount:(IDEBreakpointLocation *)arg1;
- (void)breakpointLocationConditionChanged:(IDEBreakpointLocation *)arg1;
- (void)breakpointEnablementChanged:(IDEBreakpoint *)arg1;
- (void)breakpointIgnoreCountChanged:(IDEBreakpoint *)arg1;
- (void)breakpointConditionChanged:(IDEBreakpoint *)arg1;
- (void)deleteWatchpoint:(IDEWatchpoint *)arg1;
- (void)activationStateChanged:(BOOL)arg1 forBreakpoints:(NSArray *)arg2;
- (void)deleteBreakpoint:(IDEBreakpoint *)arg1;
- (void)createBreakpointIfNecessary:(IDEBreakpoint *)arg1;
@end

