//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//
// SDK Root: /Developer/SDKs/MacOSX-I.sdk
//

@class NSObject;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct ActivityInfo {
    char shutdown;
    int startedActivities;
    struct multimap<qos_class_t, ActivityInstance, std::__1::greater<qos_class_t>, std::__1::allocator<std::__1::pair<const qos_class_t, ActivityInstance>>> scheduledActivities;
    NSObject *scheduledActivitiesCount;
    int readyForNextFrame;
};

struct XRSerializedAccess<ActivityInfo> {
    struct ActivityInfo _guarded;
    NSObject *_queue;
};

struct XRTimeRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _XRIndexRange {
    unsigned long long location;
    unsigned long long length;
};

struct __hash_node_base<std::__1::__hash_node<const void *, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<const void *, void *>*> *__next_;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*> *__next_;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct _opaque_pthread_cond_t {
    long long __sig;
    char __opaque[40];
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct _opaque_pthread_rwlock_t {
    long long __sig;
    char __opaque[192];
};

struct _xmlError {
    int _field1;
    int _field2;
    char *_field3;
    int _field4;
    char *_field5;
    int _field6;
    char *_field7;
    char *_field8;
    char *_field9;
    int _field10;
    int _field11;
    void *_field12;
    void *_field13;
};

struct multimap<qos_class_t, ActivityInstance, std::__1::greater<qos_class_t>, std::__1::allocator<std::__1::pair<const qos_class_t, ActivityInstance>>> {
    struct __tree<std::__1::__value_type<qos_class_t, ActivityInstance>, std::__1::__map_value_compare<qos_class_t, std::__1::__value_type<qos_class_t, ActivityInstance>, std::__1::greater<qos_class_t>, true>, std::__1::allocator<std::__1::__value_type<qos_class_t, ActivityInstance>>> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<qos_class_t, ActivityInstance>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __value_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<qos_class_t, std::__1::__value_type<qos_class_t, ActivityInstance>, std::__1::greater<qos_class_t>, true>> {
            unsigned long long __value_;
        } __pair3_;
    } __tree_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<const void *, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<const void *, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<const void *, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<const void *, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<const void *, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<const void *, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<const void *, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<unsigned long long, id, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, id>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, id>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, id>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, id>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, id>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, id>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, id>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, id>, std::__1::equal_to<unsigned long long>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct unordered_set<const void *, std::__1::hash<const void *>, std::__1::equal_to<const void *>, std::__1::allocator<const void *>> {
    struct __hash_table<const void *, std::__1::hash<const void *>, std::__1::equal_to<const void *>, std::__1::allocator<const void *>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<const void *, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<const void *, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<const void *, void *>*>, std::__1::allocator<std::__1::__hash_node<const void *, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<const void *, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::hash<const void *>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::equal_to<const void *>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<XRFrameActivityManager *__weak, std::__1::allocator<XRFrameActivityManager *__weak>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<XRFrameActivityManager *__weak *, std::__1::allocator<XRFrameActivityManager *__weak>> {
        id *__value_;
    } __end_cap_;
};

