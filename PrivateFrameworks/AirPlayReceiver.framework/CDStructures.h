//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSObject<OS_dispatch_source>;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AirPlayRTPBuffer;

struct AirPlayReceiverConnectionPrivate;

struct AirPlayReceiverServerPrivate {
    struct __CFRuntimeBase _field1;
    void *_field2;
    id _field3;
    struct {
        void *_field1;
        void *_field2;
        CDUnknownFunctionPointerType _field3;
        CDUnknownFunctionPointerType _field4;
        CDUnknownFunctionPointerType _field5;
        CDUnknownFunctionPointerType _field6;
        CDUnknownFunctionPointerType _field7;
    } _field4;
    unsigned char _field5;
    unsigned long long _field6;
    id _field7;
    struct _DNSServiceRef_t *_field8;
    unsigned char _field9;
    unsigned char _field10;
    struct _DNSServiceRef_t *_field11;
    struct HTTPServerPrivate *_field12;
    id _field13;
    struct HTTPServerPrivate *_field14;
    unsigned char _field15[16];
    float _field16;
    struct AirPlayScreenServerPrivate *_field17;
    id _field18;
    unsigned char _field19;
    int _field20;
    unsigned char _field21;
    unsigned char _field22;
    unsigned char _field23;
    unsigned char _field24;
    unsigned char _field25;
    unsigned char _field26[6];
    char _field27[17];
    char _field28[64];
    int _field29;
    unsigned char _field30;
    unsigned char _field31;
    unsigned char _field32;
    id _field33;
    unsigned char _field34;
    unsigned char _field35;
    unsigned char _field36;
    char _field37[8];
    unsigned long long _field38;
    char _field39[8];
    unsigned char _field40;
    char _field41[64];
    unsigned char _field42;
    unsigned char _field43;
    int _field44;
    unsigned char _field45;
    struct __CFDictionary *_field46;
    struct __CFDictionary *_field47;
    struct MediaControlServerPrivate *_field48;
    struct __CFDictionary *_field49;
    unsigned int _field50;
    int _field51;
    unsigned int _field52;
};

