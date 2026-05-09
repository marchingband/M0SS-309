#ifndef STRINGS_H
#define STRINGS_H

#include <circle/stdarg.h>

// #include <circle/string.h>
// #include <circle/stdarg.h>
// #include <circle/util.h>

int sprintf (char *buf, const char *fmt, ...);
int snprintf (char *buf, size_t size, const char *fmt, ...);
int vsnprintf (char *buf, size_t size, const char *fmt, va_list var);
int strtol(const char* str, char** endptr = nullptr);

#endif
