//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CATransform3D {
    double m11;
    double m12;
    double m13;
    double m14;
    double m21;
    double m22;
    double m23;
    double m24;
    double m31;
    double m32;
    double m33;
    double m34;
    double m41;
    double m42;
    double m43;
    double m44;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CLLocationCoordinate2D {
    double _field1;
    double _field2;
};

struct NSEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct SCNVector3 {
    double x;
    double y;
    double z;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

typedef struct {
    struct CGPoint _field1;
    struct CGPoint _field2;
} CDStruct_e3b9714e;

#pragma mark Named Unions

union _GLKMatrix4 {
    struct {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
        float _field5;
        float _field6;
        float _field7;
        float _field8;
        float _field9;
        float _field10;
        float _field11;
        float _field12;
        float _field13;
        float _field14;
        float _field15;
        float _field16;
    } _field1;
    float _field2[16];
};

#pragma mark Typedef'd Unions

typedef union {
    struct {
        long long _field1;
        long long _field2;
    } _field1;
    long long _field2[2];
} CDUnion_42e99c75;

