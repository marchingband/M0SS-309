#include <circle/string.h>
#include <circle/stdarg.h>
#include <circle/util.h>

// extern "C"{

int sprintf (char *buf, const char *fmt, ...)
{
	va_list var;
	va_start (var, fmt);

	CString Msg;
	Msg.FormatV (fmt, var);

	va_end (var);

	strcpy (buf, (const char *) Msg);

	return Msg.GetLength ();
}

int snprintf (char *buf, size_t size, const char *fmt, ...)
{
	va_list var;
	va_start (var, fmt);

	CString Msg;
	Msg.FormatV (fmt, var);

	va_end (var);

	size_t len = Msg.GetLength ();
	if (--size < len)
	{
		len = size;
	}

	memcpy (buf, (const char *) Msg, len);
	buf[len] = '\0';

	return len;
}

int vsnprintf (char *buf, size_t size, const char *fmt, va_list var)
{
	CString Msg;
	Msg.FormatV (fmt, var);

	size_t len = Msg.GetLength ();
	if (--size < len)
	{
		len = size;
	}

	memcpy (buf, (const char *) Msg, len);
	buf[len] = '\0';

	return len;
}

int strtol(const char* str, char** endptr = nullptr) {
    const char* p = str;

    // Skip leading whitespace
    while (*p == ' ' || *p == '\t') ++p;

    bool negative = false;
    if (*p == '-') {
        negative = true;
        ++p;
    } else if (*p == '+') {
        ++p;
    }

    long result = 0;
    bool any_digits = false;

    while (*p >= '0' && *p <= '9') {
        result = result * 10 + (*p - '0');
        ++p;
        any_digits = true;
    }

    if (endptr)
        *endptr = const_cast<char*>(any_digits ? p : str);

    return negative ? -result : result;
}

// }
