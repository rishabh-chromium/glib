/* glibconfig.h
 *
 * This is a generated file.  Please modify 'glibconfig.h.in'
 */

#ifndef __GLIBCONFIG_H__
#define __GLIBCONFIG_H__

#include <glib/gmacros.h>

#include <limits.h>
#include <float.h>
#include <stdint.h>
#ifndef MY_ANDROID
#include <bits/wordsize.h>
#endif

#if __WORDSIZE == 64

#define THIRD_PARTY_GLIB_INT64_TYPE long
#define THIRD_PARTY_GLIB_LONG_SIZE 8
#define THIRD_PARTY_GLIB_LONG_TO_LE GINT64_TO_LE
#define THIRD_PARTY_GLIB_LONG_TO_BE GINT64_TO_BE
#define THIRD_PARTY_GLIB_ULONG_TO_LE GUINT64_TO_LE
#define THIRD_PARTY_GLIB_ULONG_TO_BE GUINT64_TO_BE
#define THIRD_PARTY_GLIB_64_PREFIX "l"
#define THIRD_PARTY_GLIB_SIZE_SIZE 8
#define THIRD_PARTY_GLIB_SIZE_TYPE long
#define THIRD_PARTY_GLIB_SIZE_MAX G_MAXULONG
#define THIRD_PARTY_GLIB_SSIZE_MIN G_MINLONG
#define THIRD_PARTY_GLIB_SSIZE_MAX G_MAXLONG
#define THIRD_PARTY_GLIB_SIZE_PREFIX "l"

#elif __WORDSIZE == 32

#define THIRD_PARTY_GLIB_INT64_TYPE long long
#define THIRD_PARTY_GLIB_LONG_SIZE 4
#define THIRD_PARTY_GLIB_LONG_TO_LE GINT32_TO_LE
#define THIRD_PARTY_GLIB_LONG_TO_BE GINT32_TO_BE
#define THIRD_PARTY_GLIB_ULONG_TO_LE GUINT32_TO_LE
#define THIRD_PARTY_GLIB_ULONG_TO_BE GUINT32_TO_BE
#define THIRD_PARTY_GLIB_64_PREFIX "ll"
#define THIRD_PARTY_GLIB_SIZE_SIZE 4
#define THIRD_PARTY_GLIB_SIZE_TYPE int
#define THIRD_PARTY_GLIB_SIZE_MAX G_MAXUINT
#define THIRD_PARTY_GLIB_SSIZE_MIN G_MININT
#define THIRD_PARTY_GLIB_SSIZE_MAX G_MAXINT
#define THIRD_PARTY_GLIB_SIZE_PREFIX ""

#else

#error "Unknown 64bit integer type"

#endif

#define GLIB_HAVE_ALLOCA_H

/* Specifies that GLib's g_print*() functions wrap the
 * system printf functions.  This is useful to know, for example,
 * when using glibc's register_printf_function().
 */
#define GLIB_USING_SYSTEM_PRINTF

/* #undef GLIB_STATIC_COMPILATION */
/* #undef GOBJECT_STATIC_COMPILATION */

G_BEGIN_DECLS

#define G_MINFLOAT	FLT_MIN
#define G_MAXFLOAT	FLT_MAX
#define G_MINDOUBLE	DBL_MIN
#define G_MAXDOUBLE	DBL_MAX
#define G_MINSHORT	SHRT_MIN
#define G_MAXSHORT	SHRT_MAX
#define G_MAXUSHORT	USHRT_MAX
#define G_MININT	INT_MIN
#define G_MAXINT	INT_MAX
#define G_MAXUINT	UINT_MAX
#define G_MINLONG	LONG_MIN
#define G_MAXLONG	LONG_MAX
#define G_MAXULONG	ULONG_MAX

typedef signed char gint8;
typedef unsigned char guint8;

typedef signed short gint16;
typedef unsigned short guint16;

#define G_GINT16_MODIFIER "h"
#define G_GINT16_FORMAT "hi"
#define G_GUINT16_FORMAT "hu"


typedef signed int gint32;
typedef unsigned int guint32;

#define G_GINT32_MODIFIER ""
#define G_GINT32_FORMAT "i"
#define G_GUINT32_FORMAT "u"


