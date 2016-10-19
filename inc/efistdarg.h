#ifndef _EFISTDARG_H_
#define _EFISTDARG_H_

/*++

Copyright (c) 1998  Intel Corporation

Module Name:

    devpath.h

Abstract:

    Defines for parsing the EFI Device Path structures



Revision History

--*/

#ifndef GNU_EFI_USE_EXTERNAL_STDARG
typedef __builtin_va_list va_list;
# ifndef va_start
#  define va_start(v,l)	__builtin_va_start(v,l)
# endif
# ifndef va_end
#  define va_end(v)	__builtin_va_end(v)
# endif
# ifndef va_arg
#  define va_arg(v,l)	__builtin_va_arg(v,l)
# endif
# ifndef va_copy
#  define va_copy(d,s)	__builtin_va_copy(d,s)
# endif
#else
# include <stdarg.h>
#endif

#endif
