// Types that we should be able to import.
typedef char __attribute__((ext_vector_type(2))) char2;
typedef char __attribute__((ext_vector_type(64))) char64;
typedef unsigned char __attribute__((ext_vector_type(3))) uchar3;
typedef unsigned char __attribute__((ext_vector_type(32))) uchar32;
typedef short __attribute__((ext_vector_type(3))) short3;
typedef short __attribute__((ext_vector_type(8))) short8;
typedef unsigned short __attribute__((ext_vector_type(1))) ushort1;
typedef unsigned short __attribute__((ext_vector_type(16))) ushort16;
typedef int __attribute__((ext_vector_type(3))) int3;
typedef int __attribute__((ext_vector_type(32))) int32;
typedef unsigned int __attribute__((ext_vector_type(4))) uint4;
typedef unsigned int __attribute__((ext_vector_type(2))) uint2;
typedef long __attribute__((ext_vector_type(2))) long2;
typedef long __attribute__((ext_vector_type(8))) long8;
typedef unsigned long __attribute__((ext_vector_type(4))) ulong4;
typedef unsigned long __attribute__((ext_vector_type(1))) ulong1;
typedef long long __attribute__((ext_vector_type(3))) ll3;
typedef long long __attribute__((ext_vector_type(8))) ll8;
typedef unsigned long long __attribute__((ext_vector_type(4))) ull4;
typedef unsigned long long __attribute__((ext_vector_type(16))) ull16;

// We would prefer to use _Float16 for these typedefs, but that's not
// yet implemented in clang on x86, so use __fp16 instead as a hack.
// We want to be able to import both of them anyway.
typedef __fp16 __attribute__((ext_vector_type(2))) half2;
typedef __fp16 __attribute__((ext_vector_type(3))) half3;
typedef __fp16 __attribute__((ext_vector_type(4))) half4;
typedef __fp16 __attribute__((ext_vector_type(8))) half8;
typedef __fp16 __attribute__((ext_vector_type(16))) half16;
typedef __fp16 __attribute__((ext_vector_type(32))) half32;
typedef float __attribute__((ext_vector_type(2))) float2;
typedef float __attribute__((ext_vector_type(3))) float3;
typedef float __attribute__((ext_vector_type(4))) float4;
typedef float __attribute__((ext_vector_type(8))) float8;
typedef float __attribute__((ext_vector_type(16))) float16;
typedef double __attribute__((ext_vector_type(2))) double2;
typedef double __attribute__((ext_vector_type(3))) double3;
typedef double __attribute__((ext_vector_type(4))) double4;
typedef double __attribute__((ext_vector_type(8))) double8;

typedef struct { float4 columns[4]; } float4x4;

// Types that we should not be able to import.
typedef char __attribute__((ext_vector_type(17))) char17;
typedef unsigned char __attribute__((ext_vector_type(21))) uchar21;
typedef short __attribute__((ext_vector_type(5))) short5;
typedef unsigned short __attribute__((ext_vector_type(6))) ushort6;
typedef int __attribute__((ext_vector_type(128))) int128;
typedef unsigned int __attribute__((ext_vector_type(20))) uint20;

char2 makes_char2();
char64 makes_char64();
uchar3 makes_uchar3();
uchar32 makes_uchar32();
short3 makes_short3();
short8 makes_short8();
ushort1 makes_ushort1();
ushort16 makes_ushort16();
int3 makes_int3();
int32 makes_int32();
uint4 makes_uint4();
uint2 makes_uint2();
long2 makes_long2();
long8 makes_long8();
ulong4 makes_ulong4();
ulong1 makes_ulong1();
ll3 makes_ll3();
ll8 makes_ll8();
ull4 makes_ull4();
ull16 makes_ull16();
half2 makes_half2();
half3 makes_half3();
half4 makes_half4();
half8 makes_half8();
half16 makes_half16();
half32 makes_half32();
float2 makes_float2();
float3 makes_float3();
float4 makes_float4();
float8 makes_float8();
float16 makes_float16();
double2 makes_double2();
double3 makes_double3();
double4 makes_double4();
double8 makes_double8();
char17 makes_char17();
uchar21 makes_uchar21();
short5 makes_short5();
ushort6 makes_ushort6();
int128 makes_int128();
uint20 makes_uint20();

#ifndef SIMD_NO_CODE
void takes_char2(char2);
void takes_char64(char64);
void takes_uchar3(uchar3);
void takes_uchar32(uchar32);
void takes_short3(short3);
void takes_short8(short8);
void takes_ushort1(ushort1);
void takes_ushort16(ushort16);
void takes_int3(int3);
void takes_int32(int32);
void takes_uint4(uint4);
void takes_uint2(uint2);
void takes_long2(long2);
void takes_long8(long8);
void takes_ulong4(ulong4);
void takes_ulong1(ulong1);
void takes_ll3(ll3);
void takes_ll8(ll8);
void takes_ull4(ull4);
void takes_ull16(ull16);
void takes_half2(half2);
void takes_half3(half3);
void takes_half4(half4);
void takes_half8(half8);
void takes_half16(half16);
void takes_half32(half32);
void takes_float2(float2);
void takes_float3(float3);
void takes_float4(float4);
void takes_float8(float8);
void takes_float16(float16);
void takes_double2(double2);
void takes_double3(double3);
void takes_double4(double4);
void takes_double8(double8);
void takes_char17(char17);
void takes_uchar21(uchar21);
void takes_short5(short5);
void takes_ushort6(ushort6);
void takes_int128(int128);
void takes_uint20(uint20);
#endif