#define G_HAVE_GINT64 1          /* deprecated, always true */

typedef THIRD_PARTY_GLIB_INT64_TYPE gint64;
typedef unsigned THIRD_PARTY_GLIB_INT64_TYPE guint64;

#define G_GINT64_CONSTANT(val) ((gint64)val)
#define G_GUINT64_CONSTANT(val) ((guint64)val)

#define G_GINT64_MODIFIER THIRD_PARTY_GLIB_64_PREFIX
#define G_GINT64_FORMAT THIRD_PARTY_GLIB_64_PREFIX "i"
#define G_GUINT64_FORMAT THIRD_PARTY_GLIB_64_PREFIX "u"


#define GLIB_SIZEOF_VOID_P THIRD_PARTY_GLIB_SIZE_SIZE
#define GLIB_SIZEOF_LONG THIRD_PARTY_GLIB_LONG_SIZE
#define GLIB_SIZEOF_SIZE_T THIRD_PARTY_GLIB_SIZE_SIZE
#define GLIB_SIZEOF_SSIZE_T THIRD_PARTY_GLIB_SIZE_SIZE

typedef signed THIRD_PARTY_GLIB_SIZE_TYPE gssize;
typedef unsigned THIRD_PARTY_GLIB_SIZE_TYPE gsize;
#define G_GSIZE_MODIFIER THIRD_PARTY_GLIB_SIZE_PREFIX
#define G_GSSIZE_MODIFIER THIRD_PARTY_GLIB_SIZE_PREFIX
#define G_GSIZE_FORMAT THIRD_PARTY_GLIB_SIZE_PREFIX "u"
#define G_GSSIZE_FORMAT THIRD_PARTY_GLIB_SIZE_PREFIX "i"

#define G_MAXSIZE THIRD_PARTY_GLIB_SIZE_MAX
#define G_MINSSIZE THIRD_PARTY_GLIB_SSIZE_MIN
#define G_MAXSSIZE THIRD_PARTY_GLIB_SSIZE_MAX

typedef gint64 goffset;
#define G_MINOFFSET	G_MININT64
#define G_MAXOFFSET	G_MAXINT64

#define G_GOFFSET_MODIFIER      G_GINT64_MODIFIER
#define G_GOFFSET_FORMAT        G_GINT64_FORMAT
#define G_GOFFSET_CONSTANT(val) G_GINT64_CONSTANT(val)

#define G_POLLFD_FORMAT "%d"

#define GPOINTER_TO_INT(p)      ((gint)  (gintptr) (p))
#define GPOINTER_TO_UINT(p)     ((guint) (guintptr) (p))

#define GINT_TO_POINTER(i)      ((gpointer) (gintptr) (i))
#define GUINT_TO_POINTER(u)     ((gpointer) (guintptr) (u))

typedef signed THIRD_PARTY_GLIB_SIZE_TYPE gintptr;
typedef unsigned THIRD_PARTY_GLIB_SIZE_TYPE guintptr;

#define G_GINTPTR_MODIFIER      THIRD_PARTY_GLIB_SIZE_PREFIX
#define G_GINTPTR_FORMAT        THIRD_PARTY_GLIB_SIZE_PREFIX "i"
#define G_GUINTPTR_FORMAT       THIRD_PARTY_GLIB_SIZE_PREFIX "u"

#define GLIB_MAJOR_VERSION 2
#define GLIB_MINOR_VERSION 65
#define GLIB_MICRO_VERSION 0

#define G_OS_UNIX

#define G_VA_COPY va_copy
#define G_VA_COPY_AS_ARRAY 1


#ifndef __cplusplus
# define G_HAVE_ISO_VARARGS 1
#endif

#ifdef __cplusplus
# define G_HAVE_ISO_VARARGS 1
#endif

/* gcc-2.95.x supports both gnu style and ISO varargs, but if -ansi
 * is passed ISO vararg support is turned off, and there is no work
 * around to turn it on, so we unconditionally turn it off.
 */
#if __GNUC__ == 2 && __GNUC_MINOR__ == 95
#  undef G_HAVE_ISO_VARARGS
#endif

#define G_HAVE_GROWING_STACK 0
#define G_HAVE_GNUC_VISIBILITY 1

#ifndef _MSC_VER
# define G_HAVE_GNUC_VARARGS 1
#endif

