#include <stdarg.h>
#include <wchar.h>
#include <xlocale.h>

int swscanf(const wchar_t *restrict s, const wchar_t *restrict fmt, ...)
{
	int ret;
	va_list ap;
	va_start(ap, fmt);
	ret = vswscanf(s, fmt, ap);
	va_end(ap);
	return ret;
}

int swscanf_l(const wchar_t *restrict s, locale_t locale, const wchar_t *restrict fmt, ...)
{
	int ret;
	va_list ap;
	va_start(ap, fmt);
	ret = vswscanf(s, fmt, ap);
	va_end(ap);
	return ret;
}

weak_alias(swscanf,__isoc99_swscanf);
