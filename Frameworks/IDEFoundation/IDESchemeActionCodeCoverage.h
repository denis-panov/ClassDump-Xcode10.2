//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <DVTFoundation/DVTCoverageDataContainer.h>

@class NSArray, NSNumber, NSString;

@interface IDESchemeActionCodeCoverage : DVTCoverageDataContainer
{
    NSNumber *_functionCoverage;
    NSString *_filePath;
    NSArray *_codeCoverageTargets;
    NSArray *_creationErrors;
    NSString *_fullDescription;
    NSString *_reportIdentifier;
    NSArray *_devices;
}

+ (BOOL)supportsSecureCoding;
+ (id)coverageReportForPath:(id)arg1 error:(id *)arg2;
@property(copy) NSArray *devices; // @synthesize devices=_devices;
@property(copy) NSString *reportIdentifier; // @synthesize reportIdentifier=_reportIdentifier;
@property(retain, nonatomic) NSString *fullDescription; // @synthesize fullDescription=_fullDescription;
@property(readonly) NSArray *creationErrors; // @synthesize creationErrors=_creationErrors;
@property(retain, nonatomic) NSArray *codeCoverageTargets; // @synthesize codeCoverageTargets=_codeCoverageTargets;
@property(copy) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *functionCoverage;
- (id)functions;
- (id)copyWithSourceFilePathsMapped:(CDUnknownBlockType)arg1;
- (id)uniquedCopy;
- (id)wrappedContainer;
- (BOOL)writeToPath:(id)arg1 error:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCodeCoverageTargets:(id)arg1 creationErrors:(id)arg2;
- (id)makeCopyWithChildren:(id)arg1;
- (id)diffableChildren;
- (id)diffIdentifier;
- (unsigned long long)diffType;

@end
