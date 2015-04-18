//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct a4;

struct aligned_storage<std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>>> {
    union dummy_u dummy_;
};

struct duration<long long, std::__1::ratio<1, 1000000000>> {
    long long _field1;
};

struct optional<std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>>> {
    _Bool m_initialized;
    struct aligned_storage<std::__1::chrono::time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>>> m_storage;
};

struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>> {
    duration_877adb87 _field1;
};

#pragma mark Typedef'd Structures

typedef struct {
    double *list;
    unsigned int count;
    unsigned int size;
} CDStruct_57821370;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    float _field5;
    float _field6;
    float _field7;
    _Bool _field8;
    int _field9;
    CDStruct_2c43369c _field10;
    double _field11;
    int _field12;
    int _field13;
    _Bool _field14;
} CDStruct_36c92688;

typedef struct {
    int suitability;
    CDStruct_2c43369c coordinate;
    double horizontalAccuracy;
    double altitude;
    double verticalAccuracy;
    double speed;
    double speedAccuracy;
    double course;
    double courseAccuracy;
    double timestamp;
    int confidence;
    double lifespan;
    int type;
    CDStruct_2c43369c rawCoordinate;
    double rawCourse;
    int floor;
    unsigned int integrity;
} CDStruct_7a56d1c9;

// Template types
typedef struct duration<long long, std::__1::ratio<1, 1000000000>> {
    long long _field1;
} duration_877adb87;

typedef struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>> {
    duration_877adb87 _field1;
} time_point_45f83f85;

#pragma mark Named Unions

union dummy_u {
    char data[8];
    struct a4 aligner_;
};
