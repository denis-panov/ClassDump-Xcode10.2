//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <GPUDebuggerFoundation/GPUShaderDebuggerRegion.h>

#import <GPUDebuggerFoundation/DYPShaderDebuggerROIFragment-Protocol.h>
#import <GPUDebuggerFoundation/DYPShaderDebuggerROILocationFragment-Protocol.h>

@class NSString;

@interface GPUShaderDebuggerFragmentRegion : GPUShaderDebuggerRegion <DYPShaderDebuggerROIFragment, DYPShaderDebuggerROILocationFragment>
{
    float _minPositionX;
    float _minPositionY;
    float _minPositionZ;
    float _minPositionW;
    float _maxPositionX;
    float _maxPositionY;
    float _maxPositionZ;
    float _maxPositionW;
    float _positionX;
    float _positionY;
    float _positionZ;
    float _positionW;
    unsigned long long _minSampleId;
    unsigned long long _maxSampleId;
    unsigned long long _sampleId;
}

@property(readonly, nonatomic) unsigned long long sampleId; // @synthesize sampleId=_sampleId;
@property(readonly, nonatomic) float positionW; // @synthesize positionW=_positionW;
@property(readonly, nonatomic) float positionZ; // @synthesize positionZ=_positionZ;
@property(readonly, nonatomic) float positionY; // @synthesize positionY=_positionY;
@property(readonly, nonatomic) float positionX; // @synthesize positionX=_positionX;
@property(readonly, nonatomic) unsigned long long maxSampleId; // @synthesize maxSampleId=_maxSampleId;
@property(readonly, nonatomic) float maxPositionW; // @synthesize maxPositionW=_maxPositionW;
@property(readonly, nonatomic) float maxPositionZ; // @synthesize maxPositionZ=_maxPositionZ;
@property(readonly, nonatomic) float maxPositionY; // @synthesize maxPositionY=_maxPositionY;
@property(readonly, nonatomic) float maxPositionX; // @synthesize maxPositionX=_maxPositionX;
@property(readonly, nonatomic) unsigned long long minSampleId; // @synthesize minSampleId=_minSampleId;
@property(readonly, nonatomic) float minPositionW; // @synthesize minPositionW=_minPositionW;
@property(readonly, nonatomic) float minPositionZ; // @synthesize minPositionZ=_minPositionZ;
@property(readonly, nonatomic) float minPositionY; // @synthesize minPositionY=_minPositionY;
@property(readonly, nonatomic) float minPositionX; // @synthesize minPositionX=_minPositionX;
@property(readonly, copy) NSString *description;
- (id)initWithMinPosition:(unsigned long long)arg1 minSampleId:(unsigned long long)arg2 maxPosition:(unsigned long long)arg3 maxSampleId:selectedPosition:selectedSampleId: /* Error: Ran out of types for this method. */;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long type;

@end

