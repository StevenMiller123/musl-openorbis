#include <stdarg.h>
#include <wchar.h>
#include <xlocale.h>

int swprintf(wchar_t *restrict s, size_t n, const wchar_t *restrict fmt, ...)
{
	int ret;
	va_list ap;
	va_start(ap, fmt);
	ret = vswprintf(s, n, fmt, ap);
	va_end(ap);
	return ret;
}

int swprintf_l(wchar_t *restrict s, size_t n, locale_t, const wchar_t *restrict fmt, ...)
{
	int ret;
	va_list ap;
	va_start(ap, fmt);
	ret = vswprintf(s, n, fmt, ap);
	va_end(ap);
	return ret;
}