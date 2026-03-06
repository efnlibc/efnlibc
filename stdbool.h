#ifndef STDBOOL_H
#define STDBOOL_H

#if !defined __STDC_VERSION__ || __STDC_VERSION__ < 202311L
#if !defined __STDC_VERSION__ || __STDC_VERSION__ < 199901L
#ifdef __UINT8_TYPE__
#define bool __UINT8_TYPE__
#else
#error __UINT8_TYPE__
#endif
#else
#define bool _Bool
#endif
#define true 0x01
#define false 0x00
#endif
#define __bool_true_false_are_defined 0x01

#endif
