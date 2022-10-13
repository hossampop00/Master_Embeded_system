/*
 * platform_types.h
 *
 *   Author : Hossam Eldesokey
 *   Description : Unit 3 Embedded_C >> Assignment (Platform_types)
 */

#ifndef PLATFORM_TYPES_H_
#define PLATFORM_TYPES_H_

/*---------defines----------*/

#ifndef FALSE
#define FALSE (boolean)false
#endif

#ifndef TRUE
#define TRUE  (boolean)true
#endif

/*-----------types-----------*/

typedef _Bool                 boolean;
typedef char                  char_t;
typedef signed char           sint8_t;
typedef unsigned char         uint8_t;
typedef signed short          sint16_t;
typedef unsigned short        uint16_t;
typedef signed int            sint32_t;
typedef unsigned int          uint32_t;
typedef signed long long      sint64_t;
typedef unsigned long long    uint_64;


typedef volatile char                  vchar_t;
typedef volatile signed char           vsint8_t;
typedef volatile unsigned char         vuint8_t;
typedef volatile signed short          vsint16_t;
typedef volatile unsigned short        vuint16_t;
typedef volatile signed int            vsint32_t;
typedef volatile unsigned int          vuint32_t;
typedef volatile signed long long      vsint64_t;
typedef volatile unsigned long long    vuint_64;

typedef float      float32;
typedef double     float64;


#endif /* PLATFORM_TYPES_H_ */
