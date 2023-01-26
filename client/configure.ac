AC_PREREQ([2.71])
AC_INIT([proxmark3], [3.1.0], [https://github.com/Proxmark/proxmark3])
AC_CONFIG_SRCDIR([cmdhficlass.h])
AC_CONFIG_HEADERS([config.h])

# Checks for programs.
AC_PROG_AWK
AC_PROG_CXX
AC_PROG_CC
AC_PROG_MAKE_SET
AC_PROG_RANLIB

# Checks for libraries.
# FIXME: Replace 'main' with a function in '-lusb':
AC_CHECK_LIB([usb], [main])

# Checks for header files.
AC_CHECK_HEADERS([arpa/inet.h fcntl.h inttypes.h mach/mach.h malloc.h stdint.h strings.h sys/ioctl.h sys/param.h sys/time.h sys/timeb.h termios.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_C_INLINE
AC_TYPE_INT16_T
AC_TYPE_INT32_T
AC_TYPE_INT64_T
AC_TYPE_INT8_T
AC_C_RESTRICT
AC_TYPE_SIZE_T
AC_TYPE_SSIZE_T
AC_TYPE_UINT16_T
AC_TYPE_UINT32_T
AC_TYPE_UINT64_T
AC_TYPE_UINT8_T
AC_CHECK_TYPES([ptrdiff_t])

# Checks for library functions.
AC_FUNC_ERROR_AT_LINE
AC_FUNC_MALLOC
AC_FUNC_MMAP
AC_FUNC_REALLOC
AC_FUNC_STRNLEN
AC_FUNC_STRTOD
AC_CHECK_FUNCS([clock_gettime gettimeofday localeconv memchr memmove memset munmap pow realpath setlocale strchr strcspn strerror strpbrk strrchr strstr strtol strtoul strtoull])

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