struct AirPlayReceiverSessionPrivate {
    struct __CFRuntimeBase _field1;
    id _field2;
    struct AirPlayReceiverServerPrivate *_field3;
    struct AirPlayReceiverConnectionPrivate *_field4;
    void *_field5;
    struct {
        void *_field1;
        void *_field2;
        CDUnknownFunctionPointerType _field3;
        CDUnknownFunctionPointerType _field4;
        CDUnknownFunctionPointerType _field5;
        CDUnknownFunctionPointerType _field6;
        CDUnknownFunctionPointerType _field7;
        CDUnknownFunctionPointerType _field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
    } _field6;
    struct _opaque_pthread_mutex_t _field7;
    struct _opaque_pthread_mutex_t *_field8;
    id _field9;
    unsigned int _field10;
    CDUnion_4a4a8072 _field11;
    unsigned char _field12[16];
    int _field13;
    unsigned long long _field14;
    unsigned char _field15[6];
    unsigned char _field16;
    unsigned char _field17;
    unsigned long long _field18;
    unsigned int _field19;
    unsigned long long _field20;
    unsigned long long _field21;
    unsigned int _field22;
    struct {
        struct _CCCryptor *_field1;
        unsigned char _field2[16];
    } _field23;
    CDStruct_183601bc *_field24;
    unsigned char _field25[16];
    unsigned char _field26[16];
    struct {
        unsigned int _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned long long _field5;
        unsigned long long _field6;
        unsigned long long _field7;
        unsigned long long _field8;
        unsigned long long _field9;
        unsigned long long _field10;
        unsigned int _field11;
        unsigned int _field12;
        unsigned int _field13;
        unsigned int _field14;
        unsigned int _field15;
        double _field16;
        double _field17;
        double _field18;
        double _field19;
        int _field20;
        unsigned int _field21;
        double _field22[3];
        unsigned int _field23;
        double _field24;
        double _field25;
        double _field26;
        double _field27;
        unsigned char _field28;
        unsigned int _field29;
        unsigned char _field30;
        unsigned char _field31;
        unsigned int _field32;
        unsigned int _field33;
        unsigned int _field34;
        unsigned int _field35;
        unsigned int _field36;
        unsigned int _field37;
        unsigned char _field38;
        unsigned int _field39;
        unsigned int _field40;
        unsigned int _field41;
        unsigned int _field42;
        unsigned int _field43;
        unsigned int _field44;
        unsigned char _field45;
        unsigned char _field46;
        struct {
            double _field1;
            double _field2;
            double _field3;
            double _field4;
            double _field5;
            double _field6;
            double _field7;
            double _field8;
        } _field47;
        int _field48;
        unsigned int _field49;
        unsigned int _field50;
        struct AirTunesRetransmitNode *_field51;
        struct AirTunesRetransmitNode *_field52;
        struct AirTunesRetransmitNode *_field53;
        unsigned char _field54;
        long long _field55;
        long long _field56;
        long long _field57;
        long long _field58;
        long long _field59;
        unsigned int _field60;
        unsigned int _field61;
        unsigned int _field62;
        unsigned int _field63;
        unsigned long long _field64;
        unsigned long long _field65;
        unsigned long long _field66;
        unsigned long long _field67;
        unsigned long long _field68;
        unsigned int _field69;
        unsigned int _field70;
    } _field27;
    unsigned char _field28;
    unsigned char _field29;
    unsigned char _field30;
    unsigned int _field31;
    int _field32;
    unsigned char _field33;
    unsigned char _field34;
    unsigned char _field35;
    struct HTTPClientPrivate *_field36;
    int _field37;
    int _field38;
    unsigned char _field39;
    struct PairingSessionPrivate *_field40;
    CDStruct_79f14472 _field41;
    CDStruct_79f14472 _field42;
    int _field43;
    int _field44;
    unsigned char _field45;
    unsigned short _field46;
    unsigned short _field47[512];
    int _field48;
    int _field49;
    int _field50;
    CDUnion_4a4a8072 _field51;
    unsigned int _field52;
    unsigned char _field53;
    unsigned int _field54;
    unsigned int _field55;
    unsigned int _field56;
    struct AirTunesClockPrivate *_field57;
    int _field58;
    int _field59;
    int _field60;
    CDUnion_4a4a8072 _field61;
    unsigned int _field62;
    unsigned char _field63;
    int _field64;
    struct _opaque_pthread_t *_field65;
    struct _opaque_pthread_t **_field66;
    int _field67;
    int _field68;
    int _field69;
    struct _opaque_pthread_t *_field70;
    struct _opaque_pthread_t **_field71;
    unsigned int _field72;
    unsigned int _field73;
    char *_field74;
    struct AirTunesBufferNode *_field75;
    struct AirTunesBufferNode _field76;
    struct AirTunesBufferNode *_field77;
    struct AirTunesBufferNode *_field78;
    unsigned int _field79;
    char *_field80;
    unsigned int _field81;
    char *_field82;
    unsigned int _field83;
    char *_field84;
    unsigned int _field85;
    unsigned int _field86;
    unsigned char _field87;
    unsigned long long _field88;
    unsigned long long _field89;
    unsigned int _field90;
    unsigned int _field91;
    unsigned short _field92;
    unsigned int _field93;
    unsigned char _field94;
    unsigned int _field95;
    unsigned short _field96;
    struct OpaqueAudioConverter *_field97;
    char *_field98;
    char *_field99;
    struct AudioStreamPacketDescription _field100;
    unsigned int _field101;
    unsigned char _field102;
    int _field103;
    int _field104;
    int _field105;
    int _field106;
    unsigned long long _field107;
    unsigned long long _field108;
    struct __CFDictionary *_field109;
    unsigned char _field110;
    unsigned char _field111;
    unsigned int _field112;
    unsigned char _field113;
    unsigned char _field114;
    unsigned char _field115;
    unsigned int _field116;
    unsigned int _field117;
    unsigned int _field118;
    unsigned char _field119;
    unsigned int _field120;
    unsigned int _field121;
    unsigned int _field122;
    unsigned char _field123;
    struct AirPlayReceiverSessionScreenPrivate *_field124;
    int _field125;
    struct _opaque_pthread_t *_field126;
    struct _opaque_pthread_t **_field127;
    int _field128;
    int _field129;
    struct AirPlayRTPBuffer *_field130;
    struct AirPlayRTPBuffer *_field131;
    unsigned char _field132;
    struct DashboardClientPrivate *_field133;
    unsigned char _field134;
    struct {
        unsigned char _field1;
        unsigned char _field2;
        unsigned char _field3;
        unsigned char _field4;
        unsigned char _field5;
        unsigned char _field6;
        unsigned char _field7;
        unsigned char _field8;
        unsigned char _field9;
        unsigned char _field10;
        unsigned char _field11;
        unsigned char _field12;
        unsigned char _field13;
        unsigned char _field14;
        unsigned char _field15;
        unsigned char _field16;
        unsigned int _field17;
        unsigned int _field18;
        unsigned short _field19;
        short _field20;
        short _field21;
        unsigned short _field22;
        unsigned short _field23;
        unsigned short _field24;
        unsigned short _field25;
        unsigned char _field26[6];
        unsigned char _field27[6];
        char _field28;
        char _field29;
        char _field30;
        char _field31;
        unsigned char _field32;
        unsigned char _field33;
        char _field34[16];
        unsigned char _field35;
        unsigned char _field36;
        unsigned char _field37;
        unsigned char _field38[1];
        int _field39;
        unsigned short _field40[60];
    } _field135;
    unsigned long long _field136;
    unsigned long long _field137;
    unsigned int _field138;
    unsigned int _field139;
    unsigned int _field140;
};

