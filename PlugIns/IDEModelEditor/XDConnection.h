//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEModelEditor/DVTInvalidation-Protocol.h>
#import <IDEModelEditor/NSCoding-Protocol.h>

@class DVTStackBacktrace, NSString, XDGraphic;

@interface XDConnection : NSObject <NSCoding, DVTInvalidation>
{
    XDGraphic *_graphic;
    XDGraphic *_targetGraphic;
    struct _XDConnectionFlags _cFlags;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)markAsDirty;
- (id)targetGraphic;
- (void)setTargetGraphic:(id)arg1;
- (id)graphic;
- (void)_setGraphic:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)primitiveInvalidate;
- (id)init;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

