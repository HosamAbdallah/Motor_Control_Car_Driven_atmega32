


#ifndef STDTYPES_H_
#define STDTYPES_H_


typedef unsigned char u8;
typedef signed char s8;

typedef unsigned short u16;
typedef signed short s16;

typedef unsigned long u32;
typedef signed long s32;

typedef unsigned long long u64;
typedef signed long long s64;

typedef float F32;

#define NULL 0
#define NULLPTR ((void*)0)

typedef enum{
	FALSE,
	TRUE
}bool_type;

#define  MAX_U16 ((u16)65535)
#define  MIN_U16 ((u16)0)
#define  MAX_S16 ((s16)32767)
#define  MIN_S16 ((s16)-32768)


#endif /* STDTYPES_H_ */