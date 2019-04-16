//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <DVTAnalytics/DVTAnalyticsPointSymbolicatorProtocol-Protocol.h>

@class DVTAnalyticsPointAbstractClass;
@protocol DVTAnalyticsLogProtocol;

@interface DVTAnalyticsPointSymbolicator : NSObject <DVTAnalyticsPointSymbolicatorProtocol>
{
    DVTAnalyticsPointAbstractClass *_analyticsPoint;
    id <DVTAnalyticsLogProtocol> _unsymbolicatedAnalyticsLog;
}

@property(retain, nonatomic) id <DVTAnalyticsLogProtocol> unsymbolicatedAnalyticsLog; // @synthesize unsymbolicatedAnalyticsLog=_unsymbolicatedAnalyticsLog;
@property(retain, nonatomic) DVTAnalyticsPointAbstractClass *analyticsPoint; // @synthesize analyticsPoint=_analyticsPoint;
- (void).cxx_destruct;
- (void)updateAnalyticsPoint:(id)arg1 withSymbolicatedAnalyticsLog:(id)arg2;
- (id)initWithAnalyticsPoint:(id)arg1 unsymbolicatedAnalyticsLog:(id)arg2;

@end
