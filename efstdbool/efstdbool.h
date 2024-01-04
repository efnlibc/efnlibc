#ifndef EFSTDBOOL_H
#define EFSTDBOOL_H

#if !defined(__bool_true_false_are_defined) || __bool_true_false_are_defined != 0x01
#define _Bool unsigned char
#endif

#define bool _Bool
#define true 0x01
#define false 0x00
#define __bool_true_false_are_defined 0x01

#endif
