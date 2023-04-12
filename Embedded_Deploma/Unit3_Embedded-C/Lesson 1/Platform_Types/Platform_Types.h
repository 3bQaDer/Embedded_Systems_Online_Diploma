#ifndef PLATFORM_TYPES_H_
#define  PLATFORM_TYPES_H_


#define CPU_TYPE	 	CPU_TYPES_32
#define CPU_BIT_ORDER	MSB_FIRST
#define CPU_BYTE_ORDER	HIGH_BYTE_ORDER


typedef unsigned char                     u8_h;
typedef signed char                       s8_h;

typedef unsigned short                    u16_h;
typedef signed short                      s16_h;

typedef unsigned int                      u32_h;
typedef signed int                        s32_h;

typedef unsigned long int                 u64_h;
typedef signed long int                   s64_h;

typedef float                             f32_h;
typedef double                            f64_h;
typedef long double                       f128_h;

//Volatile def

typedef volatile unsigned char            vu8_h;
typedef volatile signed char              vs8_h;

typedef volatile unsigned short           vu16_h;
typedef volatile signed short             vs16_h;

typedef volatile unsigned int             vu32_h;
typedef volatile signed int               vs32_h;

typedef volatile unsigned long int        vu64_h;
typedef volatile signed long int          vs64_h;

typedef volatile float                    vf32_h;
typedef volatile double                   vf64_h;
typedef volatile long double              vf128_h;

#endif
