//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <IDEInterfaceBuilderKit/IBAttributePlaceholder.h>

@class NSString;

@interface IBToolTipAttribute : IBAttributePlaceholder
{
    NSString *_toolTip;
}

+ (void)addToolTipAccessorsToClass:(Class)arg1;
@property(retain) NSString *toolTip; // @synthesize toolTip=_toolTip;
- (void).cxx_destruct;
- (id)archiveConnection;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1 andToolTip:(id)arg2;

@end

