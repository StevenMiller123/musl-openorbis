#include <stdio.h>
#include <stdarg.h>
#include <wchar.h>
#include <xlocale.h>

int fwprintf(FILE *restrict f, const wchar_t *restrict fmt, ...)
{
	int ret;
	va_list ap;
	va_start(ap, fmt);
	ret = vfwprintf(f, fmt, ap);
	va_end(ap);
	return ret;
}

int fwprintf_l(FILE *restrict f, locale_t locale, const wchar_t *restrict fmt, ...)
{
	int ret;
	va_list ap;
	va_start(ap, fmt);
	ret = vfwprintf(f, fmt, ap);
	va_end(ap);
	return ret;
}