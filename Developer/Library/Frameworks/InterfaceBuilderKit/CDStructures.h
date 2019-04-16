//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

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

struct IBByteStream {
    char *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct IBDocumentStorage {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    id _field10;
    id _field11;
    id _field12;
    id _field13;
    id _field14;
    id _field15;
    id _field16;
    id _field17;
    id _field18;
    id _field19;
    id _field20;
    id _field21;
    id _field22;
    id _field23;
    id _field24;
    id _field25;
    id _field26;
    long long _field27;
    char _field28;
    id _field29;
    char _field30;
    id _field31;
    char _field32;
    id _field33;
    id _field34;
    char _field35;
    char _field36;
    id _field37;
    id _field38;
    id _field39;
    long long _field40;
    id _field41;
    id _field42;
    id _field43;
    id _field44;
    char _field45;
    id _field46;
    id _field47;
    id _field48;
    id _field49;
    id _field50;
    id _field51;
    char _field52;
    id _field53;
    id _field54;
    id _field55;
    id _field56;
    id _field57;
    id _field58;
    char _field59;
    struct CGPoint _field60;
    id _field61;
    id _field62;
    id _field63;
    long long _field64;
    char _field65;
    id _field66;
    id _field67;
    id _field68;
    id _field69;
};

struct IBEditorExtraStorage {
    char _field1;
};

struct IBInsetTag {
    double left;
    double top;
    double right;
    double bottom;
};

struct IBViewSizeInspectorExtraIvars {
    id _field1;
    long long _field2;
    long long _field3;
    id _field4;
    char _field5;
    char _field6;
    struct CGRect _field7;
};

struct Token {
    char *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    long long _field4;
    long long _field5;
    long long _field6;
};

struct _IBLibraryClassLineageViewFlags {
    unsigned int delegateImplementsAlphaForRow:1;
    unsigned int delegateImplementsCanClickRow:1;
    unsigned int delegateImplementsDidClickRow:1;
    unsigned int delegateImplementsBorderedForRow:1;
    unsigned int delegateImplementsBadgeForRow:1;
    unsigned int delegateImplementsDidClickBadge:1;
    unsigned int delegateImplementsSetLabelForRow:1;
    unsigned int delegateImplementsNumberOfCompletions:1;
    unsigned int delegateImplementsCompletionAtIndex:1;
    unsigned int delegateImplementsEditedValueIsValid:1;
    unsigned int _reserved:22;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    id _field2;
    char _field3;
    char _field4;
    char _field5;
} CDStruct_7610d3a3;

typedef struct {
    char *_field1;
    char _field2;
} CDStruct_39587f32;

typedef struct {
    long long version;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
    CDUnknownFunctionPointerType equal;
    CDUnknownFunctionPointerType hash;
} CDStruct_f2932e27;

typedef struct {
    long long version;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
    CDUnknownFunctionPointerType equal;
} CDStruct_b3b3fc87;

typedef struct {
    struct IBByteStream _field1;
    id _field2;
    long long _field3;
    long long _field4;
    struct Token _field5;
    long long _field6;
} CDStruct_d32eee15;

typedef struct {
    struct CGRect _field1;
    struct CGRect _field2;
    id _field3;
    id _field4;
} CDStruct_f89e1bf6;

typedef struct {
    struct CGRect _field1;
    struct CGRect _field2;
    CDStruct_f89e1bf6 _field3;
    CDStruct_f89e1bf6 _field4;
} CDStruct_6a48b817;
