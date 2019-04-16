//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (GPUDebugger)
- (BOOL)GPUDebugger_showFunctionIndex;
- (id)GPUDebugger_checkerboardColor1;
- (id)GPUDebugger_checkerboardColor0;
- (double)GPUDebugger_checkerboardGridSize;
- (id)GPUDebugger_samplerGridColor;
- (id)GPUDebugger_samplerColor1;
- (id)GPUDebugger_samplerColor0;
- (double)GPUDebugger_samplerOuterSizeWithMin:(double)arg1 max:(double)arg2;
- (double)GPUDebugger_gridMinScaleWithMin:(double)arg1 max:(double)arg2;
- (void)GPUDebugger_setShowOverlayOutline:(_Bool)arg1;
- (BOOL)GPUDebugger_showOverlayOutline;
- (void)GPUDebugger_setShowOverlayWireframe:(_Bool)arg1;
- (BOOL)GPUDebugger_showOverlayWireframe;
- (id)GPUDebugger_overlayColor;
- (double)GPUDebugger_loupeDiameterWithMin:(double)arg1 max:(double)arg2;
- (double)GPUDebugger_textureMaxScaleWithMin:(double)arg1 max:(double)arg2;
- (id)GPUDebugger_colorForKey:(id)arg1 defaultValue:(id)arg2 registerDefault:(BOOL)arg3;
- (id)GPUDebugger_colorForKey:(id)arg1;
- (id)GPUDebugger_stringForKey:(id)arg1 defaultValue:(id)arg2 registerDefault:(BOOL)arg3;
- (unsigned long long)GPUDebugger_unsignedIntegerForKey:(id)arg1 minValue:(unsigned long long)arg2 maxValue:(unsigned long long)arg3 defaultValue:(unsigned long long)arg4 registerDefault:(BOOL)arg5;
- (unsigned long long)GPUDebugger_unsignedIntegerForKey:(id)arg1 defaultValue:(unsigned long long)arg2 registerDefault:(BOOL)arg3;
- (long long)GPUDebugger_integerForKey:(id)arg1 minValue:(long long)arg2 maxValue:(long long)arg3 defaultValue:(long long)arg4 registerDefault:(BOOL)arg5;
- (long long)GPUDebugger_integerForKey:(id)arg1 defaultValue:(long long)arg2 registerDefault:(BOOL)arg3;
- (double)GPUDebugger_doubleForKey:(id)arg1 minValue:(double)arg2 maxValue:(double)arg3 defaultValue:(double)arg4 registerDefault:(BOOL)arg5;
- (double)GPUDebugger_doubleForKey:(id)arg1 defaultValue:(double)arg2 registerDefault:(BOOL)arg3;
- (BOOL)GPUDebugger_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 registerDefault:(BOOL)arg3;
- (id)GPUDebugger_objectForKey:(id)arg1 ofClass:(Class)arg2 defaultValue:(id)arg3 registerDefault:(BOOL)arg4;
- (id)GPUDebugger_objectForKey:(id)arg1 ofClass:(Class)arg2;
- (void)GPUDebugger_registerDefaults;
@end

