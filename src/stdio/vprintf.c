#include <stdio.h>
#include <xlocale.h>

int vprintf(const char *restrict fmt, va_list ap)
{
	return vfprintf(stdout, fmt, ap);
}

int vprintf_l(locale_t, const char *restrict fmt, va_list ap)
{
	return vfprintf(stdout, fmt, ap);
}