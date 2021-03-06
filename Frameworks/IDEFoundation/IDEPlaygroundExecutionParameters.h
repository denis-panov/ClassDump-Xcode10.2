//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

#import <IDEFoundation/NSSecureCoding-Protocol.h>

@class DVTLineOffsetAwareStringWrapper, IDEPlaygroundPreparationParameters, NSNumber, NSURL;

@interface IDEPlaygroundExecutionParameters : NSObject <NSSecureCoding>
{
    BOOL _needsProcessInitialization;
    DVTLineOffsetAwareStringWrapper *_sourceCodeToExecute;
    DVTLineOffsetAwareStringWrapper *_sourceCodePreambleToExecute;
    NSURL *_documentFileURL;
    NSNumber *_documentContentTimestamp;
    NSNumber *_autoTerminationDelay;
    IDEPlaygroundPreparationParameters *_preparationParameters;
    struct _NSRange _lineRangeToExecute;
}

+ (BOOL)supportsSecureCoding;
@property(readonly) IDEPlaygroundPreparationParameters *preparationParameters; // @synthesize preparationParameters=_preparationParameters;
@property(readonly) NSNumber *autoTerminationDelay; // @synthesize autoTerminationDelay=_autoTerminationDelay;
@property(readonly) NSNumber *documentContentTimestamp; // @synthesize documentContentTimestamp=_documentContentTimestamp;
@property(readonly) NSURL *documentFileURL; // @synthesize documentFileURL=_documentFileURL;
@property(readonly) BOOL needsProcessInitialization; // @synthesize needsProcessInitialization=_needsProcessInitialization;
@property(readonly) struct _NSRange lineRangeToExecute; // @synthesize lineRangeToExecute=_lineRangeToExecute;
@property(readonly, copy) DVTLineOffsetAwareStringWrapper *sourceCodePreambleToExecute; // @synthesize sourceCodePreambleToExecute=_sourceCodePreambleToExecute;
@property(readonly, copy) DVTLineOffsetAwareStringWrapper *sourceCodeToExecute; // @synthesize sourceCodeToExecute=_sourceCodeToExecute;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceCodeToExecute:(id)arg1 sourceCodePreambleToExecute:(id)arg2 lineRangeToExecute:(struct _NSRange)arg3 needsProcessInitialization:(BOOL)arg4 documentFileURL:(id)arg5 documentContentTimestamp:(id)arg6 autoTerminationDelay:(id)arg7 executionPreparationParameters:(id)arg8;

@end

