//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@class XDDiagramView;

@interface XDGraphicContentsEditor : NSObject
{
    XDDiagramView *_diagramView;
}

+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)abortEditing;
- (void)endEditing;
- (void)startEditingGraphic:(id)arg1 withEvent:(id)arg2;
- (id)diagramView;
- (void)_setDiagramView:(id)arg1;
- (void)dealloc;
- (id)init;

@end

