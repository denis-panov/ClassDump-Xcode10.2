//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#import <objc/NSObject.h>

@interface IBViewArrangementManager : NSObject
{
}

+ (void)fillContainerHorizontally:(id)arg1 inDocument:(id)arg2;
+ (void)fillContainerVertically:(id)arg1 inDocument:(id)arg2;
+ (void)edgeAlign:(unsigned long long)arg1 ofViews:(id)arg2 inDocument:(id)arg3;
+ (void)middleContainerAlignViews:(id)arg1 inDocument:(id)arg2;
+ (void)centerContainerAlignViews:(id)arg1 inDocument:(id)arg2;
+ (void)baselineAlignViews:(id)arg1 inDocument:(id)arg2;
+ (void)bottomAlignViews:(id)arg1 inDocument:(id)arg2;
+ (void)middleAlignViews:(id)arg1 inDocument:(id)arg2;
+ (void)topAlignViews:(id)arg1 inDocument:(id)arg2;
+ (void)leftAlignViews:(id)arg1 inDocument:(id)arg2;
+ (void)centerAlignViews:(id)arg1 inDocument:(id)arg2;
+ (void)rightAlignViews:(id)arg1 inDocument:(id)arg2;
+ (void)alignViews:(id)arg1 inContainerVertically:(BOOL)arg2 horizontally:(BOOL)arg3;
+ (void)alignViews:(id)arg1 withXFunction:(CDUnknownFunctionPointerType)arg2 yFunction:(CDUnknownFunctionPointerType)arg3 xAccumulator:(CDUnknownFunctionPointerType)arg4 andYAccumulator:(CDUnknownFunctionPointerType)arg5;
+ (BOOL)canFillContainerVertically:(id)arg1;
+ (BOOL)canFillContainerHorizontally:(id)arg1;
+ (BOOL)canAlignBaselinesForViews:(id)arg1 inDocument:(id)arg2;
+ (BOOL)canContainerAlignViews:(id)arg1;
+ (BOOL)canAlignViews:(id)arg1;
+ (BOOL)viewsHaveSameSuperview:(id)arg1;
+ (id)commonAncestorOfViews:(id)arg1;
+ (BOOL)areViewsHorizontallyResizable:(id)arg1;
+ (BOOL)areViewsVerticallyResizable:(id)arg1;
+ (BOOL)areViewsUserSizable:(id)arg1;
+ (BOOL)areViewsUserMovable:(id)arg1;

@end