#if defined(__SUNPRO_C) && (__SUNPRO_C >= 0x590)
#define G_GNUC_INTERNAL __attribute__((visibility("hidden")))
#elif defined(__SUNPRO_C) && (__SUNPRO_C >= 0x550)
#define G_GNUC_INTERNAL __hidden
#elif defined (__GNUC__) && defined (G_HAVE_GNUC_VISIBILITY)
#define G_GNUC_INTERNAL __attribute__((visibility("hidden")))
#else
#define G_GNUC_INTERNAL
#endif

#define G_THREADS_ENABLED
#define G_THREADS_IMPL_POSIX

#define G_ATOMIC_LOCK_FREE

#define GINT16_TO_LE(val)	((gint16) (val))
#define GUINT16_TO_LE(val)	((guint16) (val))
#define GINT16_TO_BE(val)	((gint16) GUINT16_SWAP_LE_BE (val))
#define GUINT16_TO_BE(val)	(GUINT16_SWAP_LE_BE (val))

#define GINT32_TO_LE(val)	((gint32) (val))
#define GUINT32_TO_LE(val)	((guint32) (val))
#define GINT32_TO_BE(val)	((gint32) GUINT32_SWAP_LE_BE (val))
#define GUINT32_TO_BE(val)	(GUINT32_SWAP_LE_BE (val))

#define GINT64_TO_LE(val)	((gint64) (val))
#define GUINT64_TO_LE(val)	((guint64) (val))
#define GINT64_TO_BE(val)	((gint64) GUINT64_SWAP_LE_BE (val))
#define GUINT64_TO_BE(val)	(GUINT64_SWAP_LE_BE (val))

#define GLONG_TO_LE(val)	((glong) THIRD_PARTY_GLIB_LONG_TO_LE (val))
#define GULONG_TO_LE(val)	((gulong) THIRD_PARTY_GLIB_ULONG_TO_LE (val))
#define GLONG_TO_BE(val)	((glong) THIRD_PARTY_GLIB_LONG_TO_BE (val))
#define GULONG_TO_BE(val)	((gulong) THIRD_PARTY_GLIB_ULONG_TO_BE (val))
#define GINT_TO_LE(val)		((gint) GINT32_TO_LE (val))
#define GUINT_TO_LE(val)	((guint) GUINT32_TO_LE (val))
#define GINT_TO_BE(val)		((gint) GINT32_TO_BE (val))
#define GUINT_TO_BE(val)	((guint) GUINT32_TO_BE (val))
#define GSIZE_TO_LE(val)	((gsize) THIRD_PARTY_GLIB_LONG_TO_LE (val))
#define GSSIZE_TO_LE(val)	((gssize) THIRD_PARTY_GLIB_ULONG_TO_LE (val))
#define GSIZE_TO_BE(val)	((gsize) THIRD_PARTY_GLIB_LONG_TO_BE (val))
#define GSSIZE_TO_BE(val)	((gssize) THIRD_PARTY_GLIB_ULONG_TO_BE (val))
#define G_BYTE_ORDER G_LITTLE_ENDIAN

#define GLIB_SYSDEF_POLLIN =1
#define GLIB_SYSDEF_POLLOUT =4
#define GLIB_SYSDEF_POLLPRI =2
#define GLIB_SYSDEF_POLLHUP =16
#define GLIB_SYSDEF_POLLERR =8
#define GLIB_SYSDEF_POLLNVAL =32

#define G_MODULE_SUFFIX "so"

typedef int GPid;
#define G_PID_FORMAT "i"

#define GLIB_SYSDEF_AF_UNIX 1
#define GLIB_SYSDEF_AF_INET 2
#define GLIB_SYSDEF_AF_INET6 10

#define GLIB_SYSDEF_MSG_OOB 1
#define GLIB_SYSDEF_MSG_PEEK 2
#define GLIB_SYSDEF_MSG_DONTROUTE 4

#define G_DIR_SEPARATOR '/'
#define G_DIR_SEPARATOR_S "/"
#define G_SEARCHPATH_SEPARATOR ':'
#define G_SEARCHPATH_SEPARATOR_S ":"

G_END_DECLS

#endif /* __GLIBCONFIG_H__ */
