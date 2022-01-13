#ifndef __TYPES_H
#define __TYPES_H

/*
#define __SIZEOF_BYTE__    1
#define __SIZEOF_WORD__    2
#define __SIZEOF_DWORD__   4
#define __SIZEOF_QWORD__   8

typedef unsigned char           __BYTE__;
typedef signed char             __SIGNED_BYTE__;
#if defined(__SIZEOF_SHORT__)&&(__SIZEOF_SHORT__ == __SIZEOF_WORD__)
    typedef unsigned short      __WORD__;
    typedef signed short        __SIGNED_WORD__;
#elif defined(__SIZEOF_INT__)&&(__SIZEOF_INT__ == __SIZEOF_WORD__)
    typedef unsigned int        __WORD__;
    typedef signed int          __SIGNED_WORD__;
#endif
#if defined(__SIZEOF_INT__)&&(__SIZEOF_INT__ == __SIZEOF_DWORD__)
    typedef unsigned int        __DWORD__;
    typedef signed int          __SIGNED_DWORD__;
#elif defined(__SIZEOF_LONG__)&&(__SIZEOF_LONG__ == __SIZEOF_DWORD__)
    typedef unsigned long       __DWORD__;
    typedef signed long         __SIGNED_DWORD__;
#endif
#if defined(__SIZEOF_LONG__)&&(__SIZEOF_LONG__ == __SIZEOF_QWORD__)
    typedef unsigned long       __QWORD__;
    typedef signed long         __SIGNED_QWORD__;
#elif defined(__SIZEOF_LONG_LONG__)&&(__SIZEOF_LONG_LONG__ == __SIZEOF_QWORD__)
    typedef unsigned long long  __QWORD__;
    typedef signed long long    __SIGNED_QWORD__;
#endif

typedef __BYTE__ *              __POINTER__;

#if defined(__SIZEOF_POINTER__)
    #if (__SIZEOF_POINTER__ == __SIZEOF_QWORD__)
        typedef __QWORD__        __UNSIGNED__;
        typedef __SIGNED_QWORD__ __SIGNED__;
    #elif (__SIZEOF_POINTER__ == __SIZEOF_DWORD__)
        typedef __DWORD__        __UNSIGNED__;
        typedef __SIGNED_DWORD__ __SIGNED__;
    #endif
#endif
*/

//#include <stddef.h>
#include <stdio.h>
#include <stdint.h>

typedef unsigned char   __BYTE__;
typedef signed char     __SIGNED_BYTE__;
typedef uint16_t        __WORD__;
typedef int16_t         __SIGNED_WORD__;
typedef uint32_t        __DWORD__;
typedef int32_t         __SIGNED_DWORD__;
typedef uint64_t        __QWORD__;
typedef int64_t         __SIGNED_QWORD__;
typedef __BYTE__ *      __POINTER__;

typedef uintptr_t       __UNSIGNED__;       // size_t
typedef intptr_t        __SIGNED__;         // ptrdiff_t

#endif // __TYPES_H