struct AirPlayReceiverSessionScreenPrivate;

struct AirPlayScreenServerPrivate;

struct AirTunesBufferNode {
    struct AirTunesBufferNode *_field1;
    struct AirTunesBufferNode *_field2;
    CDStruct_183601bc *_field3;
    char *_field4;
    unsigned int _field5;
    char *_field6;
    unsigned int _field7;
};

struct AirTunesClockPrivate;

struct AirTunesRetransmitNode;

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct AudioStreamPacketDescription {
    long long _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct CGAffineTransform {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
};

struct CGPoint {
    float _field1;
    float _field2;
};

struct CGSize {
    float width;
    float height;
};

struct DashboardClientPrivate;

struct HTTPClientPrivate;

struct HTTPServerPrivate;

struct MediaControlServerConnectionPrivate {
    struct __CFRuntimeBase _field1;
    CDUnion_4a4a8072 _field2;
    unsigned char _field3[16];
    unsigned long long _field4;
    unsigned char _field5[16];
    unsigned char _field6;
    char _field7[16];
    unsigned char _field8;
    unsigned char _field9;
    unsigned char _field10[6];
    unsigned char _field11;
    unsigned char _field12;
    struct {
        void *_field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
        CDUnknownFunctionPointerType _field4;
        CDUnknownFunctionPointerType _field5;
    } _field13;
    unsigned char _field14;
    unsigned char _field15;
    unsigned char _field16;
    struct __CFArray *_field17;
    struct __CFDictionary *_field18;
    unsigned char _field19[16];
    double _field20;
    unsigned char _field21;
    unsigned int _field22;
    unsigned int _field23;
    unsigned int _field24;
    unsigned int _field25;
    unsigned int _field26;
    struct __CFString *_field27[5];
    struct __CFData *_field28[5];
    unsigned int _field29;
    unsigned char _field30[16];
    double _field31;
    unsigned char _field32;
    unsigned char _field33[16];
    double _field34;
    unsigned int _field35;
    unsigned int _field36;
    double _field37;
    double _field38;
    double _field39;
    unsigned char _field40;
    unsigned int _field41;
    unsigned int _field42;
    unsigned int _field43;
    unsigned int _field44;
    id _field45;
    id _field46;
    unsigned int _field47;
    unsigned int _field48;
    unsigned int _field49;
    unsigned char _field50;
    id _field51;
    unsigned long long _field52;
    unsigned char _field53;
    unsigned char _field54;
    unsigned char _field55;
    unsigned char _field56;
};

struct MediaControlServerPrivate;

struct OpaqueAUGraph;

struct OpaqueAudioComponentInstance;

struct OpaqueAudioConverter;

struct PairingSessionPrivate;

struct RTPPacketNode {
    struct RTPPacketNode *_field1;
    struct RTPPacketNode *_field2;
    struct {
        union {
            unsigned int _field1;
            struct {
                struct {
                    unsigned char _field1;
                    unsigned char _field2;
                    unsigned short _field3;
                    unsigned int _field4;
                    unsigned int _field5;
                } _field1;
                unsigned char _field2[1];
            } _field2;
            unsigned char _field3[1472];
        } _field1;
        int _field2;
        unsigned int _field3;
        unsigned int _field4;
    } _field3;
    char *_field4;
};

struct _CCCryptor;

struct _DNSServiceRef_t;

struct __CFDictionary;

struct __CFRuntimeBase {
    unsigned int _field1;
    unsigned char _field2[4];
};

struct _opaque_pthread_mutex_t {
    long _field1;
    char _field2[40];
};

struct _opaque_pthread_t;

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int _field1;
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

#pragma mark Typedef'd Structures

typedef struct CDStruct_183601bc;

typedef struct {
    unsigned int type;
    unsigned long long format;
    unsigned char input;
    unsigned char loopback;
    unsigned char varispeed;
    unsigned char voice;
    unsigned char volumeControl;
    unsigned int activeType;
    struct AirPlayReceiverSessionPrivate *session;
    struct AudioStreamBasicDescription asbd;
    struct OpaqueAUGraph *graph;
    int converterNode;
    struct OpaqueAudioComponentInstance *converterUnit;
    int mixerNode;
    struct OpaqueAudioComponentInstance *mixerUnit;
    int varispeedNode;
    struct OpaqueAudioComponentInstance *varispeedUnit;
    int outputNode;
    struct OpaqueAudioComponentInstance *outputUnit;
    unsigned char outputStarted;
    float outputVolume;
    struct OpaqueAudioComponentInstance *inputUnit;
    char *inputBuffer;
    unsigned int inputMaxLen;
    unsigned char inputStarted;
    NSObject<OS_dispatch_source> *ducker;
} CDStruct_03e0893a;

typedef struct {
    unsigned char _field1;
    struct {
        struct {
            unsigned int _field1[16];
            unsigned char _field2[64];
            unsigned int _field3;
        } _field1;
        struct {
            unsigned int _field1;
            unsigned int _field2;
            unsigned int _field3;
            unsigned int _field4;
            unsigned int _field5;
            unsigned int _field6;
            unsigned int _field7;
            unsigned int _field8;
            unsigned int _field9;
            unsigned int _field10;
            unsigned int _field11;
            unsigned int _field12;
            unsigned int _field13;
            unsigned int _field14;
            unsigned char _field15[16];
            unsigned int _field16;
            unsigned char _field17[16];
        } _field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned char _field5;
    } _field2;
    unsigned char _field3[32];
    unsigned char _field4[8];
} CDStruct_dc8cb1c9;

typedef struct {
    struct AirPlayReceiverSessionPrivate *_field1;
    unsigned int _field2;
    char *_field3;
    int _field4;
    int _field5;
    struct _opaque_pthread_t *_field6;
    struct _opaque_pthread_t **_field7;
    struct {
        id _field1;
        struct RTPPacketNode *_field2;
        struct RTPPacketNode *_field3;
        struct RTPPacketNode *_field4;
        struct RTPPacketNode _field5;
        unsigned int _field6;
        unsigned int _field7;
        unsigned int _field8;
        unsigned int _field9;
        unsigned int _field10;
        unsigned int _field11;
        unsigned long long _field12;
        unsigned char _field13;
        unsigned char _field14;
        unsigned int _field15;
        unsigned int _field16;
        unsigned int _field17;
        unsigned int _field18;
        char *_field19;
    } _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned long long _field13;
    unsigned long long _field14;
    struct {
        unsigned long long _field1;
        unsigned int _field2;
    } _field15[30];
    unsigned int _field16;
    float _field17;
    unsigned int _field18;
    CDStruct_dc8cb1c9 _field19;
    struct {
        char *_field1;
        char *_field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned int _field5;
        unsigned int _field6;
    } _field20;
    CDUnion_4a4a8072 _field21;
    unsigned int _field22;
    unsigned short _field23;
    CDStruct_dc8cb1c9 _field24;
} CDStruct_79f14472;

#pragma mark Typedef'd Unions

typedef union {
    struct sockaddr _field1;
    struct sockaddr_in _field2;
    struct sockaddr_in6 _field3;
} CDUnion_4a4a8072;
