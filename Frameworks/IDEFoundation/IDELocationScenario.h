//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class DVTFilePath, NSArray, NSError, NSString;

@interface IDELocationScenario : NSObject
{
    NSString *_identifier;
    NSArray *_locations;
    BOOL _autorepeat;
    DVTFilePath *_filePath;
    BOOL _hasLoadedContent;
    BOOL _isCurrentLocation;
    BOOL _isCurrentLocationScenario;
    NSError *_gpxError;
}

+ (id)builtInScenarioWithIdentifier:(id)arg1;
+ (id)defaultScenarios;
+ (id)currentLocationScenario;
+ (void)initialize;
@property(retain) NSError *gpxError; // @synthesize gpxError=_gpxError;
@property(readonly) BOOL isCurrentLocationScenario; // @synthesize isCurrentLocationScenario=_isCurrentLocationScenario;
@property(readonly) BOOL autorepeat; // @synthesize autorepeat=_autorepeat;
@property(readonly) DVTFilePath *filePath; // @synthesize filePath=_filePath;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly, getter=isDefaultScenario) BOOL defaultScenario;
- (id)description;
@property(readonly) NSString *name;
@property(readonly) NSArray *locations;
- (BOOL)isValidWithError:(id *)arg1;
- (void)_loadLocationsIfNeeded;
- (id)_processedLocationsFromGPXLocations:(id)arg1;
- (id)_locationsFromReferencedGPXFileWithError:(id *)arg1;
- (id)_gpxFileErrorWithCode:(long long)arg1 reason:(id)arg2;
- (id)initWithWorkspace:(id)arg1 referencingFilePath:(id)arg2;
- (id)initWithIdentifier:(id)arg1 referencingFilePath:(id)arg2;
- (id)initWithIdentifier:(id)arg1 locations:(id)arg2 autorepeat:(BOOL)arg3;
- (id)initWithIdentifier:(id)arg1 locations:(id)arg2;

@end

