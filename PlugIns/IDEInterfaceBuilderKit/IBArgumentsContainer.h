//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class IBCLIOptionIndex, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface IBArgumentsContainer : NSObject
{
    NSMutableArray *_inputDocumentPaths;
    NSArray *_rawBuildEnvironment;
    NSMutableDictionary *_buildEnvironment;
    NSMutableDictionary *_extendedParameters;
    BOOL _shouldPrintUsage;
    BOOL _buildEnvironmentFromClient;
    long long _outputFormat;
}

+ (id)containerFromArguments:(id)arg1 collectingErrors:(id)arg2;
@property(readonly, nonatomic) NSDictionary *extendedParameters; // @synthesize extendedParameters=_extendedParameters;
@property(copy, nonatomic) NSDictionary *buildEnvironment; // @synthesize buildEnvironment=_buildEnvironment;
@property(nonatomic) BOOL buildEnvironmentFromClient; // @synthesize buildEnvironmentFromClient=_buildEnvironmentFromClient;
@property(copy, nonatomic) NSArray *inputDocumentPaths; // @synthesize inputDocumentPaths=_inputDocumentPaths;
@property long long outputFormat; // @synthesize outputFormat=_outputFormat;
@property BOOL shouldPrintUsage; // @synthesize shouldPrintUsage=_shouldPrintUsage;
- (void).cxx_destruct;
- (BOOL)longArgumentIsPresentOnCommandLine:(id)arg1;
- (void)validateAfterInterpretingOptionsCollectingErrors:(id)arg1;
@property(readonly) IBCLIOptionIndex *optionIndex;
- (void)interpretOption:(id)arg1 optionalParameter:(id)arg2 collectingErrors:(id)arg3;
- (BOOL)validateArgument:(id)arg1 forKeyPath:(id)arg2 collectingErrors:(id)arg3;
- (BOOL)validateArgument:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;
- (id)mutableArrayValueForOption:(id)arg1;
- (void)applyValue:(id)arg1 forOption:(id)arg2;
- (id)parsePlistArgument:(id)arg1 ofType:(Class)arg2 error:(id *)arg3;
- (BOOL)isMissingRequiredInputDocument;
- (BOOL)supportsMultipleInputDocuments;
- (void)setRawEnvironment:(id)arg1;
- (id)collectionOptionsThatRequireInputDocuments;
- (id)objectOptionsThatRequireInputDocuments;
- (id)booleanOptionsThatRequireInputDocuments;
- (void)appendDocumentInputPaths:(id)arg1;
@property(copy, nonatomic) NSString *inputDocumentPath;
- (id)init;

@end

