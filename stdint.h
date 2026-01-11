#ifndef _STDINT_H
#define _STDINT_H

#ifdef __INT8_TYPE__
typedef __INT8_TYPE__ int8_t;
#else
#error __INT8_TYPE__
#endif

#ifdef __INT16_TYPE__
typedef __INT16_TYPE__ int16_t;
#else
#error __INT16_TYPE__
#endif

#ifdef __INT32_TYPE__
typedef __INT32_TYPE__ int32_t;
#else
#error __INT32_TYPE__
#endif

#ifdef __INT64_TYPE__
typedef __INT64_TYPE__ int64_t;
#else
#error __INT64_TYPE__
#endif

#ifdef __UINT8_TYPE__
typedef __UINT8_TYPE__ uint8_t;
#else
#error __UINT8_TYPE__
#endif

#ifdef __UINT16_TYPE__
typedef __UINT16_TYPE__ uint16_t;
#else
#error __UINT16_TYPE__
#endif

#ifdef __UINT32_TYPE__
typedef __UINT32_TYPE__ uint32_t;
#else
#error __UINT32_TYPE__
#endif

#ifdef __UINT64_TYPE__
typedef __UINT64_TYPE__ uint64_t;
#else
#error __UINT64_TYPE__
#endif

typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;

typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;

typedef int_least8_t int_fast8_t;
typedef int_least16_t int_fast16_t;
typedef int_least32_t int_fast32_t;
typedef int_least64_t int_fast64_t;

typedef uint_least8_t uint_fast8_t;
typedef uint_least16_t uint_fast16_t;
typedef uint_least32_t uint_fast32_t;
typedef uint_least64_t uint_fast64_t;

/* intptr_t */
/* uintptr_t */
/* intmax_t */
/* uintmax_t */

#ifdef __INT8_MAX__
#define INT8_MIN (-__INT8_MAX__ - 0x01)
#else
#error __INT8_MAX__
#endif

#ifdef __INT16_MAX__
#define INT16_MIN (-__INT16_MAX__ - 0x01)
#else
#error __INT16_MAX__ 
#endif

#ifdef __INT32_MAX__ 
#define INT32_MIN (-__INT32_MAX__ - 0x01)
#else
#error __INT32_MAX__ 
#endif

#ifdef __INT64_MAX__
#define INT64_MIN (-__INT64_MAX__ - 0x01)
#else
#error __INT64_MAX__ 
#endif

#ifdef __INT8_MAX__ 
#define INT8_MAX __INT8_MAX__
#else
#error __INT8_MAX__
#endif

#ifdef __INT16_MAX__ 
#define INT16_MAX __INT16_MAX__
#else
#error __INT16_MAX__
#endif

#ifdef __INT32_MAX__ 
#define INT32_MAX __INT32_MAX__
#else
#error __INT32_MAX__ 
#endif

#ifdef __INT64_MAX__ 
#define INT64_MAX __INT64_MAX__
#else
#error __INT64_MAX__
#endif

#ifdef __UINT8_MAX__ 
#define UINT8_MAX __UINT8_MAX__
#else
#error __UINT8_MAX__
#endif

#ifdef __UINT16_MAX__ 
#define UINT16_MAX __UINT16_MAX__
#else
#error __UINT16_MAX__
#endif

#ifdef __UINT32_MAX__ 
#define UINT32_MAX __UINT32_MAX__
#else
#error __UINT32_MAX__
#endif

#ifdef __UINT64_MAX__ 
#define UINT64_MAX __UINT64_MAX__
#else
#error __UINT64_MAX__
#endif

#define INT_LEAST8_MIN INT8_MIN
#define INT_LEAST16_MIN INT16_MIN
#define INT_LEAST32_MIN INT32_MIN
#define INT_LEAST64_MIN INT64_MIN

#define INT_LEAST8_MAX INT8_MAX
#define INT_LEAST16_MAX INT16_MAX
#define INT_LEAST32_MAX INT32_MAX
#define INT_LEAST64_MAX INT64_MAX

#define UINT_LEAST8_MAX UINT8_MAX
#define UINT_LEAST16_MAX UINT16_MAX
#define UINT_LEAST32_MAX UINT32_MAX
#define UINT_LEAST64_MAX UINT64_MAX

#define INT_FAST8_MIN INT_LEAST8_MIN
#define INT_FAST16_MIN INT_LEAST16_MIN
#define INT_FAST32_MIN INT_LEAST32_MIN
#define INT_FAST64_MIN INT_LEAST64_MIN

#define INT_FAST8_MAX INT_LEAST8_MAX
#define INT_FAST16_MAX INT_LEAST16_MAX
#define INT_FAST32_MAX INT_LEAST32_MAX
#define INT_FAST64_MAX INT_LEAST64_MAX

#define UINT_FAST8_MAX UINT_LEAST8_MAX
#define UINT_FAST16_MAX UINT_LEAST16_MAX
#define UINT_FAST32_MAX UINT_LEAST32_MAX
#define UINT_FAST64_MAX UINT_LEAST64_MAX

/* INTPTR_MIN */
/* INTPTR_MAX */
/* UINTPTR_MAX */
/* INTMAX_MIN */
/* INTMAX_MAX */
/* UINTMAX_MAX */

#ifdef __PTRDIFF_MAX__
#define PTRDIFF_MIN (-__PTRDIFF_MAX__ - 0x01)
#else
#error __PTRDIFF_MAX__
#endif

#ifdef __PTRDIFF_MAX__
#define PTRDIFF_MAX __PTRDIFF_MAX__
#else
#error __PTRDIFF_MAX__
#endif

#ifdef __SIG_ATOMIC_MAX__
#if __SIG_ATOMIC_MAX__ & ~(__SIG_ATOMIC_MAX__ >> 0x01)
#define SIG_ATOMIC_MIN (-__SIG_ATOMIC_MAX__ - 0x01)
#else
#ifdef __SIG_ATOMIC_WIDTH__
#if __SIG_ATOMIC_WIDTH__ == 0x08
#define SIG_ATOMIC_MIN INT8_C(0x00)
#elif __SIG_ATOMIC_WIDTH__ == 0x16
#define SIG_ATOMIC_MIN INT16_C(0x00)
#elif __SIG_ATOMIC_WIDTH__ == 0x20
#define SIG_ATOMIC_MIN INT32_C(0x00)
#elif __SIG_ATOMIC_WIDTH__ == 0x40
#define SIG_ATOMIC_MIN INT64_C(0x00)
#else
#error __SIG_ATOMIC_WIDTH__
#endif
#else
#error __SIG_ATOMIC_WIDTH__
#endif
#endif
#else
#error __SIG_ATOMIC_MAX__
#endif

#ifdef __SIG_ATOMIC_MAX__ 
#define SIG_ATOMIC_MAX __SIG_ATOMIC_MAX__ 
#else
#error __SIG_ATOMIC_MAX__ 
#endif

#ifdef __SIZE_MAX__
#define SIZE_MAX __SIZE_MAX__
#else
#error __SIZE_MAX__
#endif

#ifdef __WCHAR_MAX__
#if __WCHAR_MAX__ & ~(__WCHAR_MAX__ >> 0x01)
#define WCHAR_MIN (-__WCHAR_MAX__ - 0x01)
#else
#ifdef __WCHAR_WIDTH__
#if __WCHAR_WIDTH__ == 0x08
#define WCHAR_MIN INT8_C(0x00)
#elif __WCHAR_WIDTH__ == 0x16
#define WCHAR_MIN INT16_C(0x00)
#elif __WCHAR_WIDTH__ == 0x20
#define WCHAR_MIN INT32_C(0x00)
#elif __WCHAR_WIDTH__ == 0x40
#define WCHAR_MIN INT64_C(0x00)
#else
#error __SIG_ATOMIC_WIDTH__
#endif
#else
#error __SIG_ATOMIC_WIDTH__
#endif
#endif
#else
#error __WCHAR_MAX__
#endif

#ifdef __WCHAR_MAX__
#define WCHAR_MAX __WCHAR_MAX__
#else
#error __WCHAR_MAX__
#endif

/* WINT_MIN */
/* WINT_MAX */

#ifdef __INT8_C
#define INT8_C(value) __INT8_C(value)
#else
#define INT8_C(value) value
#endif

#ifdef __INT16_C
#define INT16_C(value) __INT16_C(value)
#else
#define INT16_C(value) value
#endif

#ifdef __INT32_C
#define INT32_C(value) __INT32_C(value)
#else
#define INT32_C(value) value
#endif

#ifdef __INT64_C
#define INT64_C(value) __INT64_C(value)
#else
#define INT64_C(value) value
#endif

#ifdef __UINT8_C
#define UINT8_C(value) __UINT8_C(value)
#else
#define UINT8_C(value) value
#endif

#ifdef __UINT16_C
#define UINT16_C(value) __UINT16_C(value)
#else
#define UINT16_C(value) value
#endif

#ifdef __UINT32_C
#define UINT32_C(value) __UINT32_C(value)
#else
#define UINT32_C(value) value
#endif

#ifdef __UINT64_C
#define UINT64_C(value) __UINT64_C(value)
#else
#define UINT64_C(value) value
#endif

/* INTMAX_C */
/* UINTMAX_C */

#endif

